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




    void drawingCollector()
    {

    }

    void drawingWoodcutter()
    {
        
    }

    void drawingArcher()
    {
        
    }

    void drawingTrees()
    {
        
    }

    void drawingVegetables()
    {
        
    }

    void drawingBlacksmith()
    {
        
    }

    void drawingHouses()
    {
        
    }




    void painting(
        int Layout, int Act, int HouseUpgrade, int TreesUpgrade, 
        int VegetablesUpgrade, int HouseUpgradeSelect, 
        int BackgroundX1, int BackgroundX2, int MenuStage, int MapMove, int *BlacksmithFrame,
        Collector *collectorArray, Woodcutter *woodcutterArray, Archer *archerArray, 
        Vegetables *vegetablesArray, Trees *treesArray,
        
        COLORREF **BACKGROUND_MainMenu, COLORREF **BACKGROUND_Menu, COLORREF **BACKGROUND_Smithy, 
        COLORREF **BACKGROUND_Upgrade_FirstLvl, COLORREF **BACKGROUND_Upgrade_SecondLvl, 
        COLORREF **BACKGROUND_Upgrade_ThirdLvl, COLORREF **BACKGROUND_Map, COLORREF **BACKGROUND_Game, 
        COLORREF **UI_Cloud_Act1, COLORREF **UI_Cloud_Act2, COLORREF **UI_Cloud_Act3, 
        COLORREF **UI_Cloud_Act4, COLORREF **UI_Menu, COLORREF **UI_Smithy_Buying,
        COLORREF **UI_Smithy_SelectUpgrade, COLORREF **UI_Upgrade_Buying, COLORREF **BTN_FirstAct_Action, 
        COLORREF **BTN_FourthAndFifthAct_Action, COLORREF **BTN_Left, COLORREF **BTN_Map, COLORREF **BTN_Right, 
        COLORREF **BTN_SecondAct_Action, COLORREF **BTN_Smithy, COLORREF **BTN_ThirdAct_Action, COLORREF **BTN_Upgrade, 
        COLORREF **BTN_V, COLORREF **BTN_X, COLORREF **OBJECTS_Blacksmith1, COLORREF **OBJECTS_Blacksmith2,
        COLORREF **OBJECTS_Blacksmith3, COLORREF **OBJECTS_Blacksmith4, COLORREF **OBJECTS_FirstHouse,
        COLORREF **OBJECTS_SecondHouse, COLORREF **OBJECTS_ThirdHouse, COLORREF **OBJECTS_Tree_1_1,
        COLORREF **OBJECTS_Tree_1_2, COLORREF **OBJECTS_Tree_1_3, COLORREF **OBJECTS_Tree_2_1,
        COLORREF **OBJECTS_Tree_2_2, COLORREF **OBJECTS_Tree_2_3, COLORREF **OBJECTS_Tree_3_1,
        COLORREF **OBJECTS_Tree_3_2, COLORREF **OBJECTS_Tree_3_3, COLORREF **OBJECTS_Vegetable_1_1,
        COLORREF **OBJECTS_Vegetable_1_2, COLORREF **OBJECTS_Vegetable_1_3, COLORREF **OBJECTS_Vegetable_1_4,
        COLORREF **OBJECTS_Vegetable_2_1, COLORREF **OBJECTS_Vegetable_2_2, COLORREF **OBJECTS_Vegetable_2_3,
        COLORREF **OBJECTS_Vegetable_2_4, COLORREF **OBJECTS_Vegetable_3_1, COLORREF **OBJECTS_Vegetable_3_2, 
        COLORREF **OBJECTS_Vegetable_3_3, COLORREF **OBJECTS_Vegetable_3_4, COLORREF **Collector_0_1_1,
        COLORREF **Collector_0_1_2, COLORREF **Collector_0_1_3, COLORREF **Collector_1_1_1, COLORREF **Collector_1_1_2,
        COLORREF **Collector_1_1_3, COLORREF **Collector_0_2_1, COLORREF **Collector_0_2_2, COLORREF **Collector_0_2_3,
        COLORREF **Collector_1_2_1, COLORREF **Collector_1_2_2, COLORREF **Collector_1_2_3, COLORREF **Woodcutter_0_1_1,
        COLORREF **Woodcutter_0_1_2, COLORREF **Woodcutter_0_1_3, COLORREF **Woodcutter_1_1_1, COLORREF **Woodcutter_1_1_2,
        COLORREF **Woodcutter_1_1_3, COLORREF **Woodcutter_0_2_1, COLORREF **Woodcutter_0_2_2, COLORREF **Woodcutter_0_2_3,
        COLORREF **Woodcutter_1_2_1, COLORREF **Woodcutter_1_2_2, COLORREF **Woodcutter_1_2_3, COLORREF **Archer_0_1_1,
        COLORREF **Archer_0_1_2, COLORREF **Archer_0_1_3, COLORREF **Archer_1_1_1, COLORREF **Archer_1_1_2, COLORREF **Archer_1_1_3,
        COLORREF **Archer_0_2_1, COLORREF **Archer_0_2_2, COLORREF **Archer_0_2_3, COLORREF **Archer_1_2_1, COLORREF **Archer_1_2_2,
        COLORREF **Archer_1_2_3)
    {
        txSetFillColor(TX_WHITE);
        txClear();
        if(Layout == 0)
        {
            drawingBackground(BACKGROUND_MainMenu, BackgroundX1);
            //txBitBlt(txDC(), 0, 0, BackgroundX2, 720, BACKGROUNDMainMenu, BackgroundX1, 0);
        }

        if(Layout == 1)
        {
            drawingBackground(BACKGROUND_MainMenu, BackgroundX1);

            /*if(MapMove != 1)
            {
                txAlphaBlend(txDC(), 0, 0, 1296, 720, UIMenu, 0, 0, 1);
                if(MenuStage == 0)
                {
                    txAlphaBlend(txDC(), 0, 0, 1296, 720, BTNRight, 0, 0, 1);
                    txAlphaBlend(txDC(), 0, 0, 1296, 720, BTNSmithy, 0, 0, 1);
                }
                if(MenuStage == 1)
                {
                    txAlphaBlend(txDC(), 0, 0, 1296, 720, BTNRight, 0, 0, 1);
                    txAlphaBlend(txDC(), 0, 0, 1296, 720, BTNLeft, 0, 0, 1);
                    txAlphaBlend(txDC(), 0, 0, 1296, 720, BTNUpgrade, 0, 0, 1);
                }
                if(MenuStage == 2)
                {
                    txAlphaBlend(txDC(), 0, 0, 1296, 720, BTNLeft, 0, 0, 1);
                    txAlphaBlend(txDC(), 0, 0, 1296, 720, BTNMap, 0, 0, 1);
                }
            }*/
        }

        /*if(Layout == 2)
        {
            txBitBlt(txDC(), 0, 0, 1296, 720, BACKGROUNDSmithy, 0, 0);
            if(*BlacksmithFrame == 1)
            {
                txAlphaBlend(txDC(), 0, 0, 1296, 720, Blacksmith1, 0, 0, 1);
                *BlacksmithFrame = 2;
                Sleep(50);
            }else{
                if(*BlacksmithFrame == 2)
                {
                    txAlphaBlend(txDC(), 0, 0, 1296, 720, Blacksmith2, 0, 0, 1);
                    *BlacksmithFrame = 3;
                    Sleep(50);
                }else{
                    if(*BlacksmithFrame == 3)
                    {
                        txAlphaBlend(txDC(), 0, 0, 1296, 720, Blacksmith3, 0, 0, 1);
                        *BlacksmithFrame = 4;
                        Sleep(50);
                    }else{
                        if(*BlacksmithFrame == 4)
                        {
                            txAlphaBlend(txDC(), 0, 0, 1296, 720, Blacksmith4, 0, 0, 1);
                            *BlacksmithFrame = 1;
                            Sleep(50);
                        }
                    }
                }
            }
        }

        if(Layout == 3)
        {
            if(HouseUpgradeSelect == 1)
            {
                txBitBlt(txDC(), 0, 0, 1296, 720, BACKGROUNDUpgradeFirstLvl, 0, 0);
                if(HouseUpgrade > 0)
                {
                    txAlphaBlend(txDC(), 0, 0, 1296, 720, BACKGROUNDUpgradeBuying, 0, 0, 1);
                }
            }
            if(HouseUpgradeSelect == 2)
            {
                txBitBlt(txDC(), 0, 0, 1296, 720, BACKGROUNDUpgradeSecondLvl, 0, 0);
                if(HouseUpgrade > 1)
                {
                    txAlphaBlend(txDC(), 0, 0, 1296, 720, BACKGROUNDUpgradeBuying, 0, 0, 1);
                }
            }
            if(HouseUpgradeSelect == 3)
            {
                txBitBlt(txDC(), 0, 0, 1296, 720, BACKGROUNDUpgradeThirdLvl, 0, 0);
                if(HouseUpgrade > 2)
                {
                    txAlphaBlend(txDC(), 0, 0, 1296, 720, BACKGROUNDUpgradeBuying, 0, 0, 1);
                }
            }
        }

        if(Layout == 4)
        {
            txBitBlt(txDC(), 0, 0, 1296, 720, BACKGROUNDMap, 0, 0);
            if(Act == 1)
            {
                txAlphaBlend(txDC(), 265, 479, 111, 100, BTNX, 0, 0, 1);
                txAlphaBlend(txDC(), 562, 379, 111, 100, BTNX, 0, 0, 1);
                txAlphaBlend(txDC(), 320, 243, 111, 100, BTNX, 0, 0, 1);
                txAlphaBlend(txDC(), 920, 467, 111, 100, BTNX, 0, 0, 1);
                txAlphaBlend(txDC(), 879, 220, 111, 100, BTNX, 0, 0, 1);
                txAlphaBlend(txDC(), 147, 0, 1002, 720, UICloudAct1, 0, 0, 1);
            }
            if(Act == 2)
            {
                txAlphaBlend(txDC(), 265, 488, 111, 80, BTNV, 0, 0, 1);
                txAlphaBlend(txDC(), 562, 379, 111, 100, BTNX, 0, 0, 1);
                txAlphaBlend(txDC(), 320, 243, 111, 100, BTNX, 0, 0, 1);
                txAlphaBlend(txDC(), 920, 467, 111, 100, BTNX, 0, 0, 1);
                txAlphaBlend(txDC(), 879, 220, 111, 100, BTNX, 0, 0, 1);
                txAlphaBlend(txDC(), 147, 0, 1002, 720, UICloudAct2, 0, 0, 1);
            }
            if(Act == 3)
            {
                txAlphaBlend(txDC(), 265, 488, 111, 80, BTNV, 0, 0, 1);
                txAlphaBlend(txDC(), 564, 388, 111, 80, BTNV, 0, 0, 1);
                txAlphaBlend(txDC(), 320, 243, 111, 100, BTNX, 0, 0, 1);
                txAlphaBlend(txDC(), 920, 467, 111, 100, BTNX, 0, 0, 1);
                txAlphaBlend(txDC(), 879, 220, 111, 100, BTNX, 0, 0, 1);
                txAlphaBlend(txDC(), 147, 0, 1002, 720, UICloudAct3, 0, 0, 1);
            }
            if(Act == 4)
            {
                txAlphaBlend(txDC(), 265, 488, 111, 80, BTNV, 0, 0, 1);
                txAlphaBlend(txDC(), 564, 388, 111, 80, BTNV, 0, 0, 1);
                txAlphaBlend(txDC(), 320, 252, 111, 80, BTNV, 0, 0, 1);
                txAlphaBlend(txDC(), 920, 467, 111, 100, BTNX, 0, 0, 1);
                txAlphaBlend(txDC(), 879, 220, 111, 100, BTNX, 0, 0, 1);
                txAlphaBlend(txDC(), 147, 0, 1002, 720, UICloudAct4, 0, 0, 1);
            }
            if(Act == 5)
            {
                txAlphaBlend(txDC(), 265, 488, 111, 80, BTNV, 0, 0, 1);
                txAlphaBlend(txDC(), 564, 388, 111, 80, BTNV, 0, 0, 1);
                txAlphaBlend(txDC(), 320, 252, 111, 80, BTNV, 0, 0, 1);
                txAlphaBlend(txDC(), 920, 476, 111, 80, BTNV, 0, 0, 1);
                txAlphaBlend(txDC(), 879, 220, 111, 100, BTNX, 0, 0, 1);
            }
            if(Act == 6)
            {
                txAlphaBlend(txDC(), 265, 488, 111, 80, BTNV, 0, 0, 1);
                txAlphaBlend(txDC(), 564, 388, 111, 80, BTNV, 0, 0, 1);
                txAlphaBlend(txDC(), 320, 252, 111, 80, BTNV, 0, 0, 1);
                txAlphaBlend(txDC(), 920, 476, 111, 80, BTNV, 0, 0, 1);
                txAlphaBlend(txDC(), 879, 229, 111, 80, BTNV, 0, 0, 1);
            }
        }

        if(Layout == 5)
        {
            txBitBlt(txDC(), 0, 0, 1296, 720, BACKGROUNDGame, 0, 0);

            if(HouseUpgrade == 1)
            {
                txAlphaBlend(txDC(), 0, 0, 1296, 720, BACKGROUNDFirstHouse, 0, 0, 1);
            }
            if(HouseUpgrade == 2)
            {
                txAlphaBlend(txDC(), 0, 0, 1296, 720, BACKGROUNDSecondHouse, 0, 0, 1);
            }
            if(HouseUpgrade == 3)
            {
                txAlphaBlend(txDC(), 0, 0, 1296, 720, BACKGROUNDThirdHouse, 0, 0, 1);
            }

            if(Act == 1)
            {
                txAlphaBlend(txDC(), 0, 0, 1296, 720, BTNFirstActAction, 0, 0, 1);
            }
            if(Act == 2)
            {
                txAlphaBlend(txDC(), 0, 0, 1296, 720, BTNSecondActAction, 0, 0, 1);
            }
            if(Act == 3)
            {
                txAlphaBlend(txDC(), 0, 0, 1296, 720, BTNThirdActAction, 0, 0, 1);
            }
            if(Act == 4 or Act == 5)
            {
                txAlphaBlend(txDC(), 0, 0, 1296, 720, BTNFourthAndFifthActAction, 0, 0, 1);
            }

            for(int i = 0; i<7; i++)
            {
                if(vegetablesArray[i].GetFrame() == 1)
                {
                    if(VegetablesUpgrade == 1)
                    {
                        txAlphaBlend(txDC(), vegetablesArray[i].GetX(), vegetablesArray[i].GetY(), 45, 42, Vegetable11, 0, 0, 1);
                    }
                    if(VegetablesUpgrade == 2)
                    {
                        txAlphaBlend(txDC(), vegetablesArray[i].GetX(), vegetablesArray[i].GetY(), 36, 42, Vegetable21, 0, 0, 1);
                    }
                    if(VegetablesUpgrade == 3)
                    {
                        txAlphaBlend(txDC(), vegetablesArray[i].GetX(), vegetablesArray[i].GetY(), 33, 48, Vegetable31, 0, 0, 1);
                    }
                }
                if(vegetablesArray[i].GetFrame() == 2)
                {
                    if(VegetablesUpgrade == 1)
                    {
                        txAlphaBlend(txDC(), vegetablesArray[i].GetX(), vegetablesArray[i].GetY(), 45, 42, Vegetable12, 0, 0, 1);
                    }
                    if(VegetablesUpgrade == 2)
                    {
                        txAlphaBlend(txDC(), vegetablesArray[i].GetX(), vegetablesArray[i].GetY(), 36, 42, Vegetable22, 0, 0, 1);
                    }
                    if(VegetablesUpgrade == 3)
                    {
                        txAlphaBlend(txDC(), vegetablesArray[i].GetX(), vegetablesArray[i].GetY(), 33, 48, Vegetable32, 0, 0, 1);
                    }
                }
                if(vegetablesArray[i].GetFrame() == 3)
                {
                    if(VegetablesUpgrade == 1)
                    {
                        txAlphaBlend(txDC(), vegetablesArray[i].GetX(), vegetablesArray[i].GetY(), 45, 42, Vegetable13, 0, 0, 1);
                    }
                    if(VegetablesUpgrade == 2)
                    {
                        txAlphaBlend(txDC(), vegetablesArray[i].GetX(), vegetablesArray[i].GetY(), 36, 42, Vegetable23, 0, 0, 1);
                    }
                    if(VegetablesUpgrade == 3)
                    {
                        txAlphaBlend(txDC(), vegetablesArray[i].GetX(), vegetablesArray[i].GetY(), 33, 48, Vegetable33, 0, 0, 1);
                    }
                }
                if(vegetablesArray[i].GetFrame() == 4)
                {
                    if(VegetablesUpgrade == 1)
                    {
                        txAlphaBlend(txDC(), vegetablesArray[i].GetX(), vegetablesArray[i].GetY(), 45, 42, Vegetable14, 0, 0, 1);
                    }
                    if(VegetablesUpgrade == 2)
                    {
                        txAlphaBlend(txDC(), vegetablesArray[i].GetX(), vegetablesArray[i].GetY(), 36, 42, Vegetable24, 0, 0, 1);
                    }
                    if(VegetablesUpgrade == 3)
                    {
                        txAlphaBlend(txDC(), vegetablesArray[i].GetX(), vegetablesArray[i].GetY(), 33, 48, Vegetable34, 0, 0, 1);
                    }
                }
            }

            for(int i = 0; i<7; i++)
            {
                if(collectorArray[i].GetState() == 1)
                {
                    if(collectorArray[i].GetAnimation() == 1)
                    {
                        if(collectorArray[i].GetFrame() == 1)
                        {
                            txAlphaBlend(txDC(), collectorArray[i].GetX(), collectorArray[i].GetY(), 57, 93, Collector011, 0, 0, 1);
                        }
                        if(collectorArray[i].GetFrame() == 2)
                        {
                            txAlphaBlend(txDC(), collectorArray[i].GetX(), collectorArray[i].GetY(), 57, 93, Collector012, 0, 0, 1);
                        }
                        if(collectorArray[i].GetFrame() == 3)
                        {
                            txAlphaBlend(txDC(), collectorArray[i].GetX(), collectorArray[i].GetY(), 57, 93, Collector013, 0, 0, 1);
                        }
                    }
                    if(collectorArray[i].GetAnimation() == 2)
                    {
                        if(collectorArray[i].GetFrame() == 1)
                        {
                            txAlphaBlend(txDC(), collectorArray[i].GetX(), collectorArray[i].GetY(), 69, 93, Collector021, 0, 0, 1);
                        }
                        if(collectorArray[i].GetFrame() == 2)
                        {
                            txAlphaBlend(txDC(), collectorArray[i].GetX(), collectorArray[i].GetY(), 69, 93, Collector022, 0, 0, 1);
                        }
                        if(collectorArray[i].GetFrame() == 3)
                        {
                            txAlphaBlend(txDC(), collectorArray[i].GetX(), collectorArray[i].GetY(), 69, 93, Collector023, 0, 0, 1);
                        }
                    }
                }
            }

            for(int i = 0; i<4; i++)
            {
                if(woodcutterArray[i].GetState() == 1)
                {
                    if(woodcutterArray[i].GetAnimation() == 1)
                    {
                        if(woodcutterArray[i].GetFrame() == 1)
                        {
                            txAlphaBlend(txDC(), woodcutterArray[i].GetX(), woodcutterArray[i].GetY(), 45, 90, Woodcutter011, 0, 0, 1);
                        }
                        if(woodcutterArray[i].GetFrame() == 2)
                        {
                            txAlphaBlend(txDC(), woodcutterArray[i].GetX(), woodcutterArray[i].GetY(), 45, 90, Woodcutter012, 0, 0, 1);
                        }
                        if(woodcutterArray[i].GetFrame() == 3)
                        {
                            txAlphaBlend(txDC(), woodcutterArray[i].GetX(), woodcutterArray[i].GetY(), 45, 90, Woodcutter013, 0, 0, 1);
                        }
                    }
                }
            }

            for(int i = 0; i<4; i++)
            {
                if(archerArray[i].GetState() == 1)
                {
                    if(archerArray[i].GetAnimation() == 1)
                    {
                        if(archerArray[i].GetFrame() == 1)
                        {
                            txAlphaBlend(txDC(), archerArray[i].GetX(), archerArray[i].GetY(), 48, 90, Archer011, 0, 0, 1);
                        }
                        if(archerArray[i].GetFrame() == 2)
                        {
                            txAlphaBlend(txDC(), archerArray[i].GetX(), archerArray[i].GetY(), 48, 90, Archer012, 0, 0, 1);
                        }
                        if(archerArray[i].GetFrame() == 3)
                        {
                            txAlphaBlend(txDC(), archerArray[i].GetX(), archerArray[i].GetY(), 48, 90, Archer013, 0, 0, 1);
                        }
                    }
                }
            }
        }*/
    }

     void keyboardControls(
        int *Layout, int *Act, int *HouseUpgrade, int *TreesUpgrade, int *VegetablesUpgrade, int *HouseUpgradeSelect, 
        int *BackgroundX1, int *BackgroundX2, int *MenuStage, int *MapMove, int *BlacksmithFrame, Collector *collectorArray,
        Woodcutter *woodcutterArray, Archer *archerArray, Vegetables *vegetablesArray, Trees *treesArray, 
        
        Button NewGame, Button Left, Button Right, Button Smithy, Button Upgrade, Button Map, Button SmithyUpgrade11, 
        Button SmithyUpgrade12, Button SmithyUpgrade13, Button SmithyUpgrade21, Button SmithyUpgrade22, Button SmithyUpgrade23, 
        Button SmithyUpgrade31, Button SmithyUpgrade32, Button SmithyUpgrade33, Button SmithyUpgrade41, Button SmithyUpgrade42, 
        Button SmithyUpgrade43, Button SmithyUpgrade51, Button SmithyUpgrade52, Button SmithyUpgrade53, Button SmithyBack, 
        Button Upgr, Button UpgradeFirstLvl, Button UpgradeSecondLvl, Button UpgradeThirdLvl, Button UpgradeBack, Button VFirstAct, 
        Button XFirstAct, Button VSecondAct, Button XSecondAct, Button VThirdAct, Button XThirdAct, Button VFourthAct, 
        Button XFourthAct, Button VFifthAct, Button XFifthAct, Button MapBack, Button GameFirstAction, Button GameSecondAction, 
        Button GameThirdAction, Button GameFourthAction, Button GameFifthAction, Button GameSixthAction, 
        
        COLORREF **BACKGROUND_MainMenu, COLORREF **BACKGROUND_Menu, COLORREF **BACKGROUND_Smithy, 
        COLORREF **BACKGROUND_Upgrade_FirstLvl, COLORREF **BACKGROUND_Upgrade_SecondLvl, 
        COLORREF **BACKGROUND_Upgrade_ThirdLvl, COLORREF **BACKGROUND_Map, COLORREF **BACKGROUND_Game, 
        COLORREF **UI_Cloud_Act1, COLORREF **UI_Cloud_Act2, COLORREF **UI_Cloud_Act3, 
        COLORREF **UI_Cloud_Act4, COLORREF **UI_Menu, COLORREF **UI_Smithy_Buying,
        COLORREF **UI_Smithy_SelectUpgrade, COLORREF **UI_Upgrade_Buying, COLORREF **BTN_FirstAct_Action, 
        COLORREF **BTN_FourthAndFifthAct_Action, COLORREF **BTN_Left, COLORREF **BTN_Map, COLORREF **BTN_Right, 
        COLORREF **BTN_SecondAct_Action, COLORREF **BTN_Smithy, COLORREF **BTN_ThirdAct_Action, COLORREF **BTN_Upgrade, 
        COLORREF **BTN_V, COLORREF **BTN_X, COLORREF **OBJECTS_Blacksmith1, COLORREF **OBJECTS_Blacksmith2,
        COLORREF **OBJECTS_Blacksmith3, COLORREF **OBJECTS_Blacksmith4, COLORREF **OBJECTS_FirstHouse,
        COLORREF **OBJECTS_SecondHouse, COLORREF **OBJECTS_ThirdHouse, COLORREF **OBJECTS_Tree_1_1,
        COLORREF **OBJECTS_Tree_1_2, COLORREF **OBJECTS_Tree_1_3, COLORREF **OBJECTS_Tree_2_1,
        COLORREF **OBJECTS_Tree_2_2, COLORREF **OBJECTS_Tree_2_3, COLORREF **OBJECTS_Tree_3_1,
        COLORREF **OBJECTS_Tree_3_2, COLORREF **OBJECTS_Tree_3_3, COLORREF **OBJECTS_Vegetable_1_1,
        COLORREF **OBJECTS_Vegetable_1_2, COLORREF **OBJECTS_Vegetable_1_3, COLORREF **OBJECTS_Vegetable_1_4,
        COLORREF **OBJECTS_Vegetable_2_1, COLORREF **OBJECTS_Vegetable_2_2, COLORREF **OBJECTS_Vegetable_2_3,
        COLORREF **OBJECTS_Vegetable_2_4, COLORREF **OBJECTS_Vegetable_3_1, COLORREF **OBJECTS_Vegetable_3_2, 
        COLORREF **OBJECTS_Vegetable_3_3, COLORREF **OBJECTS_Vegetable_3_4, COLORREF **Collector_0_1_1,
        COLORREF **Collector_0_1_2, COLORREF **Collector_0_1_3, COLORREF **Collector_1_1_1, COLORREF **Collector_1_1_2,
        COLORREF **Collector_1_1_3, COLORREF **Collector_0_2_1, COLORREF **Collector_0_2_2, COLORREF **Collector_0_2_3,
        COLORREF **Collector_1_2_1, COLORREF **Collector_1_2_2, COLORREF **Collector_1_2_3, COLORREF **Woodcutter_0_1_1,
        COLORREF **Woodcutter_0_1_2, COLORREF **Woodcutter_0_1_3, COLORREF **Woodcutter_1_1_1, COLORREF **Woodcutter_1_1_2,
        COLORREF **Woodcutter_1_1_3, COLORREF **Woodcutter_0_2_1, COLORREF **Woodcutter_0_2_2, COLORREF **Woodcutter_0_2_3,
        COLORREF **Woodcutter_1_2_1, COLORREF **Woodcutter_1_2_2, COLORREF **Woodcutter_1_2_3, COLORREF **Archer_0_1_1,
        COLORREF **Archer_0_1_2, COLORREF **Archer_0_1_3, COLORREF **Archer_1_1_1, COLORREF **Archer_1_1_2, COLORREF **Archer_1_1_3,
        COLORREF **Archer_0_2_1, COLORREF **Archer_0_2_2, COLORREF **Archer_0_2_3, COLORREF **Archer_1_2_1, COLORREF **Archer_1_2_2,
        COLORREF **Archer_1_2_3)
    {
        if (GetAsyncKeyState(VK_SPACE))
        {
            if (*Layout == 0)
            {
                if(*BackgroundX1 != 1290)
                {
                    *MapMove = 1;
                    //for(int i=0; i<129; i++)
                    //{
                        *BackgroundX1 = *BackgroundX1+1296;
                        *BackgroundX2 = *BackgroundX2+1296;

                        txBegin();
                        painting(*Layout, *Act, *HouseUpgrade, *TreesUpgrade, *VegetablesUpgrade, *HouseUpgradeSelect, *BackgroundX1, *BackgroundX2, *MenuStage, *MapMove, BlacksmithFrame, collectorArray, woodcutterArray, archerArray, vegetablesArray, treesArray, BACKGROUND_MainMenu, BACKGROUND_Menu, BACKGROUND_Smithy, BACKGROUND_Upgrade_FirstLvl, BACKGROUND_Upgrade_SecondLvl, BACKGROUND_Upgrade_ThirdLvl, BACKGROUND_Map, BACKGROUND_Game, UI_Cloud_Act1, UI_Cloud_Act2, UI_Cloud_Act3, UI_Cloud_Act4, UI_Menu, UI_Smithy_Buying, UI_Smithy_SelectUpgrade, UI_Upgrade_Buying, BTN_FirstAct_Action, BTN_FourthAndFifthAct_Action, BTN_Left,  BTN_Map, BTN_Right, BTN_SecondAct_Action, BTN_Smithy, BTN_ThirdAct_Action, BTN_Upgrade, BTN_V, BTN_X, OBJECTS_Blacksmith1, OBJECTS_Blacksmith2, OBJECTS_Blacksmith3, OBJECTS_Blacksmith4, OBJECTS_FirstHouse, OBJECTS_SecondHouse, OBJECTS_ThirdHouse, OBJECTS_Tree_1_1, OBJECTS_Tree_1_2, OBJECTS_Tree_1_3, OBJECTS_Tree_2_1, OBJECTS_Tree_2_2, OBJECTS_Tree_2_3, OBJECTS_Tree_3_1, OBJECTS_Tree_3_2, OBJECTS_Tree_3_3, OBJECTS_Vegetable_1_1, OBJECTS_Vegetable_1_2, OBJECTS_Vegetable_1_3, OBJECTS_Vegetable_1_4, OBJECTS_Vegetable_2_1, OBJECTS_Vegetable_2_2, OBJECTS_Vegetable_2_3, OBJECTS_Vegetable_2_4, OBJECTS_Vegetable_3_1, OBJECTS_Vegetable_3_2, OBJECTS_Vegetable_3_3, OBJECTS_Vegetable_3_4, Collector_0_1_1, Collector_0_1_2, Collector_0_1_3, Collector_1_1_1, Collector_1_1_2, Collector_1_1_3, Collector_0_2_1, Collector_0_2_2, Collector_0_2_3, Collector_1_2_1, Collector_1_2_2, Collector_1_2_3, Woodcutter_0_1_1, Woodcutter_0_1_2, Woodcutter_0_1_3, Woodcutter_1_1_1, Woodcutter_1_1_2, Woodcutter_1_1_3, Woodcutter_0_2_1, Woodcutter_0_2_2, Woodcutter_0_2_3, Woodcutter_1_2_1, Woodcutter_1_2_2, Woodcutter_1_2_3, Archer_0_1_1, Archer_0_1_2, Archer_0_1_3, Archer_1_1_1, Archer_1_1_2, Archer_1_1_3, Archer_0_2_1, Archer_0_2_2,  Archer_0_2_3, Archer_1_2_1, Archer_1_2_2, Archer_1_2_3);
                        txEnd();
                    //}
                    Sleep(100);
                    *MapMove = 0;
                }
            }
        }
        
        if(NewGame.IsClicked(*Layout))
        {
            if(*BackgroundX1 == 1290)
            {
                txSetFillColor(RGB(0, 0, 0));
                txSetColor(RGB(0, 0, 0));
                txClear();
                *BackgroundX1 = 1296; 
                *BackgroundX2 = 2592;
                Sleep(500);
                *Layout = 1;
                *MenuStage = 1;
                txSetFillColor(RGB(255, 255, 255));
                txSetColor(RGB(255, 255, 255));
            }
        }

        if(GetAsyncKeyState('Q'))
        {
            printf("%i", *Layout);
        }
    }

    
