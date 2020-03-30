    #include "Resources\\Libs\\HeRLib.h"

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

        //Загрузка картинок
        COLORREF **BACKGROUND_Load = loadImage(0, 0, 1296, 720, "Backgrounds\\BACKGROUND_Load");
        drawingBackground(BACKGROUND_Load, 0);


        txBegin();
        COLORREF **BACKGROUND_MainMenu = loadImage(0, 0, 2592, 720, "Backgrounds\\BACKGROUND_MainMenu");   

        COLORREF **BACKGROUND_Menu = loadImage(0, 0, 3888, 720, "Backgrounds\\BACKGROUND_Menu");
        COLORREF **BACKGROUND_Smithy = loadImage(0, 0, 1296, 720, "Backgrounds\\BACKGROUND_Smithy");
        COLORREF **BACKGROUND_Upgrade_FirstLvl = loadImage(0, 0, 1296, 720, "Backgrounds\\BACKGROUND_Upgrade_FirstLvl");
        COLORREF **BACKGROUND_Upgrade_SecondLvl = loadImage(0, 0, 1296, 720, "Backgrounds\\BACKGROUND_Upgrade_SecondLvl");
        COLORREF **BACKGROUND_Upgrade_ThirdLvl = loadImage(0, 0, 1296, 720, "Backgrounds\\BACKGROUND_Upgrade_ThirdLvl");
        COLORREF **BACKGROUND_Map = loadImage(0, 0, 1296, 720, "Backgrounds\\BACKGROUND_Map");
        COLORREF **BACKGROUND_Game = loadImage(0, 0, 1296, 720, "Backgrounds\\BACKGROUND_Game");

        COLORREF **UI_Cloud_Act1 = loadImage(0, 0, 1002, 720, "UI\\UI_Cloud_Act1");
        COLORREF **UI_Cloud_Act2 = loadImage(0, 0, 1002, 720, "UI\\UI_Cloud_Act2");
        COLORREF **UI_Cloud_Act3 = loadImage(0, 0, 1002, 720, "UI\\UI_Cloud_Act3");
        COLORREF **UI_Cloud_Act4 = loadImage(0, 0, 1002, 720, "UI\\UI_Cloud_Act4");
        COLORREF **UI_Menu = loadImage(0, 0, 1296, 720, "UI\\UI_Menu");
        COLORREF **UI_Smithy_Buying = loadImage(0, 0, 1296, 720, "UI\\UI_Smithy_Buying");
        COLORREF **UI_Smithy_SelectUpgrade = loadImage(0, 0, 96, 96, "UI\\UI_Smithy_SelectUpgrade");
        COLORREF **UI_Upgrade_Buying = loadImage(0, 0, 1296, 720, "UI\\UI_Upgrade_Buying");
        COLORREF **BTN_FirstAct_Action = loadImage(0, 0, 1296, 720, "UI\\Buttons\\BTN_FirstAct_Action");
        COLORREF **BTN_FourthAndFifthAct_Action = loadImage(0, 0, 1296, 720, "UI\\Buttons\\BTN_FourthAndFifthAct_Action");
        COLORREF **BTN_Left = loadImage(0, 0, 1296, 720, "UI\\Buttons\\BTN_Left");
        COLORREF **BTN_Map = loadImage(0, 0, 1296, 720, "UI\\Buttons\\BTN_Map");
        COLORREF **BTN_Right = loadImage(0, 0, 1296, 720, "UI\\Buttons\\BTN_Right");
        COLORREF **BTN_SecondAct_Action = loadImage(0, 0, 1296, 720, "UI\\Buttons\\BTN_SecondAct_Action");
        COLORREF **BTN_Smithy = loadImage(0, 0, 1296, 720, "UI\\Buttons\\BTN_Smithy");
        COLORREF **BTN_ThirdAct_Action = loadImage(0, 0, 1296, 720, "UI\\Buttons\\BTN_ThirdAct_Action");
        COLORREF **BTN_Upgrade = loadImage(0, 0, 1296, 720, "UI\\Buttons\\BTN_Upgrade");
        COLORREF **BTN_V = loadImage(0, 0, 111, 80, "UI\\Buttons\\BTN_V");
        COLORREF **BTN_X = loadImage(0, 0, 111, 100, "UI\\Buttons\\BTN_X");

        COLORREF **OBJECTS_Blacksmith1 = loadImage(0, 0, 1296, 720, "Objects\\OBJECTS_Blacksmith1");
        COLORREF **OBJECTS_Blacksmith2 = loadImage(0, 0, 1296, 720, "Objects\\OBJECTS_Blacksmith2");
        COLORREF **OBJECTS_Blacksmith3 = loadImage(0, 0, 1296, 720, "Objects\\OBJECTS_Blacksmith3");
        COLORREF **OBJECTS_Blacksmith4 = loadImage(0, 0, 1296, 720, "Objects\\OBJECTS_Blacksmith4");
        COLORREF **OBJECTS_FirstHouse = loadImage(0, 0, 1296, 720, "Objects\\OBJECTS_FirstHouse");
        COLORREF **OBJECTS_SecondHouse = loadImage(0, 0, 1296, 720, "Objects\\OBJECTS_SecondHouse");
        COLORREF **OBJECTS_ThirdHouse = loadImage(0, 0, 1296, 720, "Objects\\OBJECTS_ThirdHouse");

        COLORREF **OBJECTS_Tree_1_1 = loadImage(0, 0, 120, 156, "Objects\\Trees\\OBJECTS_Tree_1_1");
        COLORREF **OBJECTS_Tree_1_2 = loadImage(0, 0, 120, 156, "Objects\\Trees\\OBJECTS_Tree_1_2");
        COLORREF **OBJECTS_Tree_1_3 = loadImage(0, 0, 120, 156, "Objects\\Trees\\OBJECTS_Tree_1_3");
        COLORREF **OBJECTS_Tree_2_1 = loadImage(0, 0, 120, 156, "Objects\\Trees\\OBJECTS_Tree_2_1");
        COLORREF **OBJECTS_Tree_2_2 = loadImage(0, 0, 120, 156, "Objects\\Trees\\OBJECTS_Tree_2_2");
        COLORREF **OBJECTS_Tree_2_3 = loadImage(0, 0, 120, 156, "Objects\\Trees\\OBJECTS_Tree_2_3");
        COLORREF **OBJECTS_Tree_3_1 = loadImage(0, 0, 120, 156, "Objects\\Trees\\OBJECTS_Tree_3_1");
        COLORREF **OBJECTS_Tree_3_2 = loadImage(0, 0, 120, 156, "Objects\\Trees\\OBJECTS_Tree_3_2");
        COLORREF **OBJECTS_Tree_3_3 = loadImage(0, 0, 120, 156, "Objects\\Trees\\OBJECTS_Tree_3_3");

        COLORREF **OBJECTS_Vegetable_1_1 = loadImage(0, 0, 45, 42, "Objects\\Vegetables\\OBJECTS_Vegetable_1_1");
        COLORREF **OBJECTS_Vegetable_1_2 = loadImage(0, 0, 45, 42, "Objects\\Vegetables\\OBJECTS_Vegetable_1_2");
        COLORREF **OBJECTS_Vegetable_1_3 = loadImage(0, 0, 45, 42, "Objects\\Vegetables\\OBJECTS_Vegetable_1_3");
        COLORREF **OBJECTS_Vegetable_1_4 = loadImage(0, 0, 45, 42, "Objects\\Vegetables\\OBJECTS_Vegetable_1_4");
        COLORREF **OBJECTS_Vegetable_2_1 = loadImage(0, 0, 36, 42, "Objects\\Vegetables\\OBJECTS_Vegetable_2_1");
        COLORREF **OBJECTS_Vegetable_2_2 = loadImage(0, 0, 36, 42, "Objects\\Vegetables\\OBJECTS_Vegetable_2_2");
        COLORREF **OBJECTS_Vegetable_2_3 = loadImage(0, 0, 36, 42, "Objects\\Vegetables\\OBJECTS_Vegetable_2_3");
        COLORREF **OBJECTS_Vegetable_2_4 = loadImage(0, 0, 36, 42, "Objects\\Vegetables\\OBJECTS_Vegetable_2_4");
        COLORREF **OBJECTS_Vegetable_3_1 = loadImage(0, 0, 33, 48, "Objects\\Vegetables\\OBJECTS_Vegetable_3_1");
        COLORREF **OBJECTS_Vegetable_3_2 = loadImage(0, 0, 33, 48, "Objects\\Vegetables\\OBJECTS_Vegetable_3_2");
        COLORREF **OBJECTS_Vegetable_3_3 = loadImage(0, 0, 33, 48, "Objects\\Vegetables\\OBJECTS_Vegetable_3_3");
        COLORREF **OBJECTS_Vegetable_3_4 = loadImage(0, 0, 33, 48, "Objects\\Vegetables\\OBJECTS_Vegetable_3_4");

        COLORREF **Collector_0_1_1 = loadImage(0, 0, 57, 93, "Hero\\Collector\\Collector_0_1_1");
        COLORREF **Collector_0_1_2 = loadImage(0, 0, 57, 93, "Hero\\Collector\\Collector_0_1_2");
        COLORREF **Collector_0_1_3 = loadImage(0, 0, 57, 93, "Hero\\Collector\\Collector_0_1_3");
        COLORREF **Collector_1_1_1 = loadImage(0, 0, 57, 93, "Hero\\Collector\\Collector_1_1_1");
        COLORREF **Collector_1_1_2 = loadImage(0, 0, 57, 93, "Hero\\Collector\\Collector_1_1_2");
        COLORREF **Collector_1_1_3 = loadImage(0, 0, 57, 93, "Hero\\Collector\\Collector_1_1_3");

        COLORREF **Collector_0_2_1 = loadImage(0, 0, 69, 93, "Hero\\Collector\\Collector_0_2_1");
        COLORREF **Collector_0_2_2 = loadImage(0, 0, 69, 93, "Hero\\Collector\\Collector_0_2_2");
        COLORREF **Collector_0_2_3 = loadImage(0, 0, 69, 93, "Hero\\Collector\\Collector_0_2_3");
        COLORREF **Collector_1_2_1 = loadImage(0, 0, 69, 93, "Hero\\Collector\\Collector_1_2_1");
        COLORREF **Collector_1_2_2 = loadImage(0, 0, 69, 93, "Hero\\Collector\\Collector_1_2_2");
        COLORREF **Collector_1_2_3 = loadImage(0, 0, 69, 93, "Hero\\Collector\\Collector_1_2_3");

        COLORREF **Woodcutter_0_1_1 = loadImage(0, 0, 45, 90, "Hero\\Woodcutter\\Woodcutter_0_1_1");
        COLORREF **Woodcutter_0_1_2 = loadImage(0, 0, 45, 90, "Hero\\Woodcutter\\Woodcutter_0_1_2");
        COLORREF **Woodcutter_0_1_3 = loadImage(0, 0, 45, 90, "Hero\\Woodcutter\\Woodcutter_0_1_3");
        COLORREF **Woodcutter_1_1_1 = loadImage(0, 0, 45, 90, "Hero\\Woodcutter\\Woodcutter_1_1_1");
        COLORREF **Woodcutter_1_1_2 = loadImage(0, 0, 45, 90, "Hero\\Woodcutter\\Woodcutter_1_1_2");
        COLORREF **Woodcutter_1_1_3 = loadImage(0, 0, 45, 90, "Hero\\Woodcutter\\Woodcutter_1_1_3");

        COLORREF **Woodcutter_0_2_1 = loadImage(0, 0, 117, 111, "Hero\\Woodcutter\\Woodcutter_0_2_1");
        COLORREF **Woodcutter_0_2_2 = loadImage(0, 0, 117, 111, "Hero\\Woodcutter\\Woodcutter_0_2_2");
        COLORREF **Woodcutter_0_2_3 = loadImage(0, 0, 117, 111, "Hero\\Woodcutter\\Woodcutter_0_2_3");
        COLORREF **Woodcutter_1_2_1 = loadImage(0, 0, 117, 111, "Hero\\Woodcutter\\Woodcutter_1_2_1");
        COLORREF **Woodcutter_1_2_2 = loadImage(0, 0, 117, 111, "Hero\\Woodcutter\\Woodcutter_1_2_2");
        COLORREF **Woodcutter_1_2_3 = loadImage(0, 0, 117, 111, "Hero\\Woodcutter\\Woodcutter_1_2_3");

        COLORREF **Archer_0_1_1 = loadImage(0, 0, 48, 90, "Hero\\Archer\\Archer_0_1_1");
        COLORREF **Archer_0_1_2 = loadImage(0, 0, 48, 90, "Hero\\Archer\\Archer_0_1_2");
        COLORREF **Archer_0_1_3 = loadImage(0, 0, 48, 90, "Hero\\Archer\\Archer_0_1_3");
        COLORREF **Archer_1_1_1 = loadImage(0, 0, 48, 90, "Hero\\Archer\\Archer_1_1_1");
        COLORREF **Archer_1_1_2 = loadImage(0, 0, 48, 90, "Hero\\Archer\\Archer_1_1_2");
        COLORREF **Archer_1_1_3 = loadImage(0, 0, 48, 90, "Hero\\Archer\\Archer_1_1_3");

        COLORREF **Archer_0_2_1 = loadImage(0, 0, 69, 90, "Hero\\Archer\\Archer_0_2_1");
        COLORREF **Archer_0_2_2 = loadImage(0, 0, 69, 90, "Hero\\Archer\\Archer_0_2_2");
        COLORREF **Archer_0_2_3 = loadImage(0, 0, 69, 90, "Hero\\Archer\\Archer_0_2_3");
        COLORREF **Archer_1_2_1 = loadImage(0, 0, 69, 90, "Hero\\Archer\\Archer_1_2_1");
        COLORREF **Archer_1_2_2 = loadImage(0, 0, 69, 90, "Hero\\Archer\\Archer_1_2_2");
        COLORREF **Archer_1_2_3 = loadImage(0, 0, 69, 90, "Hero\\Archer\\Archer_1_2_3");
        txEnd();

        while(TRUE)
        {
            painting(Layout, Act, HouseUpgrade, TreesUpgrade, VegetablesUpgrade, HouseUpgradeSelect, BackgroundX1, BackgroundX2, MenuStage, MapMove, &BlacksmithFrame, collectorArray, woodcutterArray, archerArray, vegetablesArray, treesArray, BACKGROUND_MainMenu, BACKGROUND_Menu, BACKGROUND_Smithy, BACKGROUND_Upgrade_FirstLvl, BACKGROUND_Upgrade_SecondLvl, BACKGROUND_Upgrade_ThirdLvl, BACKGROUND_Map, BACKGROUND_Game, UI_Cloud_Act1, UI_Cloud_Act2, UI_Cloud_Act3, UI_Cloud_Act4, UI_Menu, UI_Smithy_Buying, UI_Smithy_SelectUpgrade, UI_Upgrade_Buying, BTN_FirstAct_Action, BTN_FourthAndFifthAct_Action, BTN_Left,  BTN_Map, BTN_Right, BTN_SecondAct_Action, BTN_Smithy, BTN_ThirdAct_Action, BTN_Upgrade, BTN_V, BTN_X, OBJECTS_Blacksmith1, OBJECTS_Blacksmith2, OBJECTS_Blacksmith3, OBJECTS_Blacksmith4, OBJECTS_FirstHouse, OBJECTS_SecondHouse, OBJECTS_ThirdHouse, OBJECTS_Tree_1_1, OBJECTS_Tree_1_2, OBJECTS_Tree_1_3, OBJECTS_Tree_2_1, OBJECTS_Tree_2_2, OBJECTS_Tree_2_3, OBJECTS_Tree_3_1, OBJECTS_Tree_3_2, OBJECTS_Tree_3_3, OBJECTS_Vegetable_1_1, OBJECTS_Vegetable_1_2, OBJECTS_Vegetable_1_3, OBJECTS_Vegetable_1_4, OBJECTS_Vegetable_2_1, OBJECTS_Vegetable_2_2, OBJECTS_Vegetable_2_3, OBJECTS_Vegetable_2_4, OBJECTS_Vegetable_3_1, OBJECTS_Vegetable_3_2, OBJECTS_Vegetable_3_3, OBJECTS_Vegetable_3_4, Collector_0_1_1, Collector_0_1_2, Collector_0_1_3, Collector_1_1_1, Collector_1_1_2, Collector_1_1_3, Collector_0_2_1, Collector_0_2_2, Collector_0_2_3, Collector_1_2_1, Collector_1_2_2, Collector_1_2_3, Woodcutter_0_1_1, Woodcutter_0_1_2, Woodcutter_0_1_3, Woodcutter_1_1_1, Woodcutter_1_1_2, Woodcutter_1_1_3, Woodcutter_0_2_1, Woodcutter_0_2_2, Woodcutter_0_2_3, Woodcutter_1_2_1, Woodcutter_1_2_2, Woodcutter_1_2_3, Archer_0_1_1, Archer_0_1_2, Archer_0_1_3, Archer_1_1_1, Archer_1_1_2, Archer_1_1_3, Archer_0_2_1, Archer_0_2_2,  Archer_0_2_3, Archer_1_2_1, Archer_1_2_2, Archer_1_2_3);
        }
    }

    