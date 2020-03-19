    //Библиотеки
    #include "Resources\\TXLib.h"
    #include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
    #define LEN 100

    //Классы
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

    //Name_Rotate_Animation_Frame
    //Collector_1_1_1
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

    void Painting(
        int Layout, int Act, int HouseUpgrade, int TreesUpgrade, 
        int VegetablesUpgrade, int HouseUpgradeSelect, 
        int BackgroundX1, int BackgroundX2, int MenuStage, int MapMove, int *BlacksmithFrame,
        Collector *collectorArray, Woodcutter *woodcutterArray, Archer *archerArray, 
        Vegetables *vegetablesArray, Trees *treesArray,

        HDC BACKGROUNDMainMenu, HDC BACKGROUNDMenu, HDC UIMenu, 
        HDC BTNLeft, HDC BTNRight, HDC BTNSmithy, HDC BTNUpgrade, HDC BTNMap,
        HDC BACKGROUNDSmithy, HDC Blacksmith1, HDC Blacksmith2, HDC Blacksmith3, HDC Blacksmith4,
        HDC BACKGROUNDUpgradeFirstLvl, HDC BACKGROUNDUpgradeSecondLvl, 
        HDC BACKGROUNDUpgradeThirdLvl, HDC BACKGROUNDUpgradeBuying, HDC BACKGROUNDMap, 
        HDC UICloudAct1, HDC UICloudAct2, HDC UICloudAct3, HDC UICloudAct4, HDC BTNV, HDC BTNX,
        HDC BACKGROUNDGame, HDC BACKGROUNDFirstHouse, HDC BACKGROUNDSecondHouse, HDC BACKGROUNDThirdHouse, 
        HDC BTNFirstActAction, HDC BTNSecondActAction, HDC BTNThirdActAction, HDC BTNFourthAndFifthActAction,
        HDC Vegetable11, HDC Vegetable12, HDC Vegetable13, HDC Vegetable14, HDC Vegetable21, HDC Vegetable22, 
        HDC Vegetable23, HDC Vegetable24, HDC Vegetable31, HDC Vegetable32, HDC Vegetable33, HDC Vegetable34,
        HDC Tree11, HDC Tree12, HDC Tree13, HDC Tree21, HDC Tree22, HDC Tree23, HDC Tree31, HDC Tree32, HDC Tree33, 
        HDC Collector011, HDC Collector012, HDC Collector013, HDC Collector111, HDC Collector112, HDC Collector113, 
        HDC Collector021, HDC Collector022, HDC Collector023, HDC Collector121, HDC Collector122, HDC Collector123,
        HDC Woodcutter011, HDC Woodcutter012, HDC Woodcutter013, HDC Woodcutter111, HDC Woodcutter112, HDC Woodcutter113, 
        HDC Woodcutter021, HDC Woodcutter022, HDC Woodcutter023, HDC Woodcutter121, HDC Woodcutter122, HDC Woodcutter123, 
        HDC Archer011, HDC Archer012, HDC Archer013, HDC Archer111, HDC Archer112, HDC Archer113, HDC Archer021, 
        HDC Archer022, HDC Archer023, HDC Archer121, HDC Archer122, HDC Archer123);

    void KeyboardControls(
        int *Layout, int *Act, int *HouseUpgrade, int *TreesUpgrade, int *VegetablesUpgrade,
        int *HouseUpgradeSelect, int *BackgroundX1, int *BackgroundX2, int *MenuStage, int *MapMove,
        int *BlacksmithFrame,
        Collector *collectorArray, Woodcutter *woodcutterArray, Archer *archerArray, 
        Vegetables *vegetablesArray, Trees *treesArray,

        Button NewGame, Button Left, Button Right, Button Smithy, Button Upgrade, 
        Button Map, Button SmithyUpgrade11, Button SmithyUpgrade12, Button SmithyUpgrade13, 
        Button SmithyUpgrade21, Button SmithyUpgrade22, Button SmithyUpgrade23, Button SmithyUpgrade31, 
        Button SmithyUpgrade32, Button SmithyUpgrade33, Button SmithyUpgrade41, Button SmithyUpgrade42, 
        Button SmithyUpgrade43, Button SmithyUpgrade51, Button SmithyUpgrade52, Button SmithyUpgrade53, 
        Button SmithyBack, Button Upgr, Button UpgradeFirstLvl, Button UpgradeSecondLvl, 
        Button UpgradeThirdLvl, Button UpgradeBack, Button VFirstAct,
        Button XFirstAct, Button VSecondAct, Button XSecondAct, Button VThirdAct, 
        Button XThirdAct, Button VFourthAct, Button XFourthAct, Button VFifthAct, 
        Button XFifthAct, Button MapBack, Button GameFirstAction, Button GameSecondAction, 
        Button GameThirdAction, Button GameFourthAction, Button GameFifthAction, Button GameSixthAction,

        HDC BACKGROUNDMainMenu, HDC BACKGROUNDMenu, HDC UIMenu, 
        HDC BTNLeft, HDC BTNRight, HDC BTNSmithy, HDC BTNUpgrade, HDC BTNMap,
        HDC BACKGROUNDSmithy, HDC Blacksmith1, HDC Blacksmith2, HDC Blacksmith3, HDC Blacksmith4,
        HDC BACKGROUNDUpgradeFirstLvl, HDC BACKGROUNDUpgradeSecondLvl, 
        HDC BACKGROUNDUpgradeThirdLvl, HDC BACKGROUNDUpgradeBuying, HDC BACKGROUNDMap, 
        HDC UICloudAct1, HDC UICloudAct2, HDC UICloudAct3, HDC UICloudAct4, HDC BTNV, HDC BTNX,
        HDC BACKGROUNDGame, HDC BACKGROUNDFirstHouse, HDC BACKGROUNDSecondHouse, HDC BACKGROUNDThirdHouse, 
        HDC BTNFirstActAction, HDC BTNSecondActAction, HDC BTNThirdActAction, HDC BTNFourthAndFifthActAction,
        HDC Vegetable11, HDC Vegetable12, HDC Vegetable13, HDC Vegetable14, HDC Vegetable21, HDC Vegetable22, 
        HDC Vegetable23, HDC Vegetable24, HDC Vegetable31, HDC Vegetable32, HDC Vegetable33, HDC Vegetable34,
        HDC Tree11, HDC Tree12, HDC Tree13, HDC Tree21, HDC Tree22, HDC Tree23, HDC Tree31, HDC Tree32, HDC Tree33, 
        HDC Collector011, HDC Collector012, HDC Collector013, HDC Collector111, HDC Collector112, HDC Collector113, 
        HDC Collector021, HDC Collector022, HDC Collector023, HDC Collector121, HDC Collector122, HDC Collector123,
        HDC Woodcutter011, HDC Woodcutter012, HDC Woodcutter013, HDC Woodcutter111, HDC Woodcutter112, HDC Woodcutter113, 
        HDC Woodcutter021, HDC Woodcutter022, HDC Woodcutter023, HDC Woodcutter121, HDC Woodcutter122, HDC Woodcutter123, 
        HDC Archer011, HDC Archer012, HDC Archer013, HDC Archer111, HDC Archer112, HDC Archer113, HDC Archer021, 
        HDC Archer022, HDC Archer023, HDC Archer121, HDC Archer122, HDC Archer123);
    void Save(int Act, int HouseUpgrade, int TreesUpgrade, int VegetablesUpgrade);
    void Load(int *Act, int *HouseUpgrade, int *TreesUpgrade, int *VegetablesUpgrade);
    
    int main()
    {
        txCreateWindow(1296, 720);
        txSetFillColor(TX_WHITE);
        txFloodFill(0, 0, FLOODFILLBORDER);

        //Переменные
        int Layout = 0;
        int Act = 1;
        int HouseUpgrade = 0; 
        int TreesUpgrade = 1;
        int VegetablesUpgrade = 1;
        int HouseUpgradeSelect = 1;
        int BackgroundX1 = 0;
        int BackgroundX2 = 1296;
        int MenuStage = 1;
        int MapMove = 0;
        int Time = 0;
        int BlacksmithFrame = 1;

        Collector collectorArray[6];
        Woodcutter woodcutterArray[3];
        Archer archerArray[3];

        Vegetables vegetablesArray[6]; 
        vegetablesArray[0].SetCoordinate(288, 200);
        vegetablesArray[1].SetCoordinate(335, 184);
        vegetablesArray[2].SetCoordinate(380, 195);
        vegetablesArray[3].SetCoordinate(425, 179);
        vegetablesArray[4].SetCoordinate(470, 190);
        vegetablesArray[5].SetCoordinate(520, 200);

        Trees treesArray[3];
        treesArray[0].SetCoordinate(596, 91);
        treesArray[1].SetCoordinate(723, 91);
        treesArray[2].SetCoordinate(849, 91);
        
        //Загрузка картинок
        HDC BACKGROUNDMainMenu = txLoadImage("Resources\\Images\\BACKGROUND_MainMenu.bmp");

        HDC BACKGROUNDMenu = txLoadImage("Resources\\Images\\BACKGROUND_Menu.bmp");
        HDC UIMenu = txLoadImage("Resources\\Images\\UI_Menu.bmp");
        HDC BTNLeft = txLoadImage("Resources\\Images\\BTN_Left.bmp");
        HDC BTNRight = txLoadImage("Resources\\Images\\BTN_Right.bmp");
        HDC BTNSmithy = txLoadImage("Resources\\Images\\BTN_Smithy.bmp");   
        HDC BTNUpgrade = txLoadImage("Resources\\Images\\BTN_Upgrade.bmp");
        HDC BTNMap = txLoadImage("Resources\\Images\\BTN_Map.bmp");

        HDC BACKGROUNDSmithy = txLoadImage("Resources\\Images\\BACKGROUND_Smithy.bmp");
        HDC Blacksmith1 = txLoadImage("Resources\\Images\\Blacksmith1.bmp");
        HDC Blacksmith2 = txLoadImage("Resources\\Images\\Blacksmith2.bmp");
        HDC Blacksmith3 = txLoadImage("Resources\\Images\\Blacksmith3.bmp");
        HDC Blacksmith4 = txLoadImage("Resources\\Images\\Blacksmith4.bmp");

        HDC BACKGROUNDUpgradeFirstLvl = txLoadImage("Resources\\Images\\BACKGROUND_Upgrade_FirstLvl.bmp");
        HDC BACKGROUNDUpgradeSecondLvl = txLoadImage("Resources\\Images\\BACKGROUND_Upgrade_SecondLvl.bmp");
        HDC BACKGROUNDUpgradeThirdLvl = txLoadImage("Resources\\Images\\BACKGROUND_Upgrade_ThirdLvl.bmp");
        HDC BACKGROUNDUpgradeBuying = txLoadImage("Resources\\Images\\BACKGROUND_Upgrade_Buying.bmp");

        HDC BACKGROUNDMap = txLoadImage("Resources\\Images\\BACKGROUND_Map.bmp"); 
        HDC UICloudAct1 = txLoadImage("Resources\\Images\\UI_Cloud_Act1.bmp");
        HDC UICloudAct2 = txLoadImage("Resources\\Images\\UI_Cloud_Act2.bmp");
        HDC UICloudAct3 = txLoadImage("Resources\\Images\\UI_Cloud_Act3.bmp");
        HDC UICloudAct4 = txLoadImage("Resources\\Images\\UI_Cloud_Act4.bmp");
        HDC BTNV = txLoadImage("Resources\\Images\\BTN_V.bmp");
        HDC BTNX = txLoadImage("Resources\\Images\\BTN_X.bmp");
        
        HDC BACKGROUNDGame = txLoadImage("Resources\\Images\\BACKGROUND_Game.bmp"); 
        HDC BACKGROUNDFirstHouse = txLoadImage("Resources\\Images\\BACKGROUND_FirstHouse.bmp");
        HDC BACKGROUNDSecondHouse = txLoadImage("Resources\\Images\\BACKGROUND_SecondHouse.bmp");
        HDC BACKGROUNDThirdHouse = txLoadImage("Resources\\Images\\BACKGROUND_ThirdHouse.bmp");
        HDC BTNFirstActAction = txLoadImage("Resources\\Images\\BTN_FirstAct_Action.bmp");
        HDC BTNSecondActAction = txLoadImage("Resources\\Images\\BTN_SecondAct_Action.bmp");
        HDC BTNThirdActAction = txLoadImage("Resources\\Images\\BTN_ThirdAct_Action.bmp");
        HDC BTNFourthAndFifthActAction = txLoadImage("Resources\\Images\\BTN_FourthAndFifthAct_Action.bmp");

        HDC Vegetable11 = txLoadImage("Resources\\Images\\Plants\\Vegetables\\Vegetable_1_1.bmp");
        HDC Vegetable12 = txLoadImage("Resources\\Images\\Plants\\Vegetables\\Vegetable_1_2.bmp");
        HDC Vegetable13 = txLoadImage("Resources\\Images\\Plants\\Vegetables\\Vegetable_1_3.bmp");
        HDC Vegetable14 = txLoadImage("Resources\\Images\\Plants\\Vegetables\\Vegetable_1_4.bmp");
        HDC Vegetable21 = txLoadImage("Resources\\Images\\Plants\\Vegetables\\Vegetable_2_1.bmp");
        HDC Vegetable22 = txLoadImage("Resources\\Images\\Plants\\Vegetables\\Vegetable_2_2.bmp");
        HDC Vegetable23 = txLoadImage("Resources\\Images\\Plants\\Vegetables\\Vegetable_2_3.bmp");
        HDC Vegetable24 = txLoadImage("Resources\\Images\\Plants\\Vegetables\\Vegetable_2_4.bmp");
        HDC Vegetable31 = txLoadImage("Resources\\Images\\Plants\\Vegetables\\Vegetable_3_1.bmp");
        HDC Vegetable32 = txLoadImage("Resources\\Images\\Plants\\Vegetables\\Vegetable_3_2.bmp");
        HDC Vegetable33 = txLoadImage("Resources\\Images\\Plants\\Vegetables\\Vegetable_3_3.bmp");
        HDC Vegetable34 = txLoadImage("Resources\\Images\\Plants\\Vegetables\\Vegetable_3_4.bmp");

        HDC Tree11 = txLoadImage("Resources\\Images\\Plants\\Trees\\ree_1_1.bmp");
        HDC Tree12 = txLoadImage("Resources\\Images\\Plants\\Trees\\Tree_1_2.bmp");
        HDC Tree13 = txLoadImage("Resources\\Images\\Plants\\Trees\\Tree_1_3.bmp");
        HDC Tree21 = txLoadImage("Resources\\Images\\Plants\\Trees\\Tree_2_1.bmp");
        HDC Tree22 = txLoadImage("Resources\\Images\\Plants\\Trees\\Tree_2_2.bmp");
        HDC Tree23 = txLoadImage("Resources\\Images\\Plants\\Trees\\Tree_2_3.bmp");
        HDC Tree31 = txLoadImage("Resources\\Images\\Plants\\Trees\\Tree_3_1.bmp");
        HDC Tree32 = txLoadImage("Resources\\Images\\Plants\\Trees\\Tree_3_2.bmp");
        HDC Tree33 = txLoadImage("Resources\\Images\\Plants\\Trees\\Tree_3_3.bmp");

        //Герои
        HDC Collector011 = txLoadImage("Resources\\Images\\Hero\\Collector\\Collector_0_1_1.bmp"); 
        HDC Collector012 = txLoadImage("Resources\\Images\\Hero\\Collector\\Collector_0_1_2.bmp"); 
        HDC Collector013 = txLoadImage("Resources\\Images\\Hero\\Collector\\Collector_0_1_3.bmp");
        HDC Collector111 = txLoadImage("Resources\\Images\\Hero\\Collector\\Collector_1_1_1.bmp");
        HDC Collector112 = txLoadImage("Resources\\Images\\Hero\\Collector\\Collector_1_1_2.bmp");
        HDC Collector113 = txLoadImage("Resources\\Images\\Hero\\Collector\\Collector_1_1_3.bmp");

        HDC Collector021 = txLoadImage("Resources\\Images\\Hero\\Collector\\Collector_0_2_1.bmp");
        HDC Collector022 = txLoadImage("Resources\\Images\\Hero\\Collector\\Collector_0_2_2.bmp");
        HDC Collector023 = txLoadImage("Resources\\Images\\Hero\\Collector\\Collector_0_2_3.bmp");
        HDC Collector121 = txLoadImage("Resources\\Images\\Hero\\Collector\\Collector_1_2_1.bmp");
        HDC Collector122 = txLoadImage("Resources\\Images\\Hero\\Collector\\Collector_1_2_2.bmp");
        HDC Collector123 = txLoadImage("Resources\\Images\\Hero\\Collector\\Collector_1_2_3.bmp");

        HDC Woodcutter011 = txLoadImage("Resources\\Images\\Hero\\Woodcutter\\Woodcutter_0_1_1.bmp"); 
        HDC Woodcutter012 = txLoadImage("Resources\\Images\\Hero\\Woodcutter\\Woodcutter_0_1_2.bmp"); 
        HDC Woodcutter013 = txLoadImage("Resources\\Images\\Hero\\Woodcutter\\Woodcutter_0_1_3.bmp");
        HDC Woodcutter111 = txLoadImage("Resources\\Images\\Hero\\Woodcutter\\Woodcutter_1_1_1.bmp");
        HDC Woodcutter112 = txLoadImage("Resources\\Images\\Hero\\Woodcutter\\Woodcutter_1_1_2.bmp");
        HDC Woodcutter113 = txLoadImage("Resources\\Images\\Hero\\Woodcutter\\Woodcutter_1_1_3.bmp");

        HDC Woodcutter021 = txLoadImage("Resources\\Images\\Hero\\Woodcutter\\Woodcutter_0_2_1.bmp");
        HDC Woodcutter022 = txLoadImage("Resources\\Images\\Hero\\Woodcutter\\Woodcutter_0_2_2.bmp");
        HDC Woodcutter023 = txLoadImage("Resources\\Images\\Hero\\Woodcutter\\Woodcutter_0_2_3.bmp");
        HDC Woodcutter121 = txLoadImage("Resources\\Images\\Hero\\Woodcutter\\Woodcutter_1_2_1.bmp");
        HDC Woodcutter122 = txLoadImage("Resources\\Images\\Hero\\Woodcutter\\Woodcutter_1_2_2.bmp");
        HDC Woodcutter123 = txLoadImage("Resources\\Images\\Hero\\Woodcutter\\Woodcutter_1_2_3.bmp");

        HDC Archer011 = txLoadImage("Resources\\Images\\Hero\\Archer\\Archer_0_1_1.bmp"); 
        HDC Archer012 = txLoadImage("Resources\\Images\\Hero\\Archer\\Archer_0_1_2.bmp"); 
        HDC Archer013 = txLoadImage("Resources\\Images\\Hero\\Archer\\Archer_0_1_3.bmp");
        HDC Archer111 = txLoadImage("Resources\\Images\\Hero\\Archer\\Archer_1_1_1.bmp");
        HDC Archer112 = txLoadImage("Resources\\Images\\Hero\\Archer\\Archer_1_1_2.bmp");
        HDC Archer113 = txLoadImage("Resources\\Images\\Hero\\Archer\\Archer_1_1_3.bmp");

        HDC Archer021 = txLoadImage("Resources\\Images\\Hero\\Archer\\Archer_0_2_1.bmp");
        HDC Archer022 = txLoadImage("Resources\\Images\\Hero\\Archer\\Archer_0_2_2.bmp");
        HDC Archer023 = txLoadImage("Resources\\Images\\Hero\\Archer\\Archer_0_2_3.bmp");
        HDC Archer121 = txLoadImage("Resources\\Images\\Hero\\Archer\\Archer_1_2_1.bmp");
        HDC Archer122 = txLoadImage("Resources\\Images\\Hero\\Archer\\Archer_1_2_2.bmp");
        HDC Archer123 = txLoadImage("Resources\\Images\\Hero\\Archer\\Archer_1_2_3.bmp");

        //Кнопки
        Button NewGame(431, 306, 861, 414, 0); 
        Button Left(36, 324, 80, 395, 1); 
        Button Right(1225, 324, 1269, 395, 1);
        Button Smithy(941, 0, 1036, 95, 1);
        Button Upgrade(941, 0, 1036, 95, 1);
        Button Map(941, 0, 1036, 95, 1);

        Button SmithyUpgrade11(414, 69, 509, 164, 2);
        Button SmithyUpgrade12(533, 69, 628, 164, 2);
        Button SmithyUpgrade13(652, 69, 747, 164, 2);
        Button SmithyUpgrade21(414, 190, 509, 285, 2);
        Button SmithyUpgrade22(533, 190, 628, 285, 2);
        Button SmithyUpgrade23(652, 190, 747, 285, 2);
        Button SmithyUpgrade31(414, 311, 509, 406, 2);
        Button SmithyUpgrade32(533, 311, 628, 406, 2);
        Button SmithyUpgrade33(652, 311, 747, 406, 2);
        Button SmithyUpgrade41(414, 432, 509, 406, 2);
        Button SmithyUpgrade42(533, 432, 628, 406, 2);
        Button SmithyUpgrade43(652, 432, 747, 406, 2);
        Button SmithyUpgrade51(414, 432, 509, 406, 2);
        Button SmithyUpgrade52(533, 432, 628, 406, 2);
        Button SmithyUpgrade53(652, 432, 747, 406, 2);
        Button SmithyBack(944, 625, 1050, 657, 2);


        Button Upgr(431, 557, 646, 611, 3);
        Button UpgradeFirstLvl(66, 171, 261, 236, 3); 
        Button UpgradeSecondLvl(63, 288, 270, 403, 3);
        Button UpgradeThirdLvl(63, 442, 267, 513, 3);
        Button UpgradeBack(115, 613, 221, 645, 3);

        Button VFirstAct(265, 488, 375, 567, 4);
        Button XFirstAct(265, 479, 375, 578, 4);
        Button VSecondAct(564, 388, 672, 467, 4);
        Button XSecondAct(562, 379, 672, 478, 4);
        Button VThirdAct(320, 252, 430, 331, 4);
        Button XThirdAct(320, 243, 430, 342, 4);
        Button VFourthAct(920, 476, 1030, 555, 4);
        Button XFourthAct(920, 467, 1030, 566, 4);
        Button VFifthAct(879, 229, 989, 308, 4);
        Button XFifthAct(879, 220, 989, 319, 4);
        Button MapBack(534, 610, 759, 703, 4);

        Button GameFirstAction(369, 630, 458, 719, 5);
        Button GameSecondAction(462, 630, 551, 719, 5);
        Button GameThirdAction(555, 630, 644, 719, 5);
        Button GameFourthAction(651, 630, 740, 719, 5);
        Button GameFifthAction(744, 630, 833, 719, 5);
        Button GameSixthAction(837, 630, 926, 719, 5);

        Load(&Act, &HouseUpgrade, &TreesUpgrade, &VegetablesUpgrade);
        
        srand(time(NULL));
        while(TRUE)
        {
            Time++;
            if(Layout == 1)
            {
                if(BackgroundX1 == 0)
                {
                    MenuStage = 0;
                }
                if(BackgroundX1 == 1290)
                {
                    MenuStage = 1;
                }
                if(BackgroundX1 == 2580)
                {
                    MenuStage = 2;
                }
            }

            txBegin();
                Painting(Layout, Act, HouseUpgrade, TreesUpgrade, VegetablesUpgrade, HouseUpgradeSelect, BackgroundX1, BackgroundX2, MenuStage, MapMove, &BlacksmithFrame, collectorArray, woodcutterArray, archerArray, vegetablesArray, treesArray, BACKGROUNDMainMenu, BACKGROUNDMenu, UIMenu, BTNLeft, BTNRight, BTNSmithy, BTNUpgrade, BTNMap, BACKGROUNDSmithy, Blacksmith1, Blacksmith2, Blacksmith3, Blacksmith4, BACKGROUNDUpgradeFirstLvl, BACKGROUNDUpgradeSecondLvl, BACKGROUNDUpgradeThirdLvl, BACKGROUNDUpgradeBuying, BACKGROUNDMap, UICloudAct1, UICloudAct2, UICloudAct3, UICloudAct4, BTNV, BTNX,BACKGROUNDGame, BACKGROUNDFirstHouse, BACKGROUNDSecondHouse, BACKGROUNDThirdHouse, BTNFirstActAction, BTNSecondActAction, BTNThirdActAction, BTNFourthAndFifthActAction, Vegetable11, Vegetable12, Vegetable13, Vegetable14, Vegetable21, Vegetable22, Vegetable23, Vegetable24, Vegetable31, Vegetable32, Vegetable33, Vegetable34, Tree11, Tree12, Tree13, Tree21, Tree22, Tree23, Tree31, Tree32, Tree33, Collector011, Collector012, Collector013, Collector111, Collector112, Collector113, Collector021, Collector022, Collector023, Collector121, Collector122, Collector123, Woodcutter011, Woodcutter012, Woodcutter013, Woodcutter111, Woodcutter112, Woodcutter113, Woodcutter021, Woodcutter022, Woodcutter023, Woodcutter121, Woodcutter122, Woodcutter123, Archer011, Archer012, Archer013, Archer111, Archer112, Archer113, Archer021, Archer022, Archer023, Archer121, Archer122, Archer123);
            txEnd();

            if(MapMove == 0)
            {
                KeyboardControls(&Layout, &Act, &HouseUpgrade, &TreesUpgrade, &VegetablesUpgrade, &HouseUpgradeSelect, &BackgroundX1, &BackgroundX2, &MenuStage, &MapMove, &BlacksmithFrame, collectorArray, woodcutterArray, archerArray, vegetablesArray, treesArray, NewGame, Left, Right, Smithy, Upgrade, Map, SmithyUpgrade11, SmithyUpgrade12, SmithyUpgrade13, SmithyUpgrade21, SmithyUpgrade22, SmithyUpgrade23, SmithyUpgrade31, SmithyUpgrade32, SmithyUpgrade33, SmithyUpgrade41, SmithyUpgrade42, SmithyUpgrade43, SmithyUpgrade51, SmithyUpgrade52, SmithyUpgrade53, SmithyBack, Upgr, UpgradeFirstLvl, UpgradeSecondLvl, UpgradeThirdLvl, UpgradeBack, VFirstAct, XFirstAct, VSecondAct, XSecondAct, VThirdAct, XThirdAct, VFourthAct, XFourthAct, VFifthAct, XFifthAct, MapBack, GameFirstAction, GameSecondAction, GameThirdAction, GameFourthAction, GameFifthAction, GameSixthAction, BACKGROUNDMainMenu, BACKGROUNDMenu, UIMenu, BTNLeft, BTNRight, BTNSmithy, BTNUpgrade, BTNMap, BACKGROUNDSmithy, Blacksmith1, Blacksmith2, Blacksmith3, Blacksmith4, BACKGROUNDUpgradeFirstLvl, BACKGROUNDUpgradeSecondLvl, BACKGROUNDUpgradeThirdLvl, BACKGROUNDUpgradeBuying, BACKGROUNDMap, UICloudAct1, UICloudAct2, UICloudAct3, UICloudAct4, BTNV, BTNX,BACKGROUNDGame, BACKGROUNDFirstHouse, BACKGROUNDSecondHouse, BACKGROUNDThirdHouse, BTNFirstActAction, BTNSecondActAction, BTNThirdActAction, BTNFourthAndFifthActAction, Vegetable11, Vegetable12, Vegetable13, Vegetable14, Vegetable21, Vegetable22, Vegetable23, Vegetable24, Vegetable31, Vegetable32, Vegetable33, Vegetable34, Tree11, Tree12, Tree13, Tree21, Tree22, Tree23, Tree31, Tree32, Tree33, Collector011, Collector012, Collector013, Collector111, Collector112, Collector113, Collector021, Collector022, Collector023, Collector121, Collector122, Collector123, Woodcutter011, Woodcutter012, Woodcutter013, Woodcutter111, Woodcutter112, Woodcutter113, Woodcutter021, Woodcutter022, Woodcutter023, Woodcutter121, Woodcutter122, Woodcutter123, Archer011, Archer012, Archer013, Archer111, Archer112, Archer113, Archer021, Archer022, Archer023, Archer121, Archer122, Archer123);
            }

            if(Layout == 5)
            {
                if(Time%5 == 0)
                {
                    if(vegetablesArray[0].GetFrame() == 4)
                    {
                        if(!vegetablesArray[0].IsCollect())
                        {
                            for(int i = 0; i<7; i++)
                            {
                                if(collectorArray[i].Collect() == 1)
                                {
                                    if(collectorArray[i].GetState() == 1)
                                    {
                                        collectorArray[i].SetAnimation(2);
                                        printf("%i", 12);
                                    }
                                }
                            }
                        }
                    }

                    for(int i = 0; i<7; i++)
                    {
                        if(collectorArray[i].GetAnimation() != 2)
                        {
                            collectorArray[i].Frames(collectorArray[i].GetFrame());
                            collectorArray[i].SetCoordinate(collectorArray[i].GetX()+7, 194);
                        }
                    }
                    for(int i = 0; i<4; i++)
                    {
                        woodcutterArray[i].Frames(woodcutterArray[i].GetFrame());
                        woodcutterArray[i].SetCoordinate(woodcutterArray[i].GetX()+7, 194);
                    }
                    for(int i = 0; i<4; i++)
                    {
                        archerArray[i].Frames(archerArray[i].GetFrame());
                        archerArray[i].SetCoordinate(archerArray[i].GetX()+7, 530);
                    }
                }
                
                if(Time%20 == 0)
                {
                    for(int i = 0; i<7; i++)
                    {
                        if(rand()%3+1 == 1)
                        {
                            vegetablesArray[i].Frames(vegetablesArray[i].GetFrame());
                        }
                    }
                }
            }
            Sleep(1);
        }
        
    }

    void Painting(int Layout, int Act, int HouseUpgrade, int TreesUpgrade, int VegetablesUpgrade, int HouseUpgradeSelect, int BackgroundX1, int BackgroundX2, int MenuStage, int MapMove, int *BlacksmithFrame, Collector *collectorArray, Woodcutter *woodcutterArray, Archer *archerArray, Vegetables *vegetablesArray, Trees *treesArray, HDC BACKGROUNDMainMenu, HDC BACKGROUNDMenu, HDC UIMenu, HDC BTNLeft, HDC BTNRight, HDC BTNSmithy, HDC BTNUpgrade, HDC BTNMap, HDC BACKGROUNDSmithy, HDC Blacksmith1, HDC Blacksmith2, HDC Blacksmith3, HDC Blacksmith4, HDC BACKGROUNDUpgradeFirstLvl, HDC BACKGROUNDUpgradeSecondLvl, HDC BACKGROUNDUpgradeThirdLvl, HDC BACKGROUNDUpgradeBuying, HDC BACKGROUNDMap, HDC UICloudAct1, HDC UICloudAct2, HDC UICloudAct3, HDC UICloudAct4, HDC BTNV, HDC BTNX, HDC BACKGROUNDGame, HDC BACKGROUNDFirstHouse, HDC BACKGROUNDSecondHouse, HDC BACKGROUNDThirdHouse, HDC BTNFirstActAction, HDC BTNSecondActAction, HDC BTNThirdActAction, HDC BTNFourthAndFifthActAction, HDC Vegetable11, HDC Vegetable12, HDC Vegetable13, HDC Vegetable14, HDC Vegetable21, HDC Vegetable22, HDC Vegetable23, HDC Vegetable24, HDC Vegetable31, HDC Vegetable32, HDC Vegetable33, HDC Vegetable34, HDC Tree11, HDC Tree12, HDC Tree13, HDC Tree21, HDC Tree22, HDC Tree23, HDC Tree31, HDC Tree32, HDC Tree33, HDC Collector011, HDC Collector012, HDC Collector013, HDC Collector111, HDC Collector112, HDC Collector113, HDC Collector021, HDC Collector022, HDC Collector023, HDC Collector121, HDC Collector122, HDC Collector123, HDC Woodcutter011, HDC Woodcutter012, HDC Woodcutter013, HDC Woodcutter111, HDC Woodcutter112, HDC Woodcutter113, HDC Woodcutter021, HDC Woodcutter022, HDC Woodcutter023, HDC Woodcutter121, HDC Woodcutter122, HDC Woodcutter123, HDC Archer011, HDC Archer012, HDC Archer013, HDC Archer111, HDC Archer112, HDC Archer113, HDC Archer021, HDC Archer022, HDC Archer023, HDC Archer121, HDC Archer122, HDC Archer123)
    {
        //vegetablesArray[0].SetCoordinate(288, 200);
        txSetFillColor(TX_WHITE);
        txClear();
        if(Layout == 0)
        {
            txBitBlt(txDC(), 0, 0, BackgroundX2, 720, BACKGROUNDMainMenu, BackgroundX1, 0);
        }

        if(Layout == 1)
        {
            txBitBlt(txDC(), 0, 0, BackgroundX2, 720, BACKGROUNDMenu, BackgroundX1, 0);

            if(MapMove != 1)
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
            }
        }

        if(Layout == 2)
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
        }
    }
 
    void KeyboardControls(int *Layout, int *Act, int *HouseUpgrade, int *TreesUpgrade, int *VegetablesUpgrade, int *HouseUpgradeSelect, int *BackgroundX1, int *BackgroundX2, int *MenuStage, int *MapMove, int *BlacksmithFrame, Collector *collectorArray, Woodcutter *woodcutterArray, Archer *archerArray, Vegetables *vegetablesArray, Trees *treesArray, Button NewGame, Button Left, Button Right, Button Smithy, Button Upgrade, Button Map, Button SmithyUpgrade11, Button SmithyUpgrade12, Button SmithyUpgrade13, Button SmithyUpgrade21, Button SmithyUpgrade22, Button SmithyUpgrade23, Button SmithyUpgrade31, Button SmithyUpgrade32, Button SmithyUpgrade33, Button SmithyUpgrade41, Button SmithyUpgrade42, Button SmithyUpgrade43, Button SmithyUpgrade51, Button SmithyUpgrade52, Button SmithyUpgrade53, Button SmithyBack, Button Upgr, Button UpgradeFirstLvl, Button UpgradeSecondLvl, Button UpgradeThirdLvl, Button UpgradeBack, Button VFirstAct, Button XFirstAct, Button VSecondAct, Button XSecondAct, Button VThirdAct, Button XThirdAct, Button VFourthAct, Button XFourthAct, Button VFifthAct, Button XFifthAct, Button MapBack, Button GameFirstAction, Button GameSecondAction, Button GameThirdAction, Button GameFourthAction, Button GameFifthAction, Button GameSixthAction, HDC BACKGROUNDMainMenu, HDC BACKGROUNDMenu, HDC UIMenu, HDC BTNLeft, HDC BTNRight, HDC BTNSmithy, HDC BTNUpgrade, HDC BTNMap, HDC BACKGROUNDSmithy, HDC Blacksmith1, HDC Blacksmith2, HDC Blacksmith3, HDC Blacksmith4, HDC BACKGROUNDUpgradeFirstLvl, HDC BACKGROUNDUpgradeSecondLvl, HDC BACKGROUNDUpgradeThirdLvl, HDC BACKGROUNDUpgradeBuying, HDC BACKGROUNDMap, HDC UICloudAct1, HDC UICloudAct2, HDC UICloudAct3, HDC UICloudAct4, HDC BTNV, HDC BTNX, HDC BACKGROUNDGame, HDC BACKGROUNDFirstHouse, HDC BACKGROUNDSecondHouse, HDC BACKGROUNDThirdHouse, HDC BTNFirstActAction, HDC BTNSecondActAction, HDC BTNThirdActAction, HDC BTNFourthAndFifthActAction, HDC Vegetable11, HDC Vegetable12, HDC Vegetable13, HDC Vegetable14, HDC Vegetable21, HDC Vegetable22, HDC Vegetable23, HDC Vegetable24, HDC Vegetable31, HDC Vegetable32, HDC Vegetable33, HDC Vegetable34, HDC Tree11, HDC Tree12, HDC Tree13, HDC Tree21, HDC Tree22, HDC Tree23, HDC Tree31, HDC Tree32, HDC Tree33, HDC Collector011, HDC Collector012, HDC Collector013, HDC Collector111, HDC Collector112, HDC Collector113, HDC Collector021, HDC Collector022, HDC Collector023, HDC Collector121, HDC Collector122, HDC Collector123, HDC Woodcutter011, HDC Woodcutter012, HDC Woodcutter013, HDC Woodcutter111, HDC Woodcutter112, HDC Woodcutter113, HDC Woodcutter021, HDC Woodcutter022, HDC Woodcutter023, HDC Woodcutter121, HDC Woodcutter122, HDC Woodcutter123, HDC Archer011, HDC Archer012, HDC Archer013, HDC Archer111, HDC Archer112, HDC Archer113, HDC Archer021, HDC Archer022, HDC Archer023, HDC Archer121, HDC Archer122, HDC Archer123)
    {
        if (GetAsyncKeyState(VK_SPACE))
        {
            if (*Layout == 0)
            {
                if(*BackgroundX1 != 1290)
                {
                    *MapMove = 1;
                    for(int i=0; i<129; i++)
                    {
                        *BackgroundX1 = *BackgroundX1+10;
                        *BackgroundX2 = *BackgroundX2+10;

                        txBegin();
                        Painting(*Layout, *Act, *HouseUpgrade, *TreesUpgrade, *VegetablesUpgrade, *HouseUpgradeSelect, *BackgroundX1, *BackgroundX2, *MenuStage, *MapMove, BlacksmithFrame, collectorArray, woodcutterArray, archerArray, vegetablesArray, treesArray, BACKGROUNDMainMenu, BACKGROUNDMenu, UIMenu, BTNLeft, BTNRight, BTNSmithy, BTNUpgrade, BTNMap, BACKGROUNDSmithy, Blacksmith1, Blacksmith2, Blacksmith3, Blacksmith4, BACKGROUNDUpgradeFirstLvl, BACKGROUNDUpgradeSecondLvl, BACKGROUNDUpgradeThirdLvl, BACKGROUNDUpgradeBuying, BACKGROUNDMap, UICloudAct1, UICloudAct2, UICloudAct3, UICloudAct4, BTNV, BTNX,BACKGROUNDGame, BACKGROUNDFirstHouse, BACKGROUNDSecondHouse, BACKGROUNDThirdHouse, BTNFirstActAction, BTNSecondActAction, BTNThirdActAction, BTNFourthAndFifthActAction, Vegetable11, Vegetable12, Vegetable13, Vegetable14, Vegetable21, Vegetable22, Vegetable23, Vegetable24, Vegetable31, Vegetable32, Vegetable33, Vegetable34, Tree11, Tree12, Tree13, Tree21, Tree22, Tree23, Tree31, Tree32, Tree33, Collector011, Collector012, Collector013, Collector111, Collector112, Collector113, Collector021, Collector022, Collector023, Collector121, Collector122, Collector123, Woodcutter011, Woodcutter012, Woodcutter013, Woodcutter111, Woodcutter112, Woodcutter113, Woodcutter021, Woodcutter022, Woodcutter023, Woodcutter121, Woodcutter122, Woodcutter123, Archer011, Archer012, Archer013, Archer111, Archer112, Archer113, Archer021, Archer022, Archer023, Archer121, Archer122, Archer123);
                        txEnd();
                    }
                    Sleep(500);
                    *MapMove = 0;
                }
            }
        }
        
        if (NewGame.IsClicked(*Layout))
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

        if (Left.IsClicked(*Layout))
        {
            if(*MenuStage == 1 or *MenuStage == 2)
            {
                *MapMove = 1;
                for(int i=0; i<129; i++)
                {
                    *BackgroundX1 = *BackgroundX1-10;
                    *BackgroundX2 = *BackgroundX2-10;

                    txBegin();
                    Painting(*Layout, *Act, *HouseUpgrade, *TreesUpgrade, *VegetablesUpgrade, *HouseUpgradeSelect, *BackgroundX1, *BackgroundX2, *MenuStage, *MapMove, BlacksmithFrame, collectorArray, woodcutterArray, archerArray, vegetablesArray, treesArray, BACKGROUNDMainMenu, BACKGROUNDMenu, UIMenu, BTNLeft, BTNRight, BTNSmithy, BTNUpgrade, BTNMap, BACKGROUNDSmithy, Blacksmith1, Blacksmith2, Blacksmith3, Blacksmith4, BACKGROUNDUpgradeFirstLvl, BACKGROUNDUpgradeSecondLvl, BACKGROUNDUpgradeThirdLvl, BACKGROUNDUpgradeBuying, BACKGROUNDMap, UICloudAct1, UICloudAct2, UICloudAct3, UICloudAct4, BTNV, BTNX,BACKGROUNDGame, BACKGROUNDFirstHouse, BACKGROUNDSecondHouse, BACKGROUNDThirdHouse, BTNFirstActAction, BTNSecondActAction, BTNThirdActAction, BTNFourthAndFifthActAction, Vegetable11, Vegetable12, Vegetable13, Vegetable14, Vegetable21, Vegetable22, Vegetable23, Vegetable24, Vegetable31, Vegetable32, Vegetable33, Vegetable34, Tree11, Tree12, Tree13, Tree21, Tree22, Tree23, Tree31, Tree32, Tree33, Collector011, Collector012, Collector013, Collector111, Collector112, Collector113, Collector021, Collector022, Collector023, Collector121, Collector122, Collector123, Woodcutter011, Woodcutter012, Woodcutter013, Woodcutter111, Woodcutter112, Woodcutter113, Woodcutter021, Woodcutter022, Woodcutter023, Woodcutter121, Woodcutter122, Woodcutter123, Archer011, Archer012, Archer013, Archer111, Archer112, Archer113, Archer021, Archer022, Archer023, Archer121, Archer122, Archer123);
                    txEnd();
                }
                *MenuStage = *MenuStage-1;
                Sleep(500);
                *MapMove = 0;
            }
        }

        if (Right.IsClicked(*Layout))
        {
            if(*MenuStage == 0 or *MenuStage == 1)
            {
                *MapMove = 1;
                for(int i=0; i<129; i++)
                {
                    *BackgroundX1 = *BackgroundX1+10;
                    *BackgroundX2 = *BackgroundX2+10;

                    txBegin();
                    Painting(*Layout, *Act, *HouseUpgrade, *TreesUpgrade, *VegetablesUpgrade, *HouseUpgradeSelect, *BackgroundX1, *BackgroundX2, *MenuStage, *MapMove, BlacksmithFrame, collectorArray, woodcutterArray, archerArray, vegetablesArray, treesArray, BACKGROUNDMainMenu, BACKGROUNDMenu, UIMenu, BTNLeft, BTNRight, BTNSmithy, Blacksmith1, Blacksmith2, Blacksmith3, Blacksmith4, BTNUpgrade, BTNMap,BACKGROUNDSmithy, BACKGROUNDUpgradeFirstLvl, BACKGROUNDUpgradeSecondLvl, BACKGROUNDUpgradeThirdLvl, BACKGROUNDUpgradeBuying, BACKGROUNDMap, UICloudAct1, UICloudAct2, UICloudAct3, UICloudAct4, BTNV, BTNX,BACKGROUNDGame, BACKGROUNDFirstHouse, BACKGROUNDSecondHouse, BACKGROUNDThirdHouse, BTNFirstActAction, BTNSecondActAction, BTNThirdActAction, BTNFourthAndFifthActAction, Vegetable11, Vegetable12, Vegetable13, Vegetable14, Vegetable21, Vegetable22, Vegetable23, Vegetable24, Vegetable31, Vegetable32, Vegetable33, Vegetable34, Tree11, Tree12, Tree13, Tree21, Tree22, Tree23, Tree31, Tree32, Tree33, Collector011, Collector012, Collector013, Collector111, Collector112, Collector113, Collector021, Collector022, Collector023, Collector121, Collector122, Collector123, Woodcutter011, Woodcutter012, Woodcutter013, Woodcutter111, Woodcutter112, Woodcutter113, Woodcutter021, Woodcutter022, Woodcutter023, Woodcutter121, Woodcutter122, Woodcutter123, Archer011, Archer012, Archer013, Archer111, Archer112, Archer113, Archer021, Archer022, Archer023, Archer121, Archer122, Archer123);
                    txEnd();
                }
                *MenuStage = *MenuStage+1;
                Sleep(500);
                *MapMove = 0;
            }
        }

        if(Smithy.IsClicked(*Layout))
        {
            if(*MenuStage == 0)
            {
                txSetFillColor(RGB(0, 0, 0));
                txSetColor(RGB(0, 0, 0));
                txClear();
                *BackgroundX1 = 0; 
                *BackgroundX2 = 1296;
                Sleep(500);
                *Layout = 2;
                *MenuStage = 1;
                txSetFillColor(RGB(255, 255, 255));
                txSetColor(RGB(255, 255, 255));
            }
        }

        if(SmithyUpgrade12.IsClicked(*Layout))
        {
            if(*TreesUpgrade == 1)
            {
                *TreesUpgrade = 2;
                printf("%i", *TreesUpgrade);
            }
        }
        if(SmithyUpgrade13.IsClicked(*Layout))
        {
            if(*TreesUpgrade == 2)
            {
                *TreesUpgrade = 3;
                printf("%i", *TreesUpgrade);
            }
        }

        if(SmithyUpgrade22.IsClicked(*Layout))
        {
            if(*VegetablesUpgrade == 1)
            {
                *VegetablesUpgrade = 2;
                printf("%i", *VegetablesUpgrade);
            }
        }
        if(SmithyUpgrade23.IsClicked(*Layout))
        {
            if(*VegetablesUpgrade == 2)
            {
                *VegetablesUpgrade = 3;
                printf("%i", *VegetablesUpgrade);
            }
        }

        if(Upgrade.IsClicked(*Layout))
        {
            if(*MenuStage == 1)
            {
                txSetFillColor(RGB(0, 0, 0));
                txSetColor(RGB(0, 0, 0));
                txClear();
                *BackgroundX1 = 0; 
                *BackgroundX2 = 1296;
                Sleep(500);
                *Layout = 3;
                *MenuStage = 0;
                txSetFillColor(RGB(255, 255, 255));
                txSetColor(RGB(255, 255, 255));
            }
        }

        if(UpgradeFirstLvl.IsClicked(*Layout))
        {
            *HouseUpgradeSelect = 1;
        }

        if(UpgradeSecondLvl.IsClicked(*Layout))
        {
            *HouseUpgradeSelect = 2;
        }

        if(UpgradeThirdLvl.IsClicked(*Layout))
        {
            *HouseUpgradeSelect = 3;
        }

        if(Upgr.IsClicked(*Layout))
        {
            if(*HouseUpgradeSelect == 1)
            {
                if(*HouseUpgrade == 0)
                {
                    *HouseUpgrade = 1;
                    Save(*Act, *HouseUpgrade, *TreesUpgrade, *VegetablesUpgrade);
                }
            }
            if(*HouseUpgradeSelect == 2)
            {
                if(*HouseUpgrade == 1)
                {
                    *HouseUpgrade = 2;
                    Save(*Act, *HouseUpgrade, *TreesUpgrade, *VegetablesUpgrade);
                }
            }
            if(*HouseUpgradeSelect == 3)
            {
                if(*HouseUpgrade == 2)
                {
                    *HouseUpgrade = 3;
                    Save(*Act, *HouseUpgrade, *TreesUpgrade, *VegetablesUpgrade);
                }
            }
        }

        if(UpgradeBack.IsClicked(*Layout))
        {
            txSetFillColor(RGB(0, 0, 0));
            txSetColor(RGB(0, 0, 0));
            txClear();
            *BackgroundX1 = 1296; 
            *BackgroundX2 = 2592;
            Sleep(500);
            *Layout = 1;
            *MenuStage = 1;
            *HouseUpgradeSelect = 1;
            txSetFillColor(RGB(255, 255, 255));
            txSetColor(RGB(255, 255, 255));
        }

        if(Map.IsClicked(*Layout))
        {
            txSetFillColor(RGB(0, 0, 0));
            txSetColor(RGB(0, 0, 0));
            txClear();
            *BackgroundX1 = 0; 
            *BackgroundX2 = 1296;
            Sleep(500);
            *Layout = 4;
            *MenuStage = 0;
            txSetFillColor(RGB(255, 255, 255));
            txSetColor(RGB(255, 255, 255));
        }

        if(XFirstAct.IsClicked(*Layout))
        {
            if(*Act == 1)
            {
                txSetFillColor(RGB(0, 0, 0));
                txSetColor(RGB(0, 0, 0));
                txClear();
                *BackgroundX1 = 0; 
                *BackgroundX2 = 1296;
                Sleep(500);
                *Layout = 5;
                *MenuStage = 0;
                txSetFillColor(RGB(255, 255, 255));
                txSetColor(RGB(255, 255, 255));
            }
        }

        if(XSecondAct.IsClicked(*Layout))
        {
            if(*Act == 2)
            {
                txSetFillColor(RGB(0, 0, 0));
                txSetColor(RGB(0, 0, 0));
                txClear();
                *BackgroundX1 = 0; 
                *BackgroundX2 = 1296;
                Sleep(500);
                *Layout = 5;
                *MenuStage = 0;
                txSetFillColor(RGB(255, 255, 255));
                txSetColor(RGB(255, 255, 255));
            }
        }

        if(XThirdAct.IsClicked(*Layout))
        {
            if(*Act == 3)
            {
                txSetFillColor(RGB(0, 0, 0));
                txSetColor(RGB(0, 0, 0));
                txClear();
                *BackgroundX1 = 0; 
                *BackgroundX2 = 1296;
                Sleep(500);
                *Layout = 5;
                *MenuStage = 0;
                txSetFillColor(RGB(255, 255, 255));
                txSetColor(RGB(255, 255, 255));
            }
        }

        if(XFourthAct.IsClicked(*Layout))
        {
            if(*Act == 4)
            {
                txSetFillColor(RGB(0, 0, 0));
                txSetColor(RGB(0, 0, 0));
                txClear();
                *BackgroundX1 = 0; 
                *BackgroundX2 = 1296;
                Sleep(500);
                *Layout = 5;
                *MenuStage = 0;
                txSetFillColor(RGB(255, 255, 255));
                txSetColor(RGB(255, 255, 255));
            }
        }

        if(XFifthAct.IsClicked(*Layout))
        {
            if(*Act == 5)
            {
                txSetFillColor(RGB(0, 0, 0));
                txSetColor(RGB(0, 0, 0));
                txClear();
                *BackgroundX1 = 0; 
                *BackgroundX2 = 1296;
                Sleep(500);
                *Layout = 5;
                *MenuStage = 0;
                txSetFillColor(RGB(255, 255, 255));
                txSetColor(RGB(255, 255, 255));
            }
        }

        if(MapBack.IsClicked(*Layout))
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

        if(*Act == 1)
        {
            if(GameThirdAction.IsClicked(*Layout))
            {
                for(int i = 0; i < 7; i++)
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
        }
        if(*Act == 2)
        {
            if(GameThirdAction.IsClicked(*Layout))
            {
                for(int i = 0; i < 7; i++)
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
            if(GameFifthAction.IsClicked(*Layout))
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
        if(*Act == 3)
        {
            if(GameSecondAction.IsClicked(*Layout))
            {
                for(int i = 0; i < 7; i++)
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

            if(GameThirdAction.IsClicked(*Layout))
            {
                for(int i = 0; i < 4; i++)
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

            if(GameFifthAction.IsClicked(*Layout))
            {
                for(int i = 0; i < 4; i++)
                {
                    if(archerArray[i].GetState() == 0)
                    {
                        printf("%i", i);
                        archerArray[i].SetState(1);
                        archerArray[i].SetCoordinate(139, 530);
                        break;
                    }
                }
                Sleep(250);
            }
        }
        if(*Act == 4 or *Act == 5)
        {
            if(GameFirstAction.IsClicked(*Layout))
            {
                for(int i = 0; i < 7; i++)
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

            if(GameSecondAction.IsClicked(*Layout))
            {
                for(int i = 0; i < 4; i++)
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

            if(GameFifthAction.IsClicked(*Layout))
            {
                for(int i = 0; i < 7; i++)
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
    }

    void Save(int Act, int HouseUpgrade, int TreesUpgrade, int VegetablesUpgrade)
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

    void Load(int *Act, int *HouseUpgrade, int *TreesUpgrade, int *VegetablesUpgrade)
    {
        FILE *Load;
        char LoadText[LEN];

        Load = fopen("Resources\\Saving.txt", "r");
        fgets(LoadText, LEN, Load);
        
        *Act = atoi(strtok(LoadText, "_"));
        *HouseUpgrade = atoi(strtok(NULL, "_"));
    }