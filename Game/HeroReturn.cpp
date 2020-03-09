    #include "Resources\\TXLib.h"
    #include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
    #define LEN 100

    void Painting();
    void KeyboardControls();
    void Save();
    void Load();

    class Button
    {
        private:
            int firstX;
            int firstY;
            int secondX;
            int secondY;

        public:
            Button(int valueFirstX, int valueFirstY, int valueSecondX, int valueSecondY)
            {
                firstX = valueFirstX; 
                firstY = valueFirstY;
                secondX = valueSecondX; 
                secondY = valueSecondY;
            }

            IsClicked()
            {
                if(GetAsyncKeyState(VK_LBUTTON))
                {
                    if(In (txMousePos(), MainMenuMapBTN_NewGame))
                    {   
                        return TRUE;
                    }
                }
            }
    };
    
    int main()
    {
        txCreateWindow(1296, 720);
        txSetFillColor(TX_WHITE);
        txFloodFill(0, 0, FLOODFILLBORDER);

        int Layout = 0;
        int Act = 0;
        int BackgroundX1 = 0;
        int BackgroundX2 = 1296;
        int MenuStage = 2;
        int MapMove = 0;

        Button 

        while(TRUE)
        {
            txBegin();
            painting();
            txEnd();

            if(MapMove == 0)
            {
                keyboardControls();
            }

            Sleep(1);
        }
        
    }

    void Painting()
    {

    }

    void KeyboardControls()
    {

    }

    void Save()
    {

    }

    void Load()
    {

    }