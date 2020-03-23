    #include "TXLib.h"
    #include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
    #define LEN 200000

    class Button
    {
        private:
            int firstX;
            int firstY;
            int secondX;
            int secondY;
            int layout;

        public:
            Button(int valueFirstX, int valueFirstY, int valueSecondX, int valueSecondY, int valueLayout)
            {
                firstX = valueFirstX; 
                firstY = valueFirstY;
                secondX = valueSecondX; 
                secondY = valueSecondY;
                layout = valueLayout;
            }

            bool IsClicked(int valueLayout1)
            {
                RECT Collision = {firstX, firstY, secondX, secondY};
                if(GetAsyncKeyState(VK_LBUTTON))
                {
                    if(In(txMousePos(), Collision))
                    {  
                        if(layout == valueLayout1)
                        {
                            return true;
                        }else{
                            return false;
                        }
                    }
                }
            }
    };

    class Collector
    {
        private:
            int x;
            int y;
            int animation;
            int frame;
            int IsCreated;
            
        public:
            Collector()
            {
                animation = 1;
                frame = 1;
                IsCreated = 0;
            }
            void SetCoordinate(int valueX, int valueY) {x = valueX; y = valueY; }
            void SetState(int valueState) { IsCreated = valueState; }
            void SetAnimation(int valueAnimation) { animation = valueAnimation; }
            void SetFrame(int valueFrame) {frame = valueFrame;}
            void Frames(int NowFrame)
            {
                if(NowFrame == 1)
                {
                    frame = 2;
                }
                if(NowFrame == 2)
                {
                    frame = 3;
                }
                if(NowFrame == 3)
                {
                    frame = 1;
                }
            }
            bool Collect()
            {
                if(In(x+22, 288, 333))
                {
                    if(animation != 2)
                    {
                        return true;
                    }
                }
            }

            int GetX() { return x; }
            int GetY() { return y; }
            int GetAnimation() { return animation; }
            int GetFrame() { return frame; }
            int GetState() { return IsCreated; }
    };

    class Woodcutter
    {
        private:
            int x;
            int y;
            int animation;
            int frame;
            int IsCreated;
            
        public:
            Woodcutter()
            {
                animation = 1;
                frame = 1;
                IsCreated = 0;
            }
            void SetCoordinate(int valueX, int valueY) {x = valueX; y = valueY; }
            void SetState(int valueState) { IsCreated = valueState; }
            void SetAnimation(int valueAnimation) { animation = valueAnimation; }
            void SetFrame(int valueFrame) {frame = valueFrame;}
            void Frames(int NowFrame)
            {
                if(NowFrame == 1)
                {
                    frame = 2;
                }
                if(NowFrame == 2)
                {
                    frame = 3;
                }
                if(NowFrame == 3)
                {
                    frame = 1;
                }
            }

            int GetX() { return x; }
            int GetY() { return y; }
            int GetAnimation() { return animation; }
            int GetFrame() { return frame; }
            int GetState() { return IsCreated; }
    };

    class Archer
    {
        private:
            int x;
            int y;
            int animation;
            int frame;
            int IsCreated;
            
        public:
            Archer()
            {
                animation = 1;
                frame = 1;
                IsCreated = 0;
            }
            void SetCoordinate(int valueX, int valueY) {x = valueX; y = valueY; }
            void SetState(int valueState) { IsCreated = valueState; }
            void SetAnimation(int valueAnimation) { animation = valueAnimation; }
            void SetFrame(int valueFrame) {frame = valueFrame;}
            void Frames(int NowFrame)
            {
                if(NowFrame == 1)
                {
                    frame = 2;
                }
                if(NowFrame == 2)
                {
                    frame = 3;
                }
                if(NowFrame == 3)
                {
                    frame = 1;
                }
            }

            int GetX() { return x; }
            int GetY() { return y; }
            int GetAnimation() { return animation; }
            int GetFrame() { return frame; }
            int GetState() { return IsCreated; }
    };

    class Vegetables
    {
        private:
            int x;
            int y;
            int frame;
            bool IsCollecting;
            
        public:
            Vegetables()
            {
                frame = 1;
                IsCollecting = 0;
            }
            void SetCoordinate(int valueX, int valueY) {x = valueX; y = valueY; }
            void SetFrame(int valueFrame) {frame = valueFrame;}
            void Frames(int NowFrame)
            {
                if(frame != 4)
                {
                    if(NowFrame == 1)
                    {
                        frame = 2;
                    }
                    if(NowFrame == 2)
                    {
                        frame = 3;
                    }
                    if(NowFrame == 3)
                    {
                        frame = 4;
                    }
                }
            }

            int GetX() { return x; }
            int GetY() { return y; }
            int GetFrame() { return frame; }      
            bool IsCollect() { return IsCollecting; }
    };

    class Trees
    {
        private:
            int x;
            int y;
            int frame;
            
        public:
            Trees()
            {
                frame = 1;
            }
            void SetCoordinate(int valueX, int valueY) {x = valueX; y = valueY; }
            void SetFrame(int valueFrame) {frame = valueFrame;}
            void Frames(int NowFrame)
            {
                if(NowFrame == 1)
                {
                    frame = 2;
                }
                if(NowFrame == 2)
                {
                    frame = 3;
                }
                if(NowFrame == 3)
                {
                    frame = 1;
                }
            }

            int GetX() { return x; }
            int GetY() { return y; }
            int GetFrame() { return frame; }      
    };

    COLORREF **loadImage(int x, int y, int width, int height, string imageText)
    {
        char imagePath[LEN];
        char *str2char = new char[imageText.length() + 1];
        strcpy(str2char, imageText.c_str());

        strcat(imagePath, "Resources\\Images\\");
        strcat(imagePath, str2char);
        strcat(imagePath, ".bmp");

        txBegin();
        HDC image = txLoadImage(imagePath);
        txBitBlt(txDC(), x, y, width, height, image, 0, 0);

        COLORREF **pixelsArray = new COLORREF*[width]; 
        for(int i = 0; i<width; i++)
        {
            pixelsArray[i] = new COLORREF[height];
            for(int j=0; j<height; j++)
            {
                pixelsArray[i][j] = txGetPixel(i, j);
            }
        }
        txDeleteDC(image);
        txClear();
        txEnd();
        return pixelsArray;
    }

    /*void deleteImage(COLORREF *imageArray)
    {
        for(int i = 0; i < *imageArray.GetLength(0); i++)
        {
            delete[]**imageArray[i]; 
        }
        delete [] *imageArray;
    }*/

    void drawingBackground(COLORREF **pixelsArray)
    {
        for(int y = 0; y<720; y++)
        {
            for(int x = 0; x<1280; x++)
            {
                if(pixelsArray[x][y] != RGB(255, 255, 255))
                {
                    txSetPixel(x, y, pixelsArray[x][y]);
                }
            }
        }
    }

    /*void drawingUI()
    {

    }

    void drawingObjects()
    {

    }

    void drawingHero()
    {

    }

    void SaveGame(int Act, int HouseUpgrade, int TreesUpgrade, int VegetablesUpgrade)
    {
        FILE *Save;
        char ActText[LEN];
        char HouseUpgradeText[LEN];

        itoa(Act, ActText, 10);
        itoa(HouseUpgrade, HouseUpgradeText, 10);
    
        Save = fopen("Resources\\Saving.txt", "w");
        fputs(strcat(strcat(ActText, "_"), HouseUpgradeText), Save);
        fclose(Save);
    }

    void LoadGame(int *Act, int *HouseUpgrade, int *TreesUpgrade, int *VegetablesUpgrade)
    {
        FILE *Load;
        char LoadText[LEN];

        Load = fopen("Resources\\Saving.txt", "r");
        fgets(LoadText, LEN, Load);
        
        *Act = atoi(strtok(LoadText, "_"));
        *HouseUpgrade = atoi(strtok(NULL, "_"));
    }*/