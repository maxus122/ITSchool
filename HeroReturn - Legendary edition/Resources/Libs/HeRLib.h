    #include "TXLib.h"
    #include <stdio.h>
    #include <stdlib.h>
    #include <fstream>
    #include <iostream>
    #include <ostream>
    #include <time.h>
    #define LEN 200000

    class hrButton
    {
        private:
            int firstX;
            int firstY;
            int secondX;
            int secondY;
            int layout;

        public:
            hrButton(int valueFirstX, int valueFirstY, int valueSecondX, int valueSecondY, int valueLayout)
            {
                firstX = valueFirstX; 
                firstY = valueFirstY;
                secondX = valueSecondX; 
                secondY = valueSecondY;
                layout = valueLayout;
            }
        
            bool IsClicked(int valueLayout)
            {
                RECT Collision = {firstX, firstY, secondX, secondY};
                if(GetAsyncKeyState(VK_LBUTTON))
                {
                    if(In(txMousePos(), Collision))
                    {  
                        if(layout == valueLayout)
                        {
                            return true;
                        }else{
                            return false;
                        }
                    }
                }
            }

            int GetFirstX() { return firstX; }
            int GetFirstY() { return firstY; }
            int GetSecondX() { return secondX; }
            int GetSecondY() { return secondY; }
    };

    class hrEntity
    {
        private:
            int x;
            int y;
            int rotate;
            int animation;
            int frame;

        public:
            hrEntity()
            {
                rotate = 0;
                animation = 1;
                frame = 1;
            }

            void SetCoordinate(int valueX, int valueY) {x = valueX; y = valueY; }
            void SetRotate(int valueRotate) { rotate = valueRotate; }
            void SetAnimation(int valueAnimation) { animation = valueAnimation; }
            void SetFrame(int valueFrame) {frame = valueFrame;}

            int GetX() { return x; }
            int GetY() { return y; }
            int GetRotate() { return rotate; }
            int GetAnimation() { return animation; }
            int GetFrame() { return frame; }
    };

    class hrCollector : public hrEntity
    {
        private:
            int IsCreated;
            int collectVegetables;
            
        public:
            hrCollector()
            {
                IsCreated = 0;
                collectVegetables = -1;
            }

            void SetState(int valueState) { IsCreated = valueState; }
            void SetCollectVegetables(int valueCollectVegetables) {collectVegetables = valueCollectVegetables;}
            void Frames(int NowFrame)
            {
                if(NowFrame == 1)
                {
                    SetFrame(2);
                }
                if(NowFrame == 2)
                {
                    SetFrame(3);
                }
                if(NowFrame == 3)
                {
                    SetFrame(1);
                }
            }
            bool InPosition(int vegetablesNumber, int vegetablesUpgrade) 
            {
                switch(vegetablesNumber)
                {
                    case 1:
                        switch(vegetablesUpgrade)
                        {
                            case 1:
                                if(In(GetX(), 288, 333))
                                {
                                    return true;
                                }
                                break;
                            case 2:
                                if(In(GetX(), 288, 324))
                                {
                                    return true;
                                }
                                break;
                            case 3:
                                if(In(GetX(), 288, 321))
                                {
                                    return true;
                                }
                                break;
                        }
                        break;
                    case 2:
                        switch(vegetablesUpgrade)
                        {
                            case 1:
                                if(In(GetX(), 335, 380))
                                {
                                    return true;
                                }
                                break;
                            case 2:
                                if(In(GetX(), 335, 371))
                                {
                                    return true;
                                }
                                break;
                            case 3:
                                if(In(GetX(), 335, 368))
                                {
                                    return true;
                                }
                                break;
                        }
                        break;
                    case 3:
                        switch(vegetablesUpgrade)
                        {
                            case 1:
                                if(In(GetX(), 380, 425))
                                {
                                    return true;
                                }
                                break;
                            case 2:
                                if(In(GetX(), 380, 416))
                                {
                                    return true;
                                }
                                break;
                            case 3:
                                if(In(GetX(), 380, 413))
                                {
                                    return true;
                                }
                                break;
                        }
                        break;
                    case 4:
                        switch(vegetablesUpgrade)
                        {
                            case 1:
                                if(In(GetX(), 425, 470))
                                {
                                    return true;
                                }
                                break;
                            case 2:
                                if(In(GetX(), 425, 461))
                                {
                                    return true;
                                }
                                break;
                            case 3:
                                if(In(GetX(), 425, 458))
                                {
                                    return true;
                                }
                                break;
                        }
                        break;
                    case 5:
                        switch(vegetablesUpgrade)
                        {
                            case 1:
                                if(In(GetX(), 470, 515))
                                {
                                    return true;
                                }
                                break;
                            case 2:
                                if(In(GetX(), 470, 506))
                                {
                                    return true;
                                }
                                break;
                            case 3:
                                if(In(GetX(), 470, 503))
                                {
                                    return true;
                                }
                                break;
                        }
                        break;
                    case 6:
                        switch(vegetablesUpgrade)
                        {
                            case 1:
                                if(In(GetX(), 520, 565))
                                {
                                    return true;
                                }
                                break;
                            case 2:
                                if(In(GetX(), 520, 556))
                                {
                                    return true;
                                }
                                break;
                            case 3:
                                if(In(GetX(), 520, 553))
                                {
                                    return true;
                                }
                                break;
                        }
                        break;
                }
            }

            int GetState() { return IsCreated; }
            int GetCollectVegetables() { return collectVegetables; }
    };

    class hrWoodcutter
    {
        private:
            int x;
            int y;
            int rotate;
            int animation;
            int frame;
            int IsCreated;
            int collectTrees;
            
        public:
            hrWoodcutter()
            {
                rotate = 0;
                animation = 1;
                frame = 1;
                IsCreated = 0;
                collectTrees = -1;
            }
            void SetCoordinate(int valueX, int valueY) {x = valueX; y = valueY; }
            void SetState(int valueState) { IsCreated = valueState; }
            void SetRotate(int valueRotate) { rotate = valueRotate; }
            void SetAnimation(int valueAnimation) { animation = valueAnimation; }
            void SetFrame(int valueFrame) {frame = valueFrame;}
            void SetCollectTrees(int valueCollectTrees) {collectTrees = valueCollectTrees;}
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
            bool InPosition(int treesNumber) 
            {
                switch(treesNumber)
                {
                    case 1:
                        if(In(x, 596, 716))
                        {
                            return true;
                        }
                        break;
                    case 2:
                        if(In(x, 723, 843))
                        {
                            return true;
                        }
                        break;
                    case 3:
                        if(In(x, 849, 969))
                        {
                            return true;
                        }
                        break;
                }
            }

            int GetX() { return x; }
            int GetY() { return y; }
            int GetRotate() { return rotate; }
            int GetAnimation() { return animation; }
            int GetFrame() { return frame; }
            int GetState() { return IsCreated; }
            int GetCollectTrees() { return collectTrees; }
    };

    class hrKnight
    {
        private:
            int x;
            int y;
            int animation;
            int frame;
            int IsCreated;
            int health;
            
        public:
            hrKnight()
            {
                animation = 1;
                frame = 1;
                IsCreated = 0;
                health = 100;
            }
            void SetCoordinate(int valueX, int valueY) { x = valueX; y = valueY; }
            void SetState(int valueState) { IsCreated = valueState; }
            void SetAnimation(int valueAnimation) { animation = valueAnimation; }
            void SetFrame(int valueFrame) { frame = valueFrame; }
            void SetHealth(int valueHealth) { health = valueHealth; }
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
            bool OnPosition(int i)
            {
                if(IsCreated == 1)
                {
                    if(x > 560-(30*i))
                    {
                        return true;
                    }else{
                        return false;
                    }
                }
            }

            int GetX() { return x; }
            int GetY() { return y; }
            int GetAnimation() { return animation; }
            int GetFrame() { return frame; }
            int GetState() { return IsCreated; }
            int GetHealth() { return health; }
    };

    class hrArcher
    {
        private:
            int x;
            int y;
            int animation;
            int frame;
            int IsCreated;
            int health;
            
        public:
            hrArcher()
            {
                animation = 1;
                frame = 1;
                IsCreated = 0;
                health = 100;
            }
            void SetCoordinate(int valueX, int valueY) { x = valueX; y = valueY; }
            void SetState(int valueState) { IsCreated = valueState; }
            void SetAnimation(int valueAnimation) { animation = valueAnimation; }
            void SetFrame(int valueFrame) { frame = valueFrame; }
            void SetHealth(int valueHealth) { health = valueHealth; }
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
            int GetHealth() { return health; }
    };

    class hrWizard
    {
        private:
            int x;
            int y;
            int animation;
            int frame;
            int IsCreated;
            int health;
            
        public:
            hrWizard()
            {
                animation = 1;
                frame = 1;
                IsCreated = 0;
                health = 100;
            }
            void SetCoordinate(int valueX, int valueY) { x = valueX; y = valueY; }
            void SetState(int valueState) { IsCreated = valueState; }
            void SetAnimation(int valueAnimation) { animation = valueAnimation; }
            void SetFrame(int valueFrame) { frame = valueFrame; }
            void SetHealth(int valueHealth) { health = valueHealth; }
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
            int GetHealth() { return health; }
    };

    class hrLizard
    {
        private:
            int x;
            int y;
            int animation;
            int frame;
            int IsCreated;
            int health;
            
        public:
            hrLizard()
            {
                animation = 1;
                frame = 1;
                IsCreated = 0;
                health = 100;
            }
            void SetCoordinate(int valueX, int valueY) { x = valueX; y = valueY; }
            void SetState(int valueState) { IsCreated = valueState; }
            void SetAnimation(int valueAnimation) { animation = valueAnimation; }
            void SetFrame(int valueFrame) { frame = valueFrame; }
            void SetHealth(int valueHealth) { health = valueHealth; }
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
            bool OnPosition()
            {
                if(IsCreated == 1)
                {
                    if(x < 680)
                    {
                        return true;
                    }else{
                        return false;
                    }
                }
            }

            int GetX() { return x; }
            int GetY() { return y; }
            int GetAnimation() { return animation; }
            int GetFrame() { return frame; }
            int GetState() { return IsCreated; }
            int GetHealth() { return health; }
    };

    class hrVegetables
    {
        private:
            int x;
            int y;
            int frame;
            bool IsCollecting;
            
        public:
            hrVegetables()
            {
                frame = 1;
                IsCollecting = 0;
            }
            void SetCoordinate(int valueX, int valueY) {x = valueX; y = valueY; }
            void SetFrame(int valueFrame) {frame = valueFrame;}
            void SetCollecting(int valueCollecting) {IsCollecting = valueCollecting;}
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
                    frame = 4;
                }
            }

            int GetX() { return x; }
            int GetY() { return y; }
            int GetFrame() { return frame; }      
            bool IsCollect() { return IsCollecting; }
    };

    class hrTrees
    {
        private:
            int x;
            int y;
            int frame;
            bool IsCollecting;
            
        public:
            hrTrees()
            {
                frame = 1;
                IsCollecting = 0;
            }
            void SetCoordinate(int valueX, int valueY) {x = valueX; y = valueY; }
            void SetFrame(int valueFrame) {frame = valueFrame;}
            void SetCollecting(int valueCollecting) {IsCollecting = valueCollecting;}
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
            }

            int GetX() { return x; }
            int GetY() { return y; }
            int GetFrame() { return frame; }
            bool IsCollect() { return IsCollecting; }     
    };


    void hrDrawingCollector(int x, int y, int rotate, int animation, int frame, HDC Collector_0_1_1, HDC Collector_0_1_2, HDC Collector_0_1_3, HDC Collector_0_2_1, HDC Collector_0_2_2, HDC Collector_0_2_3, HDC Collector_1_1_1, HDC Collector_1_1_2, HDC Collector_1_1_3, HDC Collector_1_2_1, HDC Collector_1_2_2, HDC Collector_1_2_3)
    {
        if(rotate == 0)
        {
            if(animation == 1)
            {
                if(frame == 1)
                {
                    txAlphaBlend(txDC(), x, y, 57, 93, Collector_0_1_1, 0, 0, 1);
                }

                if(frame == 2)
                {
                    txAlphaBlend(txDC(), x, y, 57, 93, Collector_0_1_2, 0, 0, 1);
                }

                if(frame == 3)
                {
                    txAlphaBlend(txDC(), x, y, 57, 93, Collector_0_1_3, 0, 0, 1);
                }
            }

            if(animation == 2)
            {
                if(frame == 1)
                {
                    txAlphaBlend(txDC(), x, y, 69, 93, Collector_0_2_1, 0, 0, 1);
                }

                if(frame == 2)
                {
                    txAlphaBlend(txDC(), x, y, 69, 93, Collector_0_2_2, 0, 0, 1);
                }

                if(frame == 3)
                {
                    txAlphaBlend(txDC(), x, y, 69, 93, Collector_0_2_3, 0, 0, 1);
                }
            }
        }
        
        if(rotate == 1)
        {
            if(animation == 1)
            {
                if(frame == 1)
                {
                    txAlphaBlend(txDC(), x, y, 57, 93, Collector_1_1_1, 0, 0, 1);
                }

                if(frame == 2)
                {
                    txAlphaBlend(txDC(), x, y, 57, 93, Collector_1_1_2, 0, 0, 1);
                }

                if(frame == 3)
                {
                    txAlphaBlend(txDC(), x, y, 57, 93, Collector_1_1_3, 0, 0, 1);
                }
            }

            if(animation == 2)
            {
                if(frame == 1)
                {
                    txAlphaBlend(txDC(), x, y, 69, 93, Collector_1_2_1, 0, 0, 1);
                }

                if(frame == 2)
                {
                    txAlphaBlend(txDC(), x, y, 69, 93, Collector_1_2_2, 0, 0, 1);
                }

                if(frame == 3)
                {
                    txAlphaBlend(txDC(), x, y, 69, 93, Collector_1_2_3, 0, 0, 1);
                }
            }
        }
    }

    void hrDrawingWoodcutter(int x, int y, int rotate, int animation, int frame, HDC Woodcutter_0_1_1, HDC Woodcutter_0_1_2, HDC Woodcutter_0_1_3, HDC Woodcutter_0_2_1, HDC Woodcutter_0_2_2, HDC Woodcutter_0_2_3, HDC Woodcutter_1_1_1, HDC Woodcutter_1_1_2, HDC Woodcutter_1_1_3, HDC Woodcutter_1_2_1, HDC Woodcutter_1_2_2, HDC Woodcutter_1_2_3)
    {
        if(rotate == 0)
        {
            if(animation == 1)
            {
                if(frame == 1)
                {
                    txAlphaBlend(txDC(), x, y, 45, 90, Woodcutter_0_1_1, 0, 0, 1);
                }

                if(frame == 2)
                {
                    txAlphaBlend(txDC(), x, y, 45, 90, Woodcutter_0_1_2, 0, 0, 1);
                }

                if(frame == 3)
                {
                    txAlphaBlend(txDC(), x, y, 45, 90, Woodcutter_0_1_3, 0, 0, 1);
                }
            }

            if(animation == 2)
            {
                if(frame == 1)
                {
                    txAlphaBlend(txDC(), x, y, 117, 111, Woodcutter_0_2_1, 0, 0, 1);
                }

                if(frame == 2)
                {
                    txAlphaBlend(txDC(), x, y, 117, 111, Woodcutter_0_2_2, 0, 0, 1);
                }

                if(frame == 3)
                {
                    txAlphaBlend(txDC(), x, y, 117, 111, Woodcutter_0_2_3, 0, 0, 1);
                }
            }
        }

        if(rotate == 1)
        {
            if(animation == 1)
            {
                if(frame == 1)
                {
                    txAlphaBlend(txDC(), x, y, 45, 90, Woodcutter_1_1_1, 0, 0, 1);
                }

                if(frame == 2)
                {
                    txAlphaBlend(txDC(), x, y, 45, 90, Woodcutter_1_1_2, 0, 0, 1);
                }

                if(frame == 3)
                {
                    txAlphaBlend(txDC(), x, y, 45, 90, Woodcutter_1_1_3, 0, 0, 1);
                }
            }

            if(animation == 2)
            {
                if(frame == 1)
                {
                    txAlphaBlend(txDC(), x, y, 117, 111, Woodcutter_1_2_1, 0, 0, 1);
                }

                if(frame == 2)
                {
                    txAlphaBlend(txDC(), x, y, 117, 111, Woodcutter_1_2_2, 0, 0, 1);
                }

                if(frame == 3)
                {
                    txAlphaBlend(txDC(), x, y, 117, 111, Woodcutter_1_2_3, 0, 0, 1);
                }
            }
        }
    }

    void hrDrawingKnight(int x, int y, int animation, int frame, HDC Knight_0_1_1, HDC Knight_0_1_2, HDC Knight_0_1_3, HDC Knight_0_2_1, HDC Knight_0_2_2, HDC Knight_0_2_3)
    {
        if(animation == 1)
        {
            if(frame == 1)
            {
                txAlphaBlend(txDC(), x, y, 45, 87, Knight_0_1_1, 0, 0, 1);
            }

            if(frame == 2)
            {
                txAlphaBlend(txDC(), x, y, 45, 87, Knight_0_1_2, 0, 0, 1);
            }

            if(frame == 3)
            {
                txAlphaBlend(txDC(), x, y, 45, 87, Knight_0_1_3, 0, 0, 1);
            }
        }

        if(animation == 2)
        {
            if(frame == 1)
            {
                txAlphaBlend(txDC(), x, y, 87, 90, Knight_0_2_1, 0, 0, 1);
            }

            if(frame == 2)
            {
                txAlphaBlend(txDC(), x, y, 87, 90, Knight_0_2_2, 0, 0, 1);
            }

            if(frame == 3)
            {
                txAlphaBlend(txDC(), x, y, 87, 90, Knight_0_2_3, 0, 0, 1);
            }
        }
    }

    void hrDrawingArcher(int x, int y, int animation, int frame, HDC Archer_0_1_1, HDC Archer_0_1_2, HDC Archer_0_1_3, HDC Archer_0_2_1, HDC Archer_0_2_2, HDC Archer_0_2_3)
    {
        if(animation == 1)
        {
            if(frame == 1)
            {
                txAlphaBlend(txDC(), x, y, 51, 102, Archer_0_1_1, 0, 0, 1);
            }

            if(frame == 2)
            {
                txAlphaBlend(txDC(), x, y, 51, 102, Archer_0_1_2, 0, 0, 1);
            }

            if(frame == 3)
            {
                txAlphaBlend(txDC(), x, y, 51, 102, Archer_0_1_3, 0, 0, 1);
            }
        }

        if(animation == 2)
        {
            if(frame == 1)
            {
                txAlphaBlend(txDC(), x, y, 69, 102, Archer_0_2_1, 0, 0, 1);
            }

            if(frame == 2)
            {
                txAlphaBlend(txDC(), x, y, 69, 102, Archer_0_2_2, 0, 0, 1);
            }

            if(frame == 3)
            {
                txAlphaBlend(txDC(), x, y, 69, 102, Archer_0_2_3, 0, 0, 1);
            }
        }
    }

    void hrDrawingWizard(int x, int y, int animation, int frame, HDC Wizard_0_1_1, HDC Wizard_0_1_2, HDC Wizard_0_1_3, HDC Wizard_0_2_1, HDC Wizard_0_2_2, HDC Wizard_0_2_3)
    {
        if(animation == 1)
        {
            if(frame == 1)
            {
                txAlphaBlend(txDC(), x, y, 51, 87, Wizard_0_1_1, 0, 0, 1);
            }

            if(frame == 2)
            {
                txAlphaBlend(txDC(), x, y, 51, 87, Wizard_0_1_2, 0, 0, 1);
            }

            if(frame == 3)
            {
                txAlphaBlend(txDC(), x, y, 51, 87, Wizard_0_1_3, 0, 0, 1);
            }
        }

        if(animation == 2)
        {
            if(frame == 1)
            {
                txAlphaBlend(txDC(), x, y, 120, 87, Wizard_0_2_1, 0, 0, 1);
            }

            if(frame == 2)
            {
                txAlphaBlend(txDC(), x, y, 120, 87, Wizard_0_2_2, 0, 0, 1);
            }

            if(frame == 3)
            {
                txAlphaBlend(txDC(), x, y, 120, 87, Wizard_0_2_3, 0, 0, 1);
            }
        }
    }

    void hrDrawingLizard(int x, int y, int animation, int frame, HDC Lizard_0_1_1, HDC Lizard_0_1_2, HDC Lizard_0_1_3, HDC Lizard_0_2_1, HDC Lizard_0_2_2, HDC Lizard_0_2_3)
    {
        if(animation == 1)
        {
            if(frame == 1)
            {
                txAlphaBlend(txDC(), x, y, 48, 84, Lizard_0_1_1, 0, 0, 1);
            }

            if(frame == 2)
            {
                txAlphaBlend(txDC(), x, y, 48, 84, Lizard_0_1_2, 0, 0, 1);
            }

            if(frame == 3)
            {
                txAlphaBlend(txDC(), x, y, 48, 84, Lizard_0_1_3, 0, 0, 1);
            }
        }

        if(animation == 2)
        {
            if(frame == 1)
            {
                txAlphaBlend(txDC(), x, y, 144, 81, Lizard_0_2_1, 0, 0, 1);
            }

            if(frame == 2)
            {
                txAlphaBlend(txDC(), x, y, 144, 81, Lizard_0_2_2, 0, 0, 1);
            }

            if(frame == 3)
            {
                txAlphaBlend(txDC(), x, y, 144, 81, Lizard_0_2_3, 0, 0, 1);
            }
        }
    }

    void hrDrawingTrees(int x, int y, int frame, int treesUpgrade, HDC Tree_1_1, HDC Tree_1_2, HDC Tree_1_3, HDC Tree_2_1, HDC Tree_2_2, HDC Tree_2_3, HDC Tree_3_1, HDC Tree_3_2, HDC Tree_3_3)
    {
        if(treesUpgrade == 1)
        {
            if(frame == 1)
            {
                txAlphaBlend(txDC(), x, y, 120, 156, Tree_1_1, 0, 0, 1);
            }

            if(frame == 2)
            {
                txAlphaBlend(txDC(), x, y, 120, 156, Tree_1_2, 0, 0, 1);
            }

            if(frame == 3)
            {
                txAlphaBlend(txDC(), x, y, 120, 156, Tree_1_3, 0, 0, 1);
            }
        }

        if(treesUpgrade == 2)
        {
            if(frame == 1)
            {
                txAlphaBlend(txDC(), x, y, 120, 156, Tree_2_1, 0, 0, 1);
            }

            if(frame == 2)
            {
                txAlphaBlend(txDC(), x, y, 120, 156, Tree_2_2, 0, 0, 1);
            }

            if(frame == 3)
            {
                txAlphaBlend(txDC(), x, y, 120, 156, Tree_2_3, 0, 0, 1);
            }
        }

        if(treesUpgrade == 3)
        {
            if(frame == 1)
            {
                txAlphaBlend(txDC(), x, y, 120, 156, Tree_3_1, 0, 0, 1);
            }

            if(frame == 2)
            {
                txAlphaBlend(txDC(), x, y, 120, 156, Tree_3_2, 0, 0, 1);
            }

            if(frame == 3)
            {
                txAlphaBlend(txDC(), x, y, 120, 156, Tree_3_3, 0, 0, 1);
            }
        }
    }

    void hrDrawingVegetables(int x, int y, int frame, int vegetablesUpgrade, HDC Vegetable_1_1, HDC Vegetable_1_2, HDC Vegetable_1_3, HDC Vegetable_1_4, HDC Vegetable_2_1, HDC Vegetable_2_2, HDC Vegetable_2_3, HDC Vegetable_2_4, HDC Vegetable_3_1, HDC Vegetable_3_2, HDC Vegetable_3_3, HDC Vegetable_3_4)
    {
        if(vegetablesUpgrade == 1)
        {
            if(frame == 1)
            {
                txAlphaBlend(txDC(), x, y, 45, 42, Vegetable_1_1, 0, 0, 1);
            }

            if(frame == 2)
            {
                txAlphaBlend(txDC(), x, y, 45, 42, Vegetable_1_2, 0, 0, 1);
            }

            if(frame == 3)
            {
                txAlphaBlend(txDC(), x, y, 45, 42, Vegetable_1_3, 0, 0, 1);
            }

            if(frame == 4)
            {
                txAlphaBlend(txDC(), x, y, 45, 42, Vegetable_1_4, 0, 0, 1);
            }
        }

        if(vegetablesUpgrade == 2)
        {
            if(frame == 1)
            {
                txAlphaBlend(txDC(), x, y, 36, 42, Vegetable_2_1, 0, 0, 1);
            }

            if(frame == 2)
            {
                txAlphaBlend(txDC(), x, y, 36, 42, Vegetable_2_2, 0, 0, 1);
            }

            if(frame == 3)
            {
                txAlphaBlend(txDC(), x, y, 36, 42, Vegetable_2_3, 0, 0, 1);
            }

            if(frame == 4)
            {
                txAlphaBlend(txDC(), x, y, 36, 42, Vegetable_2_4, 0, 0, 1);
            }
        }

        if(vegetablesUpgrade == 3)
        {
            if(frame == 1)
            {
                txAlphaBlend(txDC(), x, y, 33, 48, Vegetable_3_1, 0, 0, 1);
            }

            if(frame == 2)
            {
                txAlphaBlend(txDC(), x, y, 33, 48, Vegetable_3_2, 0, 0, 1);
            }

            if(frame == 3)
            {
                txAlphaBlend(txDC(), x, y, 33, 48, Vegetable_3_3, 0, 0, 1);
            }

            if(frame == 4)
            {
                txAlphaBlend(txDC(), x, y, 33, 48, Vegetable_3_4, 0, 0, 1);
            }
        }
    }

    void hrDrawingBlacksmith(int x, int y, int blacksmithFrame, HDC objectBlacksmith1, HDC objectBlacksmith2, HDC objectBlacksmith3, HDC objectBlacksmith4)
    {
        if(blacksmithFrame == 1)
        {
            txAlphaBlend(txDC(), x, y, 1296, 720, objectBlacksmith1, 0, 0, 1);
        }

        if(blacksmithFrame == 2)
        {
            txAlphaBlend(txDC(), x, y, 1296, 720, objectBlacksmith2, 0, 0, 1);
        }

        if(blacksmithFrame == 3)
        {
            txAlphaBlend(txDC(), x, y, 1296, 720, objectBlacksmith3, 0, 0, 1);
        }

        if(blacksmithFrame == 4)
        {
            txAlphaBlend(txDC(), x, y, 1296, 720, objectBlacksmith4, 0, 0, 1);
        }
    }
    
    void hrDrawingHouses(int x, int y, int houseUpgrade, HDC objectFirstHouse, HDC objectSecondHouse, HDC objectThirdHouse)
    {
        if(houseUpgrade == 1)
        {
            txAlphaBlend(txDC(), x, y, 1296, 720, objectFirstHouse, 0, 0, 1);
        }

        if(houseUpgrade == 2)
        {
            txAlphaBlend(txDC(), x, y, 1296, 720, objectSecondHouse, 0, 0, 1);
        }

        if(houseUpgrade == 3)
        {
            txAlphaBlend(txDC(), x, y, 1296, 720, objectThirdHouse, 0, 0, 1);
        }
    }

    void hrSave(int act, int houseUpgrade, int treesUpgrade, int vegetablesUpgrade);
    void hrLoad(int *act, int *houseUpgrade, int *treesUpgrade, int *vegetablesUpgrade);
    bool hrFileIsExist(std::string filePath);

    void painting(int layout, int act, int money, int actMoney, int houseUpgrade, int treesUpgrade, int vegetablesUpgrade, int smithyUpgradeSelect, int houseUpgradeSelect, int backgroundX1, int backgroundX2, int menuStage, int mapMove, int *blacksmithFrame, hrCollector *collectorArray, hrWoodcutter *woodcutterArray, hrKnight *knightArray, hrArcher *archerArray, hrWizard *wizardArray, hrLizard *lizardArray, hrVegetables *vegetablesArray, hrTrees *treesArray, HDC uiMenu, HDC btnLeft, HDC btnRight, HDC btnSmithy, HDC btnUpgrade, HDC btnMap, HDC uiSmithyBuying, HDC uiSmithyUpgrade11, HDC uiSmithyUpgrade12, HDC uiSmithyUpgrade13, HDC uiSmithyUpgrade21, HDC uiSmithyUpgrade22, HDC uiSmithyUpgrade23, HDC uiSmithySelectUpgrade, HDC uiUpgradeBuying, HDC uiCloudAct1, HDC uiCloudAct2, HDC uiCloudAct3, HDC uiCloudAct4, HDC btnV, HDC btnX, HDC btnFirstActAction, HDC btnSecondActAction, HDC btnThirdActAction, HDC btnFourthAndFifthActAction, HDC backgroundMainMenuNew, HDC backgroundMainMenuResume, HDC backgroundMenu, HDC backgroundSmithy, HDC backgroundUpgradeFirstLvl, HDC backgroundUpgradeSecondLvl, HDC backgroundUpgradeThirdLvl, HDC backgroundMap, HDC backgroundGame, HDC objectBlacksmith1, HDC objectBlacksmith2, HDC objectBlacksmith3, HDC objectBlacksmith4, HDC objectFirstHouse, HDC objectSecondHouse, HDC objectThirdHouse, HDC Vegetable_1_1, HDC Vegetable_1_2, HDC Vegetable_1_3, HDC Vegetable_1_4, HDC Vegetable_2_1, HDC Vegetable_2_2, HDC Vegetable_2_3, HDC Vegetable_2_4, HDC Vegetable_3_1, HDC Vegetable_3_2, HDC Vegetable_3_3, HDC Vegetable_3_4, HDC Tree_1_1, HDC Tree_1_2, HDC Tree_1_3, HDC Tree_2_1, HDC Tree_2_2, HDC Tree_2_3, HDC Tree_3_1, HDC Tree_3_2, HDC Tree_3_3, HDC Collector_0_1_1, HDC Collector_0_1_2, HDC Collector_0_1_3, HDC Collector_0_2_1, HDC Collector_0_2_2, HDC Collector_0_2_3, HDC Collector_1_1_1, HDC Collector_1_1_2, HDC Collector_1_1_3, HDC Collector_1_2_1, HDC Collector_1_2_2, HDC Collector_1_2_3, HDC Woodcutter_0_1_1, HDC Woodcutter_0_1_2, HDC Woodcutter_0_1_3, HDC Woodcutter_0_2_1, HDC Woodcutter_0_2_2, HDC Woodcutter_0_2_3, HDC Woodcutter_1_1_1, HDC Woodcutter_1_1_2, HDC Woodcutter_1_1_3, HDC Woodcutter_1_2_1, HDC Woodcutter_1_2_2, HDC Woodcutter_1_2_3, HDC Knight_0_1_1, HDC Knight_0_1_2, HDC Knight_0_1_3, HDC Knight_0_2_1, HDC Knight_0_2_2, HDC Knight_0_2_3, HDC Archer_0_1_1, HDC Archer_0_1_2, HDC Archer_0_1_3, HDC Archer_0_2_1, HDC Archer_0_2_2, HDC Archer_0_2_3, HDC Wizard_0_1_1, HDC Wizard_0_1_2, HDC Wizard_0_1_3, HDC Wizard_0_2_1, HDC Wizard_0_2_2, HDC Wizard_0_2_3, HDC Lizard_0_1_1, HDC Lizard_0_1_2, HDC Lizard_0_1_3, HDC Lizard_0_2_1, HDC Lizard_0_2_2, HDC Lizard_0_2_3)
    {
        txSetFillColor(TX_WHITE);
        txClear();
        if(layout == 0)
        {
            if(hrFileIsExist("Resources\\Saving.txt"))
            {
                txBitBlt(txDC(), 0, 0, backgroundX2, 720, backgroundMainMenuResume, backgroundX1, 0);
            }else{
                txBitBlt(txDC(), 0, 0, backgroundX2, 720, backgroundMainMenuNew, backgroundX1, 0);
            }
            
        }

        if(layout == 1)
        {
            txBitBlt(txDC(), 0, 0, backgroundX2, 720, backgroundMenu, backgroundX1, 0);
            txSelectFont("Arial", 10);
            txDrawText(870, 650, 908, 875, "250");

            if(mapMove != 1)
            {
                txAlphaBlend(txDC(), 0, 0, 1296, 720, uiMenu, 0, 0, 1);
                if(menuStage == 0)
                {
                    txAlphaBlend(txDC(), 0, 0, 1296, 720, btnRight, 0, 0, 1);
                    txAlphaBlend(txDC(), 0, 0, 1296, 720, btnSmithy, 0, 0, 1);
                }
                if(menuStage == 1)
                {
                    txAlphaBlend(txDC(), 0, 0, 1296, 720, btnRight, 0, 0, 1);
                    txAlphaBlend(txDC(), 0, 0, 1296, 720, btnLeft, 0, 0, 1);
                    txAlphaBlend(txDC(), 0, 0, 1296, 720, btnUpgrade, 0, 0, 1);
                }
                if(menuStage == 2)
                {
                    txAlphaBlend(txDC(), 0, 0, 1296, 720, btnLeft, 0, 0, 1);
                    txAlphaBlend(txDC(), 0, 0, 1296, 720, btnMap, 0, 0, 1);
                }
            }
        }

        if(layout == 2)
        {
            txBitBlt(txDC(), 0, 0, 1296, 720, backgroundSmithy, 0, 0);
            hrDrawingBlacksmith(150, 540, *blacksmithFrame, objectBlacksmith1, objectBlacksmith2, objectBlacksmith3, objectBlacksmith4);

            if(smithyUpgradeSelect == 11)
            {
                txAlphaBlend(414, 69, uiSmithySelectUpgrade);
                txAlphaBlend(0, 0, uiSmithyUpgrade11);
                if(vegetablesUpgrade > 0)
                {
                    txAlphaBlend(txDC(), 0, 0, 1296, 720, uiSmithyBuying, 0, 0, 1);
                }
            }

            if(smithyUpgradeSelect == 12)
            {
                txAlphaBlend(533, 69, uiSmithySelectUpgrade);
                txAlphaBlend(0, 0, uiSmithyUpgrade12);
                if(vegetablesUpgrade > 1)
                {
                    txAlphaBlend(txDC(), 0, 0, 1296, 720, uiSmithyBuying, 0, 0, 1);
                }
            }

            if(smithyUpgradeSelect == 13)
            {
                txAlphaBlend(652, 69, uiSmithySelectUpgrade);
                txAlphaBlend(0, 0, uiSmithyUpgrade13);
                if(vegetablesUpgrade > 2)
                {
                    txAlphaBlend(txDC(), 0, 0, 1296, 720, uiSmithyBuying, 0, 0, 1);
                }
            }

            if(smithyUpgradeSelect == 21)
            {
                txAlphaBlend(414, 190, uiSmithySelectUpgrade);
                txAlphaBlend(0, 0, uiSmithyUpgrade21);
                if(treesUpgrade > 0)
                {
                    txAlphaBlend(txDC(), 0, 0, 1296, 720, uiSmithyBuying, 0, 0, 1);
                }
            }

            if(smithyUpgradeSelect == 22)
            {
                txAlphaBlend(533, 190, uiSmithySelectUpgrade);
                txAlphaBlend(0, 0, uiSmithyUpgrade22);
                if(treesUpgrade > 1)
                {
                    txAlphaBlend(txDC(), 0, 0, 1296, 720, uiSmithyBuying, 0, 0, 1);
                }
            }

            if(smithyUpgradeSelect == 23)
            {
                txAlphaBlend(652, 190, uiSmithySelectUpgrade);
                txAlphaBlend(0, 0, uiSmithyUpgrade23);
                if(treesUpgrade > 2)
                {
                    txAlphaBlend(txDC(), 0, 0, 1296, 720, uiSmithyBuying, 0, 0, 1);
                }
            }

            /*if(smithyUpgradeSelect == 31)
            {
                txAlphaBlend(414, 311, uiSmithySelectUpgrade);
            }

            if(smithyUpgradeSelect == 32)
            {
                txAlphaBlend(533, 311, uiSmithySelectUpgrade);
            }

            if(smithyUpgradeSelect == 33)
            {
                txAlphaBlend(652, 311, uiSmithySelectUpgrade);
            }

            if(smithyUpgradeSelect == 41)
            {
                txAlphaBlend(414, 432, uiSmithySelectUpgrade);
            }

            if(smithyUpgradeSelect == 42)
            {
                txAlphaBlend(533, 432, uiSmithySelectUpgrade);
            }

            if(smithyUpgradeSelect == 43)
            {
                txAlphaBlend(652, 432, uiSmithySelectUpgrade);
            }

            if(smithyUpgradeSelect == 51)
            {
                txAlphaBlend(414, 553, uiSmithySelectUpgrade);
            }

            if(smithyUpgradeSelect == 52)
            {
                txAlphaBlend(533, 553, uiSmithySelectUpgrade);
            }

            if(smithyUpgradeSelect == 53)
            {
                txAlphaBlend(652, 553, uiSmithySelectUpgrade);
            }*/

            if(*blacksmithFrame == 1)
            {
                *blacksmithFrame = 2;
                Sleep(50);
            }else{
                if(*blacksmithFrame == 2)
                {
                    *blacksmithFrame = 3;
                    Sleep(50);
                }else{
                    if(*blacksmithFrame == 3)
                    {
                        *blacksmithFrame = 4;
                        Sleep(50);
                    }else{
                        if(*blacksmithFrame == 4)
                        {
                            *blacksmithFrame = 1;
                            Sleep(50);
                        }
                    }
                }
            }
        }

        if(layout == 3)
        {
            if(houseUpgradeSelect == 1)
            {
                txBitBlt(txDC(), 0, 0, 1296, 720, backgroundUpgradeFirstLvl, 0, 0);
                if(houseUpgrade > 0)
                {
                    txAlphaBlend(txDC(), 0, 0, 1296, 720, uiUpgradeBuying, 0, 0, 1);
                }
            }
            if(houseUpgradeSelect == 2)
            {
                txBitBlt(txDC(), 0, 0, 1296, 720, backgroundUpgradeSecondLvl, 0, 0);
                if(houseUpgrade > 1)
                {
                    txAlphaBlend(txDC(), 0, 0, 1296, 720, uiUpgradeBuying, 0, 0, 1);
                }
            }
            if(houseUpgradeSelect == 3)
            {
                txBitBlt(txDC(), 0, 0, 1296, 720, backgroundUpgradeThirdLvl, 0, 0);
                if(houseUpgrade > 2)
                {
                    txAlphaBlend(txDC(), 0, 0, 1296, 720, uiUpgradeBuying, 0, 0, 1);
                }
            }
        }
        
        if(layout == 4)
        {
            txBitBlt(txDC(), 0, 0, 1296, 720, backgroundMap, 0, 0);
            if(act == 1)
            {
                txAlphaBlend(txDC(), 265, 479, 111, 100, btnX, 0, 0, 1);
                txAlphaBlend(txDC(), 562, 379, 111, 100, btnX, 0, 0, 1);
                txAlphaBlend(txDC(), 320, 243, 111, 100, btnX, 0, 0, 1);
                txAlphaBlend(txDC(), 920, 467, 111, 100, btnX, 0, 0, 1);
                txAlphaBlend(txDC(), 879, 220, 111, 100, btnX, 0, 0, 1);
                txAlphaBlend(txDC(), 147, 0, 1002, 720, uiCloudAct1, 0, 0, 1);
            }
            if(act == 2)
            {
                txAlphaBlend(txDC(), 265, 488, 111, 80, btnV, 0, 0, 1);
                txAlphaBlend(txDC(), 562, 379, 111, 100, btnX, 0, 0, 1);
                txAlphaBlend(txDC(), 320, 243, 111, 100, btnX, 0, 0, 1);
                txAlphaBlend(txDC(), 920, 467, 111, 100, btnX, 0, 0, 1);
                txAlphaBlend(txDC(), 879, 220, 111, 100, btnX, 0, 0, 1);
                txAlphaBlend(txDC(), 147, 0, 1002, 720, uiCloudAct2, 0, 0, 1);
            }
            if(act == 3)
            {
                txAlphaBlend(txDC(), 265, 488, 111, 80, btnV, 0, 0, 1);
                txAlphaBlend(txDC(), 564, 388, 111, 80, btnV, 0, 0, 1);
                txAlphaBlend(txDC(), 320, 243, 111, 100, btnX, 0, 0, 1);
                txAlphaBlend(txDC(), 920, 467, 111, 100, btnX, 0, 0, 1);
                txAlphaBlend(txDC(), 879, 220, 111, 100, btnX, 0, 0, 1);
                txAlphaBlend(txDC(), 147, 0, 1002, 720, uiCloudAct3, 0, 0, 1);
            }
            if(act == 4)
            {
                txAlphaBlend(txDC(), 265, 488, 111, 80, btnV, 0, 0, 1);
                txAlphaBlend(txDC(), 564, 388, 111, 80, btnV, 0, 0, 1);
                txAlphaBlend(txDC(), 320, 252, 111, 80, btnV, 0, 0, 1);
                txAlphaBlend(txDC(), 920, 467, 111, 100, btnX, 0, 0, 1);
                txAlphaBlend(txDC(), 879, 220, 111, 100, btnX, 0, 0, 1);
                txAlphaBlend(txDC(), 147, 0, 1002, 720, uiCloudAct4, 0, 0, 1);
            }
            if(act == 5)
            {
                txAlphaBlend(txDC(), 265, 488, 111, 80, btnV, 0, 0, 1);
                txAlphaBlend(txDC(), 564, 388, 111, 80, btnV, 0, 0, 1);
                txAlphaBlend(txDC(), 320, 252, 111, 80, btnV, 0, 0, 1);
                txAlphaBlend(txDC(), 920, 476, 111, 80, btnV, 0, 0, 1);
                txAlphaBlend(txDC(), 879, 220, 111, 100, btnX, 0, 0, 1);
            }
            if(act == 6)
            {
                txAlphaBlend(txDC(), 265, 488, 111, 80, btnV, 0, 0, 1);
                txAlphaBlend(txDC(), 564, 388, 111, 80, btnV, 0, 0, 1);
                txAlphaBlend(txDC(), 320, 252, 111, 80, btnV, 0, 0, 1);
                txAlphaBlend(txDC(), 920, 476, 111, 80, btnV, 0, 0, 1);
                txAlphaBlend(txDC(), 879, 229, 111, 80, btnV, 0, 0, 1);
            }
        }

        
        if(layout == 5)
        {
            txBitBlt(txDC(), 0, 0, 1296, 720, backgroundGame, 0, 0);

            if(houseUpgrade == 1)
            {
                hrDrawingHouses(0, 0, houseUpgrade, objectFirstHouse, objectSecondHouse, objectThirdHouse);
            }
            if(houseUpgrade == 2)
            {
                hrDrawingHouses(0, 0, houseUpgrade, objectFirstHouse, objectSecondHouse, objectThirdHouse);
            }
            if(houseUpgrade == 3)
            {
                hrDrawingHouses(0, 0, houseUpgrade, objectFirstHouse, objectSecondHouse, objectThirdHouse);
            }

            if(act == 1)
            {
                txAlphaBlend(txDC(), 0, 0, 1296, 720, btnFirstActAction, 0, 0, 1);
            }
            if(act == 2)
            {
                txAlphaBlend(txDC(), 0, 0, 1296, 720, btnSecondActAction, 0, 0, 1);
            }
            if(act == 3)
            {
                txAlphaBlend(txDC(), 0, 0, 1296, 720, btnThirdActAction, 0, 0, 1);
            }
            if(act == 4 or act == 5)
            {
                txAlphaBlend(txDC(), 0, 0, 1296, 720, btnFourthAndFifthActAction, 0, 0, 1);
            }

            for(int i = 0; i<6; i++)
            {
                hrDrawingVegetables(vegetablesArray[i].GetX(), vegetablesArray[i].GetY(), vegetablesArray[i].GetFrame(), vegetablesUpgrade, Vegetable_1_1, Vegetable_1_2, Vegetable_1_3, Vegetable_1_4, Vegetable_2_1, Vegetable_2_2, Vegetable_2_3, Vegetable_2_4, Vegetable_3_1, Vegetable_3_2, Vegetable_3_3, Vegetable_3_4);
            }

            for(int i = 0; i<3; i++)
            {
                hrDrawingTrees(treesArray[i].GetX(), treesArray[i].GetY(), treesArray[i].GetFrame(), treesUpgrade, Tree_1_1, Tree_1_2, Tree_1_3, Tree_2_1, Tree_2_2, Tree_2_3, Tree_3_1, Tree_3_2, Tree_3_3);
            }

            for(int i = 0; i<3; i++)
            {
                if(collectorArray[i].GetState() == 1)
                {
                    hrDrawingCollector(collectorArray[i].GetX(), collectorArray[i].GetY(), collectorArray[i].GetRotate(), collectorArray[i].GetAnimation(), collectorArray[i].GetFrame(), Collector_0_1_1, Collector_0_1_2, Collector_0_1_3, Collector_0_2_1, Collector_0_2_2, Collector_0_2_3, Collector_1_1_1, Collector_1_1_2, Collector_1_1_3, Collector_1_2_1, Collector_1_2_2, Collector_1_2_3);
                }
            }
            
            for(int i = 0; i<3; i++)
            {
                if(woodcutterArray[i].GetState() == 1)
                {
                    hrDrawingWoodcutter(woodcutterArray[i].GetX(), woodcutterArray[i].GetY(), woodcutterArray[i].GetRotate(), woodcutterArray[i].GetAnimation(), woodcutterArray[i].GetFrame(), Woodcutter_0_1_1, Woodcutter_0_1_2, Woodcutter_0_1_3, Woodcutter_0_2_1, Woodcutter_0_2_2, Woodcutter_0_2_3, Woodcutter_1_1_1, Woodcutter_1_1_2, Woodcutter_1_1_3, Woodcutter_1_2_1, Woodcutter_1_2_2, Woodcutter_1_2_3);
                }
            }

            for(int i = 0; i<3; i++)
            {
                if(knightArray[i].GetState() == 1)
                {
                    hrDrawingKnight(knightArray[i].GetX(), knightArray[i].GetY(), knightArray[i].GetAnimation(), knightArray[i].GetFrame(), Knight_0_1_1, Knight_0_1_2, Knight_0_1_3, Knight_0_2_1, Knight_0_2_2, Knight_0_2_3);
                }
            }

            for(int i = 0; i<3; i++)
            {
                if(archerArray[i].GetState() == 1)
                {
                    hrDrawingArcher(archerArray[i].GetX(), archerArray[i].GetY(), archerArray[i].GetAnimation(), archerArray[i].GetFrame(), Archer_0_1_1, Archer_0_1_2, Archer_0_1_3, Archer_0_2_1, Archer_0_2_2, Archer_0_2_3);
                }
            }

            for(int i = 0; i<3; i++)
            {
                if(wizardArray[i].GetState() == 1)
                {
                    hrDrawingWizard(wizardArray[i].GetX(), wizardArray[i].GetY(), wizardArray[i].GetAnimation(), wizardArray[i].GetFrame(), Wizard_0_1_1, Wizard_0_1_2, Wizard_0_1_3, Wizard_0_2_1, Wizard_0_2_2, Wizard_0_2_3);
                }
            }

            for(int i = 0; i<20; i++)
            {
                if(lizardArray[i].GetState() == 1)
                {
                    hrDrawingLizard(lizardArray[i].GetX(), lizardArray[i].GetY(), lizardArray[i].GetAnimation(), lizardArray[i].GetFrame(), Lizard_0_1_1, Lizard_0_1_2, Lizard_0_1_3, Lizard_0_2_1, Lizard_0_2_2, Lizard_0_2_3);
                }
            }
        }
    }

    void keyboardControls(
        int *layout, int *act, int *money, int *actMoney, int *houseUpgrade, int *treesUpgrade, int *vegetablesUpgrade, int *smithyUpgradeSelect, int *houseUpgradeSelect, 
        int *backgroundX1, int *backgroundX2, int *menuStage, int *mapMove, int *blacksmithFrame, hrCollector *collectorArray,
        hrWoodcutter *woodcutterArray, hrKnight *knightArray, hrArcher *archerArray, hrWizard *wizardArray, hrLizard *lizardArray, hrVegetables *vegetablesArray, hrTrees *treesArray, 
        
        hrButton newGame1, hrButton newGame2, hrButton resumeGame, hrButton left, hrButton right, hrButton smithy, hrButton upgrade, hrButton map, hrButton smithyUpgrade11, 
        hrButton smithyUpgrade12, hrButton smithyUpgrade13, hrButton smithyUpgrade21, hrButton smithyUpgrade22, hrButton smithyUpgrade23, 
        hrButton smithyUpgrade31, hrButton smithyUpgrade32, hrButton smithyUpgrade33, hrButton smithyUpgrade41, hrButton smithyUpgrade42, 
        hrButton smithyUpgrade43, hrButton smithyUpgrade51, hrButton smithyUpgrade52, hrButton smithyUpgrade53, hrButton smithyBuy, hrButton smithyBack, 
        hrButton upgr, hrButton upgradeFirstLvl, hrButton upgradeSecondLvl, hrButton upgradeThirdLvl, hrButton upgradeBack, hrButton vFirstAct, 
        hrButton xFirstAct, hrButton vSecondAct, hrButton xSecondAct, hrButton vThirdAct, hrButton xThirdAct, hrButton vFourthAct, 
        hrButton xFourthAct, hrButton vFifthAct, hrButton xFifthAct, hrButton mapBack, hrButton gameFirstAction, hrButton gameSecondAction, 
        hrButton gameThirdAction, hrButton gameFourthAction, hrButton gameFifthAction, hrButton gameSixthAction, 
        
        HDC uiMenu, HDC btnLeft, HDC btnRight, HDC btnSmithy, HDC btnUpgrade, HDC btnMap, HDC uiSmithyBuying, 
        HDC uiSmithyUpgrade11, HDC uiSmithyUpgrade12, HDC uiSmithyUpgrade13, HDC uiSmithyUpgrade21, HDC uiSmithyUpgrade22, 
        HDC uiSmithyUpgrade23, HDC uiSmithySelectUpgrade, HDC uiUpgradeBuying, HDC uiCloudAct1, HDC uiCloudAct2, HDC uiCloudAct3,
        HDC uiCloudAct4, HDC btnV, HDC btnX, HDC btnFirstActAction, HDC btnSecondActAction, HDC btnThirdActAction, HDC btnFourthAndFifthActAction,
        HDC backgroundMainMenuNew, HDC backgroundMainMenuResume, HDC backgroundMenu, HDC backgroundSmithy, HDC backgroundUpgradeFirstLvl,
        HDC backgroundUpgradeSecondLvl, HDC backgroundUpgradeThirdLvl, HDC backgroundMap, HDC backgroundGame, HDC objectBlacksmith1, HDC objectBlacksmith2,
        HDC objectBlacksmith3, HDC objectBlacksmith4, HDC objectFirstHouse, HDC objectSecondHouse, HDC objectThirdHouse, HDC Vegetable_1_1, HDC Vegetable_1_2,
        HDC Vegetable_1_3, HDC Vegetable_1_4, HDC Vegetable_2_1, HDC Vegetable_2_2, HDC Vegetable_2_3, HDC Vegetable_2_4, HDC Vegetable_3_1, HDC Vegetable_3_2, 
        HDC Vegetable_3_3, HDC Vegetable_3_4, HDC Tree_1_1, HDC Tree_1_2, HDC Tree_1_3, HDC Tree_2_1, HDC Tree_2_2, HDC Tree_2_3, HDC Tree_3_1, HDC Tree_3_2, HDC Tree_3_3,
        HDC Collector_0_1_1, HDC Collector_0_1_2, HDC Collector_0_1_3, HDC Collector_0_2_1, HDC Collector_0_2_2, HDC Collector_0_2_3, HDC Collector_1_1_1,
        HDC Collector_1_1_2, HDC Collector_1_1_3, HDC Collector_1_2_1, HDC Collector_1_2_2, HDC Collector_1_2_3, HDC Woodcutter_0_1_1, HDC Woodcutter_0_1_2,
        HDC Woodcutter_0_1_3, HDC Woodcutter_0_2_1, HDC Woodcutter_0_2_2, HDC Woodcutter_0_2_3, HDC Woodcutter_1_1_1, HDC Woodcutter_1_1_2, HDC Woodcutter_1_1_3,
        HDC Woodcutter_1_2_1, HDC Woodcutter_1_2_2, HDC Woodcutter_1_2_3, HDC Knight_0_1_1, HDC Knight_0_1_2, HDC Knight_0_1_3, HDC Knight_0_2_1, HDC Knight_0_2_2, 
        HDC Knight_0_2_3, HDC Archer_0_1_1, HDC Archer_0_1_2, HDC Archer_0_1_3, HDC Archer_0_2_1, HDC Archer_0_2_2, HDC Archer_0_2_3, HDC Wizard_0_1_1, HDC Wizard_0_1_2, 
        HDC Wizard_0_1_3, HDC Wizard_0_2_1, HDC Wizard_0_2_2, HDC Wizard_0_2_3, HDC Lizard_0_1_1, HDC Lizard_0_1_2, HDC Lizard_0_1_3, HDC Lizard_0_2_1, HDC Lizard_0_2_2, 
        HDC Lizard_0_2_3)
    {
        if(GetAsyncKeyState('Q'))
        {
            char debugText[LEN];
            char layoutText[100];
            char actText[100];
            char houseUpgradeText[100];
            char treesUpgradeText[100];
            char vegetablesUpgradeText[100];
            char smithyUpgradeSelectText[100];
            char houseUpgradeSelectText[100];
            char backgroundX1Text[100];
            char backgroundX2Text[100];
            char mapMoveText[100];
            char blacksmithFrameText[100];
            char vegetables1FrameText[100];
            char vegetables2FrameText[100];
            char vegetables3FrameText[100];
            char vegetables4FrameText[100];
            char vegetables5FrameText[100];
            char vegetables6FrameText[100];
            char collectorCollectVegetables[100];

            itoa(*layout, layoutText, 10);
            itoa(*act, actText, 10);
            itoa(*houseUpgrade, houseUpgradeText, 10);
            itoa(*treesUpgrade, treesUpgradeText, 10);
            itoa(*vegetablesUpgrade, vegetablesUpgradeText, 10);
            itoa(*smithyUpgradeSelect, smithyUpgradeSelectText, 10);
            itoa(*houseUpgradeSelect, houseUpgradeSelectText, 10);
            itoa(*backgroundX1, backgroundX1Text, 10);
            itoa(*backgroundX2, backgroundX2Text, 10);
            itoa(*mapMove, mapMoveText, 10);
            itoa(*blacksmithFrame, blacksmithFrameText, 10);
            itoa(vegetablesArray[0].IsCollect(), vegetables1FrameText, 10);
            itoa(vegetablesArray[1].GetFrame(), vegetables2FrameText, 10);
            itoa(vegetablesArray[2].GetFrame(), vegetables3FrameText, 10);
            itoa(vegetablesArray[3].GetFrame(), vegetables4FrameText, 10);
            itoa(vegetablesArray[4].GetFrame(), vegetables5FrameText, 10);
            itoa(vegetablesArray[5].GetFrame(), vegetables6FrameText, 10);
            itoa(collectorArray[1].GetCollectVegetables(), collectorCollectVegetables, 10);

            strcpy(debugText, "Debug informations:\n");
            strcat(debugText, "layout = ");
            strcat(debugText, layoutText);
            strcat(debugText, ";\n act = ");
            strcat(debugText, actText);
            strcat(debugText, ";\n houseUpgrade = ");
            strcat(debugText, houseUpgradeText);
            strcat(debugText, ";\n treesUpgrade = ");
            strcat(debugText, treesUpgradeText);
            strcat(debugText, ";\n vegetablesUpgrade = ");
            strcat(debugText, vegetablesUpgradeText);
            strcat(debugText, ";\n houseUpgradeSelect = ");
            strcat(debugText, houseUpgradeSelectText);
            strcat(debugText, ";\n smithyUpgradeSelect = ");
            strcat(debugText, smithyUpgradeSelectText);
            strcat(debugText, ";\n backgroundX1 = ");
            strcat(debugText, backgroundX1Text);
            strcat(debugText, ";\n backgroundX2 = ");
            strcat(debugText, backgroundX2Text);
            strcat(debugText, ";\n mapMove = ");
            strcat(debugText, mapMoveText);
            strcat(debugText, ";\n vegetables1Frame = ");
            strcat(debugText, vegetables1FrameText);
            strcat(debugText, ";\n vegetables2Frame = ");
            strcat(debugText, vegetables2FrameText);
            strcat(debugText, ";\n vegetables3Frame = ");
            strcat(debugText, vegetables3FrameText);
            strcat(debugText, ";\n vegetables4Frame = ");
            strcat(debugText, vegetables4FrameText);
            strcat(debugText, ";\n vegetables5Frame = ");
            strcat(debugText, vegetables5FrameText);
            strcat(debugText, ";\n vegetables6Frame = ");
            strcat(debugText, vegetables6FrameText);
            strcat(debugText, ";\n collector1CollectVegetables = ");
            strcat(debugText, collectorCollectVegetables);
            strcat(debugText, ";");

            txMessageBox(debugText, "Debug Function");
            //printf("%i", *act);
        }

        if(GetAsyncKeyState(VK_SPACE))
        {
            if (*layout == 0)
            {
                if(*backgroundX1 != 1290)
                {
                    *mapMove = 1;
                    for(int i=0; i<129; i++)
                    {
                        *backgroundX1 = *backgroundX1+10;
                        *backgroundX2 = *backgroundX2+10;

                        txBegin();
                        painting(*layout, *act, *money, *actMoney, *houseUpgrade, *treesUpgrade, *vegetablesUpgrade, *smithyUpgradeSelect, *houseUpgradeSelect, *backgroundX1, *backgroundX2, *menuStage, *mapMove, blacksmithFrame, collectorArray, woodcutterArray, knightArray, archerArray, wizardArray, lizardArray, vegetablesArray, treesArray, uiMenu, btnLeft, btnRight, btnSmithy, btnUpgrade, btnMap, uiSmithyBuying, uiSmithyUpgrade11, uiSmithyUpgrade12, uiSmithyUpgrade13, uiSmithyUpgrade21, uiSmithyUpgrade22, uiSmithyUpgrade23, uiSmithySelectUpgrade, uiUpgradeBuying, uiCloudAct1, uiCloudAct2, uiCloudAct3, uiCloudAct4, btnV, btnX, btnFirstActAction, btnSecondActAction, btnThirdActAction, btnFourthAndFifthActAction, backgroundMainMenuNew, backgroundMainMenuResume, backgroundMenu, backgroundSmithy, backgroundUpgradeFirstLvl, backgroundUpgradeSecondLvl, backgroundUpgradeThirdLvl, backgroundMap, backgroundGame, objectBlacksmith1, objectBlacksmith2, objectBlacksmith3, objectBlacksmith4, objectFirstHouse, objectSecondHouse, objectThirdHouse, Vegetable_1_1, Vegetable_1_2, Vegetable_1_3, Vegetable_1_4, Vegetable_2_1, Vegetable_2_2, Vegetable_2_3, Vegetable_2_4, Vegetable_3_1, Vegetable_3_2, Vegetable_3_3, Vegetable_3_4, Tree_1_1, Tree_1_2, Tree_1_3, Tree_2_1, Tree_2_2, Tree_2_3, Tree_3_1, Tree_3_2, Tree_3_3, Collector_0_1_1, Collector_0_1_2, Collector_0_1_3, Collector_0_2_1, Collector_0_2_2, Collector_0_2_3, Collector_1_1_1, Collector_1_1_2, Collector_1_1_3, Collector_1_2_1, Collector_1_2_2, Collector_1_2_3, Woodcutter_0_1_1, Woodcutter_0_1_2, Woodcutter_0_1_3, Woodcutter_0_2_1, Woodcutter_0_2_2, Woodcutter_0_2_3, Woodcutter_1_1_1, Woodcutter_1_1_2, Woodcutter_1_1_3, Woodcutter_1_2_1, Woodcutter_1_2_2, Woodcutter_1_2_3, Knight_0_1_1, Knight_0_1_2, Knight_0_1_3, Knight_0_2_1, Knight_0_2_2, Knight_0_2_3, Archer_0_1_1, Archer_0_1_2, Archer_0_1_3, Archer_0_2_1, Archer_0_2_2, Archer_0_2_3, Wizard_0_1_1, Wizard_0_1_2, Wizard_0_1_3, Wizard_0_2_1, Wizard_0_2_2, Wizard_0_2_3, Lizard_0_1_1, Lizard_0_1_2, Lizard_0_1_3, Lizard_0_2_1, Lizard_0_2_2, Lizard_0_2_3);
                        txEnd();
                    }
                    Sleep(100);
                    *mapMove = 0;
                }
            }
        }
        
        if((!hrFileIsExist("Resources\\Saving.txt") and newGame1.IsClicked(*layout)) or (hrFileIsExist("Resources\\Saving.txt") and newGame1.IsClicked(*layout)))
        {
            if(*backgroundX1 == 1290)
            {
                txSetFillColor(RGB(0, 0, 0));
                txSetColor(RGB(0, 0, 0));
                txClear();
                *backgroundX1 = 1296; 
                *backgroundX2 = 2592;
                Sleep(500);
                *act = 1;
                *money = 250; 
                *houseUpgrade = 0; 
                *treesUpgrade = 0;
                *vegetablesUpgrade = 0;
                hrSave(*act, *houseUpgrade, *treesUpgrade, *vegetablesUpgrade);
                *layout = 1;
                *menuStage = 1;
                txSetFillColor(RGB(255, 255, 255));
                txSetColor(RGB(255, 255, 255));
            }
        }

        if(hrFileIsExist("Resources\\Saving.txt") and resumeGame.IsClicked(*layout))
        {
            if(*backgroundX1 == 1290)
            {
                txSetFillColor(RGB(0, 0, 0));
                txSetColor(RGB(0, 0, 0));
                txClear();
                *backgroundX1 = 1296; 
                *backgroundX2 = 2592;
                Sleep(500);
                hrLoad(act, houseUpgrade, treesUpgrade, vegetablesUpgrade);
                *layout = 1;
                *menuStage = 1;
                txSetFillColor(RGB(255, 255, 255));
                txSetColor(RGB(255, 255, 255));
            }
        }

        if(left.IsClicked(*layout))
        {
            if(*menuStage == 1 or *menuStage == 2)
            {
                *mapMove = 1;
                for(int i=0; i<129; i++)
                {
                    *backgroundX1 = *backgroundX1-10;
                    *backgroundX2 = *backgroundX2-10;

                    txBegin();
                    painting(*layout, *act, *money, *actMoney, *houseUpgrade, *treesUpgrade, *vegetablesUpgrade, *smithyUpgradeSelect, *houseUpgradeSelect, *backgroundX1, *backgroundX2, *menuStage, *mapMove, blacksmithFrame, collectorArray, woodcutterArray, knightArray, archerArray, wizardArray, lizardArray, vegetablesArray, treesArray, uiMenu, btnLeft, btnRight, btnSmithy, btnUpgrade, btnMap, uiSmithyBuying, uiSmithyUpgrade11, uiSmithyUpgrade12, uiSmithyUpgrade13, uiSmithyUpgrade21, uiSmithyUpgrade22, uiSmithyUpgrade23, uiSmithySelectUpgrade, uiUpgradeBuying, uiCloudAct1, uiCloudAct2, uiCloudAct3, uiCloudAct4, btnV, btnX, btnFirstActAction, btnSecondActAction, btnThirdActAction, btnFourthAndFifthActAction, backgroundMainMenuNew, backgroundMainMenuResume, backgroundMenu, backgroundSmithy, backgroundUpgradeFirstLvl, backgroundUpgradeSecondLvl, backgroundUpgradeThirdLvl, backgroundMap, backgroundGame, objectBlacksmith1, objectBlacksmith2, objectBlacksmith3, objectBlacksmith4, objectFirstHouse, objectSecondHouse, objectThirdHouse, Vegetable_1_1, Vegetable_1_2, Vegetable_1_3, Vegetable_1_4, Vegetable_2_1, Vegetable_2_2, Vegetable_2_3, Vegetable_2_4, Vegetable_3_1, Vegetable_3_2, Vegetable_3_3, Vegetable_3_4, Tree_1_1, Tree_1_2, Tree_1_3, Tree_2_1, Tree_2_2, Tree_2_3, Tree_3_1, Tree_3_2, Tree_3_3, Collector_0_1_1, Collector_0_1_2, Collector_0_1_3, Collector_0_2_1, Collector_0_2_2, Collector_0_2_3, Collector_1_1_1, Collector_1_1_2, Collector_1_1_3, Collector_1_2_1, Collector_1_2_2, Collector_1_2_3, Woodcutter_0_1_1, Woodcutter_0_1_2, Woodcutter_0_1_3, Woodcutter_0_2_1, Woodcutter_0_2_2, Woodcutter_0_2_3, Woodcutter_1_1_1, Woodcutter_1_1_2, Woodcutter_1_1_3, Woodcutter_1_2_1, Woodcutter_1_2_2, Woodcutter_1_2_3, Knight_0_1_1, Knight_0_1_2, Knight_0_1_3, Knight_0_2_1, Knight_0_2_2, Knight_0_2_3, Archer_0_1_1, Archer_0_1_2, Archer_0_1_3, Archer_0_2_1, Archer_0_2_2, Archer_0_2_3, Wizard_0_1_1, Wizard_0_1_2, Wizard_0_1_3, Wizard_0_2_1, Wizard_0_2_2, Wizard_0_2_3, Lizard_0_1_1, Lizard_0_1_2, Lizard_0_1_3, Lizard_0_2_1, Lizard_0_2_2, Lizard_0_2_3);
                    txEnd();
                }
                *menuStage = *menuStage-1;
                Sleep(500);
                *mapMove = 0;
            }
        }

        if(right.IsClicked(*layout))
        {
            if(*menuStage == 0 or *menuStage == 1)
            {
                *mapMove = 1;
                for(int i=0; i<129; i++)
                {
                    *backgroundX1 = *backgroundX1+10;
                    *backgroundX2 = *backgroundX2+10;

                    txBegin();
                    painting(*layout, *act, *money, *actMoney, *houseUpgrade, *treesUpgrade, *vegetablesUpgrade, *smithyUpgradeSelect, *houseUpgradeSelect, *backgroundX1, *backgroundX2, *menuStage, *mapMove, blacksmithFrame, collectorArray, woodcutterArray, knightArray, archerArray, wizardArray, lizardArray, vegetablesArray, treesArray, uiMenu, btnLeft, btnRight, btnSmithy, btnUpgrade, btnMap, uiSmithyBuying, uiSmithyUpgrade11, uiSmithyUpgrade12, uiSmithyUpgrade13, uiSmithyUpgrade21, uiSmithyUpgrade22, uiSmithyUpgrade23, uiSmithySelectUpgrade, uiUpgradeBuying, uiCloudAct1, uiCloudAct2, uiCloudAct3, uiCloudAct4, btnV, btnX, btnFirstActAction, btnSecondActAction, btnThirdActAction, btnFourthAndFifthActAction, backgroundMainMenuNew, backgroundMainMenuResume, backgroundMenu, backgroundSmithy, backgroundUpgradeFirstLvl, backgroundUpgradeSecondLvl, backgroundUpgradeThirdLvl, backgroundMap, backgroundGame, objectBlacksmith1, objectBlacksmith2, objectBlacksmith3, objectBlacksmith4, objectFirstHouse, objectSecondHouse, objectThirdHouse, Vegetable_1_1, Vegetable_1_2, Vegetable_1_3, Vegetable_1_4, Vegetable_2_1, Vegetable_2_2, Vegetable_2_3, Vegetable_2_4, Vegetable_3_1, Vegetable_3_2, Vegetable_3_3, Vegetable_3_4, Tree_1_1, Tree_1_2, Tree_1_3, Tree_2_1, Tree_2_2, Tree_2_3, Tree_3_1, Tree_3_2, Tree_3_3, Collector_0_1_1, Collector_0_1_2, Collector_0_1_3, Collector_0_2_1, Collector_0_2_2, Collector_0_2_3, Collector_1_1_1, Collector_1_1_2, Collector_1_1_3, Collector_1_2_1, Collector_1_2_2, Collector_1_2_3, Woodcutter_0_1_1, Woodcutter_0_1_2, Woodcutter_0_1_3, Woodcutter_0_2_1, Woodcutter_0_2_2, Woodcutter_0_2_3, Woodcutter_1_1_1, Woodcutter_1_1_2, Woodcutter_1_1_3, Woodcutter_1_2_1, Woodcutter_1_2_2, Woodcutter_1_2_3, Knight_0_1_1, Knight_0_1_2, Knight_0_1_3, Knight_0_2_1, Knight_0_2_2, Knight_0_2_3, Archer_0_1_1, Archer_0_1_2, Archer_0_1_3, Archer_0_2_1, Archer_0_2_2, Archer_0_2_3, Wizard_0_1_1, Wizard_0_1_2, Wizard_0_1_3, Wizard_0_2_1, Wizard_0_2_2, Wizard_0_2_3, Lizard_0_1_1, Lizard_0_1_2, Lizard_0_1_3, Lizard_0_2_1, Lizard_0_2_2, Lizard_0_2_3);
                    txEnd();
                }
                *menuStage = *menuStage+1;
                Sleep(500);
                *mapMove = 0;
            }
        }

        if(smithy.IsClicked(*layout))
        {
            if(*menuStage == 0)
            {
                txSetFillColor(RGB(0, 0, 0));
                txSetColor(RGB(0, 0, 0));
                txClear();
                *backgroundX1 = 0; 
                *backgroundX2 = 1296;
                Sleep(500);
                *layout = 2;
                *menuStage = 1;
                txSetFillColor(RGB(255, 255, 255));
                txSetColor(RGB(255, 255, 255));
            }
        }

        if(smithyUpgrade11.IsClicked(*layout))
        {
            *smithyUpgradeSelect = 11;
        }
        if(smithyUpgrade12.IsClicked(*layout))
        {
            *smithyUpgradeSelect = 12;
        }
        if(smithyUpgrade13.IsClicked(*layout))
        {
            *smithyUpgradeSelect = 13;
        }
        if(smithyUpgrade21.IsClicked(*layout))
        {
            *smithyUpgradeSelect = 21;
        }
        if(smithyUpgrade22.IsClicked(*layout))
        {
            *smithyUpgradeSelect = 22;
        }
        if(smithyUpgrade23.IsClicked(*layout))
        {
            *smithyUpgradeSelect = 23;
        }
        if(smithyUpgrade31.IsClicked(*layout))
        {
            *smithyUpgradeSelect = 31;
        }
        if(smithyUpgrade32.IsClicked(*layout))
        {
            *smithyUpgradeSelect = 32;
        }
        if(smithyUpgrade33.IsClicked(*layout))
        {
            *smithyUpgradeSelect = 33;
        }
        if(smithyUpgrade41.IsClicked(*layout))
        {
            *smithyUpgradeSelect = 41;
        }
        if(smithyUpgrade42.IsClicked(*layout))
        {
            *smithyUpgradeSelect = 42;
        }
        if(smithyUpgrade43.IsClicked(*layout))
        {
            *smithyUpgradeSelect = 43;
        }
        if(smithyUpgrade51.IsClicked(*layout))
        {
            *smithyUpgradeSelect = 51;
        }
        if(smithyUpgrade52.IsClicked(*layout))
        {
            *smithyUpgradeSelect = 52;
        }
        if(smithyUpgrade53.IsClicked(*layout))
        {
            *smithyUpgradeSelect = 53;
        }

        if(smithyBuy.IsClicked(*layout))
        {
            switch(*smithyUpgradeSelect)
            {
                case 11:
                    if(*money >= 50)
                    {
                        if(*vegetablesUpgrade < 1)
                        {
                            *money = *money - 50;
                            *vegetablesUpgrade = 1;
                            hrSave(*act, *houseUpgrade, *treesUpgrade, *vegetablesUpgrade);
                        }
                    }
                    break;
                case 12:
                    if(*money >= 100)
                    {
                        if(*vegetablesUpgrade < 2)
                        {
                            *money = *money - 100;
                            *vegetablesUpgrade = 2;
                            hrSave(*act, *houseUpgrade, *treesUpgrade, *vegetablesUpgrade);
                        }
                    }
                    break;
                case 13:
                    if(*money >= 150)
                    {
                        if(*vegetablesUpgrade < 3)
                        {
                            *money = *money - 150;
                            *vegetablesUpgrade = 3;
                            hrSave(*act, *houseUpgrade, *treesUpgrade, *vegetablesUpgrade);
                        }
                    }
                    break;
                case 21:
                    if(*money >= 50)
                    {
                        if(*treesUpgrade < 1)
                        {
                            *money = *money - 50;
                            *treesUpgrade = 1;
                            hrSave(*act, *houseUpgrade, *treesUpgrade, *vegetablesUpgrade);
                        }
                    }
                    break;
                case 22:
                    if(*money >= 100)
                    {
                        if(*treesUpgrade < 2)
                        {
                            *money = *money - 100;
                            *treesUpgrade = 2;
                            hrSave(*act, *houseUpgrade, *treesUpgrade, *vegetablesUpgrade);
                        }
                    }
                    break;
                case 23:
                    if(*money >= 150)
                    {
                        if(*treesUpgrade < 3)
                        {
                            *money = *money - 150;
                            *treesUpgrade = 3;
                            hrSave(*act, *houseUpgrade, *treesUpgrade, *vegetablesUpgrade);
                        }
                    }
                    break;
            }
        }

        if(smithyBack.IsClicked(*layout))
        {
            txSetFillColor(RGB(0, 0, 0));
            txSetColor(RGB(0, 0, 0));
            txClear();
            *backgroundX1 = 1296; 
            *backgroundX2 = 2592;
            Sleep(500);
            *layout = 1;
            *menuStage = 1;
            *smithyUpgradeSelect = 11;
            txSetFillColor(RGB(255, 255, 255));
            txSetColor(RGB(255, 255, 255));
        }

        if(upgrade.IsClicked(*layout))
        {
            if(*menuStage == 1)
            {
                txSetFillColor(RGB(0, 0, 0));
                txSetColor(RGB(0, 0, 0));
                txClear();
                *backgroundX1 = 0; 
                *backgroundX2 = 1296;
                Sleep(500);
                *layout = 3;
                *menuStage = 0;
                txSetFillColor(RGB(255, 255, 255));
                txSetColor(RGB(255, 255, 255));
            }
        }

        if(upgradeFirstLvl.IsClicked(*layout))
        {
            *houseUpgradeSelect = 1;
        }

        if(upgradeSecondLvl.IsClicked(*layout))
        {
            *houseUpgradeSelect = 2;
        }

        if(upgradeThirdLvl.IsClicked(*layout))
        {
            *houseUpgradeSelect = 3;
        }

        if(upgr.IsClicked(*layout))
        {
            if(*houseUpgradeSelect == 1)
            {
                if(*houseUpgrade == 0)
                {
                    if(*money >= 150)
                    {
                        *houseUpgrade = 1;
                        *money = *money-150;
                        hrSave(*act, *houseUpgrade, *treesUpgrade, *vegetablesUpgrade);
                    }
                }
            }
            if(*houseUpgradeSelect == 2)
            {
                if(*houseUpgrade == 1)
                {
                    if(*vegetablesUpgrade != 0 and *treesUpgrade != 0)
                    {
                    if(*money >= 200)
                        {
                            *houseUpgrade = 2;
                            *money = *money-200;
                            hrSave(*act, *houseUpgrade, *treesUpgrade, *vegetablesUpgrade);
                        }
                    }
                }
            }
            if(*houseUpgradeSelect == 3)
            {
                if(*houseUpgrade == 2)
                {
                    if(*money >= 250)
                    {
                        *houseUpgrade = 3;
                        *money = *money-250;
                        hrSave(*act, *houseUpgrade, *treesUpgrade, *vegetablesUpgrade);
                    }
                }
            }
        }

        if(upgradeBack.IsClicked(*layout))
        {
            txSetFillColor(RGB(0, 0, 0));
            txSetColor(RGB(0, 0, 0));
            txClear();
            *backgroundX1 = 1296; 
            *backgroundX2 = 2592;
            Sleep(500);
            *layout = 1;
            *menuStage = 1;
            *houseUpgradeSelect = 1;
            txSetFillColor(RGB(255, 255, 255));
            txSetColor(RGB(255, 255, 255));
        }

        if(map.IsClicked(*layout))
        {
            if(*vegetablesUpgrade != 0 and *treesUpgrade != 0 and *houseUpgrade != 0)
            {
                txSetFillColor(RGB(0, 0, 0));
                txSetColor(RGB(0, 0, 0));
                txClear();
                *backgroundX1 = 0; 
                *backgroundX2 = 1296;
                Sleep(500);
                *layout = 4;
                *menuStage = 0;
                txSetFillColor(RGB(255, 255, 255));
                txSetColor(RGB(255, 255, 255));
            }else{
                txNotifyIcon(NIIF_INFO, "Warning!", "Before you continue, buy initial upgrades to the house, vegetables, and trees.");
            }
            
        }

        if(xFirstAct.IsClicked(*layout))
        {
            if(*act == 1)
            {
                txSetFillColor(RGB(0, 0, 0));
                txSetColor(RGB(0, 0, 0));
                txClear();
                *backgroundX1 = 0; 
                *backgroundX2 = 1296;
                Sleep(500);
                *layout = 5;
                *menuStage = 0;
                txSetFillColor(RGB(255, 255, 255));
                txSetColor(RGB(255, 255, 255));
            }
        }

        if(xSecondAct.IsClicked(*layout))
        {
            if(*act == 2)
            {
                txSetFillColor(RGB(0, 0, 0));
                txSetColor(RGB(0, 0, 0));
                txClear();
                *backgroundX1 = 0; 
                *backgroundX2 = 1296;
                Sleep(500);
                *layout = 5;
                *menuStage = 0;
                txSetFillColor(RGB(255, 255, 255));
                txSetColor(RGB(255, 255, 255));
            }
        }

        if(xThirdAct.IsClicked(*layout))
        {
            if(*act == 3)
            {
                txSetFillColor(RGB(0, 0, 0));
                txSetColor(RGB(0, 0, 0));
                txClear();
                *backgroundX1 = 0; 
                *backgroundX2 = 1296;
                Sleep(500);
                *layout = 5;
                *menuStage = 0;
                txSetFillColor(RGB(255, 255, 255));
                txSetColor(RGB(255, 255, 255));
            }
        }

        if(xFourthAct.IsClicked(*layout))
        {
            if(*act == 4)
            {
                txSetFillColor(RGB(0, 0, 0));
                txSetColor(RGB(0, 0, 0));
                txClear();
                *backgroundX1 = 0; 
                *backgroundX2 = 1296;
                Sleep(500);
                *layout = 5;
                *menuStage = 0;
                txSetFillColor(RGB(255, 255, 255));
                txSetColor(RGB(255, 255, 255));
            }
        }

        if(xFifthAct.IsClicked(*layout))
        {
            if(*act == 5)
            {
                txSetFillColor(RGB(0, 0, 0));
                txSetColor(RGB(0, 0, 0));
                txClear();
                *backgroundX1 = 0; 
                *backgroundX2 = 1296;
                Sleep(500);
                *layout = 5;
                *menuStage = 0;
                txSetFillColor(RGB(255, 255, 255));
                txSetColor(RGB(255, 255, 255));
            }
        }

        if(mapBack.IsClicked(*layout))
        {
            txSetFillColor(RGB(0, 0, 0));
            txSetColor(RGB(0, 0, 0));
            txClear();
            *backgroundX1 = 1296; 
            *backgroundX2 = 2592;
            Sleep(500);
            *layout = 1;
            *menuStage = 1;
            txSetFillColor(RGB(255, 255, 255));
            txSetColor(RGB(255, 255, 255));
        }

        
        switch(*act)
        {
            case 1:
                if(gameThirdAction.IsClicked(*layout))
                {
                    for(int i = 0; i<3; i++)
                    {
                        if(collectorArray[i].GetState() == 0)
                        {
                            collectorArray[i].SetState(1);
                            collectorArray[i].SetCoordinate(139, 194);
                            break;
                        }
                    }
                    Sleep(250);
                }
                if(gameFourthAction.IsClicked(*layout))
                {
                    for(int i = 0; i<3; i++)
                    {
                        if(knightArray[i].GetState() == 0)
                        {
                            knightArray[i].SetState(1);
                            knightArray[i].SetCoordinate(139, 530);
                            break;
                        }
                    }
                    Sleep(250);
                }
                break;
            case 2:
                if(gameThirdAction.IsClicked(*layout))
                {
                    for(int i = 0; i < 3; i++)
                    {
                        if(collectorArray[i].GetState() == 0)
                        {
                            collectorArray[i].SetState(1);
                            collectorArray[i].SetCoordinate(139, 194);
                            break;
                        }
                    }
                    Sleep(250);
                }
                if(gameFourthAction.IsClicked(*layout))
                {
                    for(int i = 0; i<3; i++)
                    {
                        if(knightArray[i].GetState() == 0)
                        {
                            knightArray[i].SetState(1);
                            knightArray[i].SetCoordinate(139, 530);
                            break;
                        }
                    }
                    Sleep(250);
                }
                if(gameFifthAction.IsClicked(*layout))
                {
                    for(int i = 0; i < 3; i++)
                    {
                        if(archerArray[i].GetState() == 0)
                        {
                            archerArray[i].SetState(1);
                            archerArray[i].SetCoordinate(139, 530);
                            break;
                        }
                    }
                    Sleep(250);
                }
                break;
            case 3:
                if(gameSecondAction.IsClicked(*layout))
                {
                    for(int i = 0; i < 3; i++)
                    {
                        if(collectorArray[i].GetState() == 0)
                        {
                            collectorArray[i].SetState(1);
                            collectorArray[i].SetCoordinate(139, 194);
                            break;
                        }
                    }
                    Sleep(250);
                }

                if(gameThirdAction.IsClicked(*layout))
                {
                    for(int i = 0; i < 3; i++)
                    {
                        if(woodcutterArray[i].GetState() == 0)
                        {
                            woodcutterArray[i].SetState(1);
                            woodcutterArray[i].SetCoordinate(139, 194);
                            break;
                        }
                    }
                    Sleep(250);
                }

                if(gameFourthAction.IsClicked(*layout))
                {
                    for(int i = 0; i<3; i++)
                    {
                        if(knightArray[i].GetState() == 0)
                        {
                            knightArray[i].SetState(1);
                            knightArray[i].SetCoordinate(139, 530);
                            break;
                        }
                    }
                    Sleep(250);
                }

                if(gameFifthAction.IsClicked(*layout))
                {
                    for(int i = 0; i < 4; i++)
                    {
                        if(archerArray[i].GetState() == 0)
                        {
                            archerArray[i].SetState(1);
                            archerArray[i].SetCoordinate(139, 530);
                            break;
                        }
                    }
                    Sleep(250);
                }
        }
        
        if(*act == 4 or *act == 5)
        {
            if(gameFirstAction.IsClicked(*layout))
            {
                for(int i = 0; i < 3; i++)
                {
                    if(collectorArray[i].GetState() == 0)
                    {
                        collectorArray[i].SetState(1);
                        collectorArray[i].SetCoordinate(139, 194);
                        break;
                    }
                }
                Sleep(250);
            }

            if(gameSecondAction.IsClicked(*layout))
            {
                for(int i = 0; i < 3; i++)
                {
                    if(woodcutterArray[i].GetState() == 0)
                    {
                        woodcutterArray[i].SetState(1);
                        woodcutterArray[i].SetCoordinate(139, 194);
                        break;
                    }
                }
                Sleep(250);
            }

            if(gameFourthAction.IsClicked(*layout))
            {
                for(int i = 0; i<3; i++)
                {
                    if(knightArray[i].GetState() == 0)
                    {
                        knightArray[i].SetState(1);
                        knightArray[i].SetCoordinate(139, 530);
                        break;
                    }
                }
                Sleep(250);
            }

            if(gameFifthAction.IsClicked(*layout))
            {
                for(int i = 0; i < 3; i++)
                {
                    if(archerArray[i].GetState() == 0)
                    {
                        archerArray[i].SetState(1);
                        archerArray[i].SetCoordinate(139, 530);
                        break;
                    }
                }
                Sleep(250);
            }

            if(gameSixthAction.IsClicked(*layout))
            {
                for(int i = 0; i < 3; i++)
                {
                    if(wizardArray[i].GetState() == 0)
                    {
                        wizardArray[i].SetState(1);
                        wizardArray[i].SetCoordinate(139, 530);
                        break;
                    }
                }
                Sleep(250);
            }
        }
    }

    void hrSave(int act, int houseUpgrade, int treesUpgrade, int vegetablesUpgrade)
    {
        FILE *Save;
        char actText[LEN];
        char houseUpgradeText[LEN];
        char treesUpgradeText[LEN];
        char vegetablesUpgradeText[LEN];

        itoa(act, actText, 10);
        itoa(houseUpgrade, houseUpgradeText, 10);
        itoa(treesUpgrade, treesUpgradeText, 10);
        itoa(vegetablesUpgrade, vegetablesUpgradeText, 10);
    
        Save = fopen("Resources\\Saving.txt", "w");
        fputs(strcat(strcat(strcat(strcat(strcat(strcat(actText, "_"), houseUpgradeText), "_"), treesUpgradeText), "_"), vegetablesUpgradeText), Save);
        fclose(Save);
    }

    void hrLoad(int *act, int *houseUpgrade, int *treesUpgrade, int *vegetablesUpgrade)
    {
        FILE *Load;
        char LoadText[LEN];

        Load = fopen("Resources\\Saving.txt", "r");
        if (Load != NULL)
        {
            fgets(LoadText, LEN, Load);
            
            *act = atoi(strtok(LoadText, "_"));
            *houseUpgrade = atoi(strtok(NULL, "_"));
            *treesUpgrade = atoi(strtok(NULL, "_"));
            *vegetablesUpgrade = atoi(strtok(NULL, "_"));
        }
    }

    bool hrFileIsExist(std::string filePath)
    {
        bool isExist = false;
        std::ifstream fin(filePath.c_str());
    
        if(fin.is_open())
        {
            isExist = true;
        }
    
        fin.close();
        return isExist;
    }

    
