    #include "Resources\\Libs\\HeRLib.h"

    int main()
    {
//Создание холстов
        txCreateWindow(1296, 720);
        HDC GrapicEngine = txCreateCompatibleDC(1296, 720);
        txSetFillColor(TX_WHITE);
        txFloodFill(0, 0, FLOODFILLBORDER);
        txTextCursor (false);

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

//Объекты классов
        hrCollector collectorArray[6];
        hrWoodcutter woodcutterArray[3];
        hrArcher archerArray[3];

        hrVegetables vegetablesArray[6]; 
        vegetablesArray[0].SetCoordinate(288, 200);
        vegetablesArray[1].SetCoordinate(335, 184);
        vegetablesArray[2].SetCoordinate(380, 195);
        vegetablesArray[3].SetCoordinate(425, 179);
        vegetablesArray[4].SetCoordinate(470, 190);
        vegetablesArray[5].SetCoordinate(520, 200);

        hrTrees treesArray[3];
        treesArray[0].SetCoordinate(596, 91);
        treesArray[1].SetCoordinate(723, 91);
        treesArray[2].SetCoordinate(849, 91);

        hrButton NewGame(431, 306, 861, 414, 0); 
        hrButton Left(36, 324, 80, 395, 1); 
        hrButton Right(1225, 324, 1269, 395, 1);
        hrButton Smithy(941, 0, 1036, 95, 1);
        hrButton Upgrade(941, 0, 1036, 95, 1);
        hrButton Map(941, 0, 1036, 95, 1);

        hrButton SmithyUpgrade11(414, 69, 509, 164, 2);
        hrButton SmithyUpgrade12(533, 69, 628, 164, 2);
        hrButton SmithyUpgrade13(652, 69, 747, 164, 2);
        hrButton SmithyUpgrade21(414, 190, 509, 285, 2);
        hrButton SmithyUpgrade22(533, 190, 628, 285, 2);
        hrButton SmithyUpgrade23(652, 190, 747, 285, 2);
        hrButton SmithyUpgrade31(414, 311, 509, 406, 2);
        hrButton SmithyUpgrade32(533, 311, 628, 406, 2);
        hrButton SmithyUpgrade33(652, 311, 747, 406, 2);
        hrButton SmithyUpgrade41(414, 432, 509, 406, 2);
        hrButton SmithyUpgrade42(533, 432, 628, 406, 2);
        hrButton SmithyUpgrade43(652, 432, 747, 406, 2);
        hrButton SmithyUpgrade51(414, 432, 509, 406, 2);
        hrButton SmithyUpgrade52(533, 432, 628, 406, 2);
        hrButton SmithyUpgrade53(652, 432, 747, 406, 2);
        hrButton SmithyBack(944, 625, 1050, 657, 2);

        hrButton Upgr(431, 557, 646, 611, 3);
        hrButton UpgradeFirstLvl(66, 171, 261, 236, 3); 
        hrButton UpgradeSecondLvl(63, 288, 270, 403, 3);
        hrButton UpgradeThirdLvl(63, 442, 267, 513, 3);
        hrButton UpgradeBack(115, 613, 221, 645, 3);

        hrButton VFirstAct(265, 488, 375, 567, 4);
        hrButton XFirstAct(265, 479, 375, 578, 4);
        hrButton VSecondAct(564, 388, 672, 467, 4);
        hrButton XSecondAct(562, 379, 672, 478, 4);
        hrButton VThirdAct(320, 252, 430, 331, 4);
        hrButton XThirdAct(320, 243, 430, 342, 4);
        hrButton VFourthAct(920, 476, 1030, 555, 4);
        hrButton XFourthAct(920, 467, 1030, 566, 4);
        hrButton VFifthAct(879, 229, 989, 308, 4);
        hrButton XFifthAct(879, 220, 989, 319, 4);
        hrButton MapBack(534, 610, 759, 703, 4);

        hrButton GameFirstAction(369, 630, 458, 719, 5);
        hrButton GameSecondAction(462, 630, 551, 719, 5);
        hrButton GameThirdAction(555, 630, 644, 719, 5);
        hrButton GameFourthAction(651, 630, 740, 719, 5);
        hrButton GameFifthAction(744, 630, 833, 719, 5);
        hrButton GameSixthAction(837, 630, 926, 719, 5);

//Загрузка картинок
        COLORREF **BACKGROUND_Load = hrLoadImage(GrapicEngine, 1296, 720, "Backgrounds\\BACKGROUND_Load");
        hrDrawingImage(0, 0, 1296, 720, 0, 0, BACKGROUND_Load);

        txBegin();
        COLORREF **BACKGROUND_MainMenu = hrLoadImage(GrapicEngine, 2592, 720, "Backgrounds\\BACKGROUND_MainMenu");   

        COLORREF **BACKGROUND_Menu = hrLoadImage(GrapicEngine, 3888, 720, "Backgrounds\\BACKGROUND_Menu");
        COLORREF **BACKGROUND_Smithy = hrLoadImage(GrapicEngine, 1296, 720, "Backgrounds\\BACKGROUND_Smithy");
        COLORREF **BACKGROUND_Upgrade_FirstLvl = hrLoadImage(GrapicEngine, 1296, 720, "Backgrounds\\BACKGROUND_Upgrade_FirstLvl");
        COLORREF **BACKGROUND_Upgrade_SecondLvl = hrLoadImage(GrapicEngine, 1296, 720, "Backgrounds\\BACKGROUND_Upgrade_SecondLvl");
        COLORREF **BACKGROUND_Upgrade_ThirdLvl = hrLoadImage(GrapicEngine, 1296, 720, "Backgrounds\\BACKGROUND_Upgrade_ThirdLvl");
        COLORREF **BACKGROUND_Map = hrLoadImage(GrapicEngine, 1296, 720, "Backgrounds\\BACKGROUND_Map");
        COLORREF **BACKGROUND_Game = hrLoadImage(GrapicEngine, 1296, 720, "Backgrounds\\BACKGROUND_Game");

        COLORREF **UI_Cloud_Act1 = hrLoadImage(GrapicEngine, 1002, 720, "UI\\UI_Cloud_Act1");
        COLORREF **UI_Cloud_Act2 = hrLoadImage(GrapicEngine, 1002, 720, "UI\\UI_Cloud_Act2");
        COLORREF **UI_Cloud_Act3 = hrLoadImage(GrapicEngine, 1002, 720, "UI\\UI_Cloud_Act3");
        COLORREF **UI_Cloud_Act4 = hrLoadImage(GrapicEngine, 1002, 720, "UI\\UI_Cloud_Act4");
        COLORREF **UI_Menu = hrLoadImage(GrapicEngine, 1296, 720, "UI\\UI_Menu");
        COLORREF **UI_Smithy_Buying = hrLoadImage(GrapicEngine, 1296, 720, "UI\\UI_Smithy_Buying");
        COLORREF **UI_Smithy_SelectUpgrade = hrLoadImage(GrapicEngine, 96, 96, "UI\\UI_Smithy_SelectUpgrade");
        COLORREF **UI_Upgrade_Buying = hrLoadImage(GrapicEngine, 1296, 720, "UI\\UI_Upgrade_Buying");
        COLORREF **BTN_FirstAct_Action = hrLoadImage(GrapicEngine, 1296, 720, "UI\\Buttons\\BTN_FirstAct_Action");
        COLORREF **BTN_FourthAndFifthAct_Action = hrLoadImage(GrapicEngine,  1296, 720, "UI\\Buttons\\BTN_FourthAndFifthAct_Action");
        COLORREF **BTN_Left = hrLoadImage(GrapicEngine, 1296, 720, "UI\\Buttons\\BTN_Left");
        COLORREF **BTN_Map = hrLoadImage(GrapicEngine, 1296, 720, "UI\\Buttons\\BTN_Map");
        COLORREF **BTN_Right = hrLoadImage(GrapicEngine, 1296, 720, "UI\\Buttons\\BTN_Right");
        COLORREF **BTN_SecondAct_Action = hrLoadImage(GrapicEngine,  1296, 720, "UI\\Buttons\\BTN_SecondAct_Action");
        COLORREF **BTN_Smithy = hrLoadImage(GrapicEngine, 1296, 720, "UI\\Buttons\\BTN_Smithy");
        COLORREF **BTN_ThirdAct_Action = hrLoadImage(GrapicEngine,  1296, 720, "UI\\Buttons\\BTN_ThirdAct_Action");
        COLORREF **BTN_Upgrade = hrLoadImage(GrapicEngine, 1296, 720, "UI\\Buttons\\BTN_Upgrade");
        COLORREF **BTN_V = hrLoadImage(GrapicEngine, 111, 80, "UI\\Buttons\\BTN_V");
        COLORREF **BTN_X = hrLoadImage(GrapicEngine, 111, 100, "UI\\Buttons\\BTN_X");
        
        COLORREF **OBJECTS_Blacksmith1 = hrLoadImage(GrapicEngine, 1296, 720, "Objects\\OBJECTS_Blacksmith1");
        COLORREF **OBJECTS_Blacksmith2 = hrLoadImage(GrapicEngine, 1296, 720, "Objects\\OBJECTS_Blacksmith2");
        COLORREF **OBJECTS_Blacksmith3 = hrLoadImage(GrapicEngine, 1296, 720, "Objects\\OBJECTS_Blacksmith3");
        COLORREF **OBJECTS_Blacksmith4 = hrLoadImage(GrapicEngine, 1296, 720, "Objects\\OBJECTS_Blacksmith4");
        COLORREF **OBJECTS_FirstHouse = hrLoadImage(GrapicEngine, 1296, 720, "Objects\\OBJECTS_FirstHouse");
        COLORREF **OBJECTS_SecondHouse = hrLoadImage(GrapicEngine, 1296, 720, "Objects\\OBJECTS_SecondHouse");
        COLORREF **OBJECTS_ThirdHouse = hrLoadImage(GrapicEngine, 1296, 720, "Objects\\OBJECTS_ThirdHouse");

        COLORREF **OBJECTS_Tree_1_1 = hrLoadImage(GrapicEngine, 120, 156, "Objects\\Trees\\OBJECTS_Tree_1_1");
        COLORREF **OBJECTS_Tree_1_2 = hrLoadImage(GrapicEngine, 120, 156, "Objects\\Trees\\OBJECTS_Tree_1_2");
        COLORREF **OBJECTS_Tree_1_3 = hrLoadImage(GrapicEngine, 120, 156, "Objects\\Trees\\OBJECTS_Tree_1_3");
        COLORREF **OBJECTS_Tree_2_1 = hrLoadImage(GrapicEngine, 120, 156, "Objects\\Trees\\OBJECTS_Tree_2_1");
        COLORREF **OBJECTS_Tree_2_2 = hrLoadImage(GrapicEngine, 120, 156, "Objects\\Trees\\OBJECTS_Tree_2_2");
        COLORREF **OBJECTS_Tree_2_3 = hrLoadImage(GrapicEngine, 120, 156, "Objects\\Trees\\OBJECTS_Tree_2_3");
        COLORREF **OBJECTS_Tree_3_1 = hrLoadImage(GrapicEngine, 120, 156, "Objects\\Trees\\OBJECTS_Tree_3_1");
        COLORREF **OBJECTS_Tree_3_2 = hrLoadImage(GrapicEngine, 120, 156, "Objects\\Trees\\OBJECTS_Tree_3_2");
        COLORREF **OBJECTS_Tree_3_3 = hrLoadImage(GrapicEngine, 120, 156, "Objects\\Trees\\OBJECTS_Tree_3_3");

        COLORREF **OBJECTS_Vegetable_1_1 = hrLoadImage(GrapicEngine, 45, 42, "Objects\\Vegetables\\OBJECTS_Vegetable_1_1");
        COLORREF **OBJECTS_Vegetable_1_2 = hrLoadImage(GrapicEngine, 45, 42, "Objects\\Vegetables\\OBJECTS_Vegetable_1_2");
        COLORREF **OBJECTS_Vegetable_1_3 = hrLoadImage(GrapicEngine, 45, 42, "Objects\\Vegetables\\OBJECTS_Vegetable_1_3");
        COLORREF **OBJECTS_Vegetable_1_4 = hrLoadImage(GrapicEngine, 45, 42, "Objects\\Vegetables\\OBJECTS_Vegetable_1_4");
        COLORREF **OBJECTS_Vegetable_2_1 = hrLoadImage(GrapicEngine, 36, 42, "Objects\\Vegetables\\OBJECTS_Vegetable_2_1");
        COLORREF **OBJECTS_Vegetable_2_2 = hrLoadImage(GrapicEngine, 36, 42, "Objects\\Vegetables\\OBJECTS_Vegetable_2_2");
        COLORREF **OBJECTS_Vegetable_2_3 = hrLoadImage(GrapicEngine, 36, 42, "Objects\\Vegetables\\OBJECTS_Vegetable_2_3");
        COLORREF **OBJECTS_Vegetable_2_4 = hrLoadImage(GrapicEngine, 36, 42, "Objects\\Vegetables\\OBJECTS_Vegetable_2_4");
        COLORREF **OBJECTS_Vegetable_3_1 = hrLoadImage(GrapicEngine, 33, 48, "Objects\\Vegetables\\OBJECTS_Vegetable_3_1");
        COLORREF **OBJECTS_Vegetable_3_2 = hrLoadImage(GrapicEngine, 33, 48, "Objects\\Vegetables\\OBJECTS_Vegetable_3_2");
        COLORREF **OBJECTS_Vegetable_3_3 = hrLoadImage(GrapicEngine, 33, 48, "Objects\\Vegetables\\OBJECTS_Vegetable_3_3");
        COLORREF **OBJECTS_Vegetable_3_4 = hrLoadImage(GrapicEngine, 33, 48, "Objects\\Vegetables\\OBJECTS_Vegetable_3_4");

        COLORREF **Collector_0_1_1 = hrLoadImage(GrapicEngine, 57, 93, "Hero\\Collector\\Collector_0_1_1");
        COLORREF **Collector_0_1_2 = hrLoadImage(GrapicEngine, 57, 93, "Hero\\Collector\\Collector_0_1_2");
        COLORREF **Collector_0_1_3 = hrLoadImage(GrapicEngine, 57, 93, "Hero\\Collector\\Collector_0_1_3");
        COLORREF **Collector_1_1_1 = hrLoadImage(GrapicEngine, 57, 93, "Hero\\Collector\\Collector_1_1_1");
        COLORREF **Collector_1_1_2 = hrLoadImage(GrapicEngine, 57, 93, "Hero\\Collector\\Collector_1_1_2");
        COLORREF **Collector_1_1_3 = hrLoadImage(GrapicEngine, 57, 93, "Hero\\Collector\\Collector_1_1_3");

        COLORREF **Collector_0_2_1 = hrLoadImage(GrapicEngine, 69, 93, "Hero\\Collector\\Collector_0_2_1");
        COLORREF **Collector_0_2_2 = hrLoadImage(GrapicEngine, 69, 93, "Hero\\Collector\\Collector_0_2_2");
        COLORREF **Collector_0_2_3 = hrLoadImage(GrapicEngine, 69, 93, "Hero\\Collector\\Collector_0_2_3");
        COLORREF **Collector_1_2_1 = hrLoadImage(GrapicEngine, 69, 93, "Hero\\Collector\\Collector_1_2_1");
        COLORREF **Collector_1_2_2 = hrLoadImage(GrapicEngine, 69, 93, "Hero\\Collector\\Collector_1_2_2");
        COLORREF **Collector_1_2_3 = hrLoadImage(GrapicEngine, 69, 93, "Hero\\Collector\\Collector_1_2_3");

        COLORREF **Woodcutter_0_1_1 = hrLoadImage(GrapicEngine, 45, 90, "Hero\\Woodcutter\\Woodcutter_0_1_1");
        COLORREF **Woodcutter_0_1_2 = hrLoadImage(GrapicEngine, 45, 90, "Hero\\Woodcutter\\Woodcutter_0_1_2");
        COLORREF **Woodcutter_0_1_3 = hrLoadImage(GrapicEngine, 45, 90, "Hero\\Woodcutter\\Woodcutter_0_1_3");
        COLORREF **Woodcutter_1_1_1 = hrLoadImage(GrapicEngine, 45, 90, "Hero\\Woodcutter\\Woodcutter_1_1_1");
        COLORREF **Woodcutter_1_1_2 = hrLoadImage(GrapicEngine, 45, 90, "Hero\\Woodcutter\\Woodcutter_1_1_2");
        COLORREF **Woodcutter_1_1_3 = hrLoadImage(GrapicEngine, 45, 90, "Hero\\Woodcutter\\Woodcutter_1_1_3");

        COLORREF **Woodcutter_0_2_1 = hrLoadImage(GrapicEngine, 117, 111, "Hero\\Woodcutter\\Woodcutter_0_2_1");
        COLORREF **Woodcutter_0_2_2 = hrLoadImage(GrapicEngine, 117, 111, "Hero\\Woodcutter\\Woodcutter_0_2_2");
        COLORREF **Woodcutter_0_2_3 = hrLoadImage(GrapicEngine, 117, 111, "Hero\\Woodcutter\\Woodcutter_0_2_3");
        COLORREF **Woodcutter_1_2_1 = hrLoadImage(GrapicEngine, 117, 111, "Hero\\Woodcutter\\Woodcutter_1_2_1");
        COLORREF **Woodcutter_1_2_2 = hrLoadImage(GrapicEngine, 117, 111, "Hero\\Woodcutter\\Woodcutter_1_2_2");
        COLORREF **Woodcutter_1_2_3 = hrLoadImage(GrapicEngine, 117, 111, "Hero\\Woodcutter\\Woodcutter_1_2_3");

        COLORREF **Archer_0_1_1 = hrLoadImage(GrapicEngine, 48, 90, "Hero\\Archer\\Archer_0_1_1");
        COLORREF **Archer_0_1_2 = hrLoadImage(GrapicEngine, 48, 90, "Hero\\Archer\\Archer_0_1_2");
        COLORREF **Archer_0_1_3 = hrLoadImage(GrapicEngine, 48, 90, "Hero\\Archer\\Archer_0_1_3");
        COLORREF **Archer_1_1_1 = hrLoadImage(GrapicEngine, 48, 90, "Hero\\Archer\\Archer_1_1_1");
        COLORREF **Archer_1_1_2 = hrLoadImage(GrapicEngine, 48, 90, "Hero\\Archer\\Archer_1_1_2");
        COLORREF **Archer_1_1_3 = hrLoadImage(GrapicEngine, 48, 90, "Hero\\Archer\\Archer_1_1_3");

        COLORREF **Archer_0_2_1 = hrLoadImage(GrapicEngine, 69, 90, "Hero\\Archer\\Archer_0_2_1");
        COLORREF **Archer_0_2_2 = hrLoadImage(GrapicEngine, 69, 90, "Hero\\Archer\\Archer_0_2_2");
        COLORREF **Archer_0_2_3 = hrLoadImage(GrapicEngine, 69, 90, "Hero\\Archer\\Archer_0_2_3");
        COLORREF **Archer_1_2_1 = hrLoadImage(GrapicEngine, 69, 90, "Hero\\Archer\\Archer_1_2_1");
        COLORREF **Archer_1_2_2 = hrLoadImage(GrapicEngine, 69, 90, "Hero\\Archer\\Archer_1_2_2");
        COLORREF **Archer_1_2_3 = hrLoadImage(GrapicEngine, 69, 90, "Hero\\Archer\\Archer_1_2_3");
        txEnd();

//Цикл игры
        while(TRUE)
        {
            txSetFillColor(TX_WHITE);
            txFloodFill(0, 0, FLOODFILLBORDER);
            
            Time++;
            txBegin();
                hrPainting(Layout, Act, HouseUpgrade, TreesUpgrade, VegetablesUpgrade, HouseUpgradeSelect, BackgroundX1, BackgroundX2, MenuStage, MapMove, &BlacksmithFrame, collectorArray, woodcutterArray, archerArray, vegetablesArray, treesArray, BACKGROUND_MainMenu, BACKGROUND_Menu, BACKGROUND_Smithy, BACKGROUND_Upgrade_FirstLvl, BACKGROUND_Upgrade_SecondLvl, BACKGROUND_Upgrade_ThirdLvl, BACKGROUND_Map, BACKGROUND_Game, UI_Cloud_Act1, UI_Cloud_Act2, UI_Cloud_Act3, UI_Cloud_Act4, UI_Menu, UI_Smithy_Buying, UI_Smithy_SelectUpgrade, UI_Upgrade_Buying, BTN_FirstAct_Action, BTN_FourthAndFifthAct_Action, BTN_Left,  BTN_Map, BTN_Right, BTN_SecondAct_Action, BTN_Smithy, BTN_ThirdAct_Action, BTN_Upgrade, BTN_V, BTN_X, OBJECTS_Blacksmith1, OBJECTS_Blacksmith2, OBJECTS_Blacksmith3, OBJECTS_Blacksmith4, OBJECTS_FirstHouse, OBJECTS_SecondHouse, OBJECTS_ThirdHouse, OBJECTS_Tree_1_1, OBJECTS_Tree_1_2, OBJECTS_Tree_1_3, OBJECTS_Tree_2_1, OBJECTS_Tree_2_2, OBJECTS_Tree_2_3, OBJECTS_Tree_3_1, OBJECTS_Tree_3_2, OBJECTS_Tree_3_3, OBJECTS_Vegetable_1_1, OBJECTS_Vegetable_1_2, OBJECTS_Vegetable_1_3, OBJECTS_Vegetable_1_4, OBJECTS_Vegetable_2_1, OBJECTS_Vegetable_2_2, OBJECTS_Vegetable_2_3, OBJECTS_Vegetable_2_4, OBJECTS_Vegetable_3_1, OBJECTS_Vegetable_3_2, OBJECTS_Vegetable_3_3, OBJECTS_Vegetable_3_4, Collector_0_1_1, Collector_0_1_2, Collector_0_1_3, Collector_1_1_1, Collector_1_1_2, Collector_1_1_3, Collector_0_2_1, Collector_0_2_2, Collector_0_2_3, Collector_1_2_1, Collector_1_2_2, Collector_1_2_3, Woodcutter_0_1_1, Woodcutter_0_1_2, Woodcutter_0_1_3, Woodcutter_1_1_1, Woodcutter_1_1_2, Woodcutter_1_1_3, Woodcutter_0_2_1, Woodcutter_0_2_2, Woodcutter_0_2_3, Woodcutter_1_2_1, Woodcutter_1_2_2, Woodcutter_1_2_3, Archer_0_1_1, Archer_0_1_2, Archer_0_1_3, Archer_1_1_1, Archer_1_1_2, Archer_1_1_3, Archer_0_2_1, Archer_0_2_2,  Archer_0_2_3, Archer_1_2_1, Archer_1_2_2, Archer_1_2_3);
            txEnd();

            if(MapMove == 0)
            {
                hrKeyboardControls(&Layout, &Act, &HouseUpgrade, &TreesUpgrade, &VegetablesUpgrade, &HouseUpgradeSelect, &BackgroundX1, &BackgroundX2, &MenuStage, &MapMove, &BlacksmithFrame, collectorArray, woodcutterArray, archerArray, vegetablesArray, treesArray, NewGame, Left, Right, Smithy, Upgrade, Map, SmithyUpgrade11, SmithyUpgrade12, SmithyUpgrade13, SmithyUpgrade21, SmithyUpgrade22, SmithyUpgrade23, SmithyUpgrade31, SmithyUpgrade32, SmithyUpgrade33, SmithyUpgrade41, SmithyUpgrade42, SmithyUpgrade43, SmithyUpgrade51, SmithyUpgrade52, SmithyUpgrade53, SmithyBack, Upgr, UpgradeFirstLvl, UpgradeSecondLvl, UpgradeThirdLvl, UpgradeBack, VFirstAct, XFirstAct, VSecondAct, XSecondAct, VThirdAct, XThirdAct, VFourthAct, XFourthAct, VFifthAct, XFifthAct, MapBack, GameFirstAction, GameSecondAction, GameThirdAction, GameFourthAction, GameFifthAction, GameSixthAction, BACKGROUND_MainMenu, BACKGROUND_Menu, BACKGROUND_Smithy, BACKGROUND_Upgrade_FirstLvl, BACKGROUND_Upgrade_SecondLvl, BACKGROUND_Upgrade_ThirdLvl, BACKGROUND_Map, BACKGROUND_Game, UI_Cloud_Act1, UI_Cloud_Act2, UI_Cloud_Act3, UI_Cloud_Act4, UI_Menu, UI_Smithy_Buying, UI_Smithy_SelectUpgrade, UI_Upgrade_Buying, BTN_FirstAct_Action, BTN_FourthAndFifthAct_Action, BTN_Left,  BTN_Map, BTN_Right, BTN_SecondAct_Action, BTN_Smithy, BTN_ThirdAct_Action, BTN_Upgrade, BTN_V, BTN_X, OBJECTS_Blacksmith1, OBJECTS_Blacksmith2, OBJECTS_Blacksmith3, OBJECTS_Blacksmith4, OBJECTS_FirstHouse, OBJECTS_SecondHouse, OBJECTS_ThirdHouse, OBJECTS_Tree_1_1, OBJECTS_Tree_1_2, OBJECTS_Tree_1_3, OBJECTS_Tree_2_1, OBJECTS_Tree_2_2, OBJECTS_Tree_2_3, OBJECTS_Tree_3_1, OBJECTS_Tree_3_2, OBJECTS_Tree_3_3, OBJECTS_Vegetable_1_1, OBJECTS_Vegetable_1_2, OBJECTS_Vegetable_1_3, OBJECTS_Vegetable_1_4, OBJECTS_Vegetable_2_1, OBJECTS_Vegetable_2_2, OBJECTS_Vegetable_2_3, OBJECTS_Vegetable_2_4, OBJECTS_Vegetable_3_1, OBJECTS_Vegetable_3_2, OBJECTS_Vegetable_3_3, OBJECTS_Vegetable_3_4, Collector_0_1_1, Collector_0_1_2, Collector_0_1_3, Collector_1_1_1, Collector_1_1_2, Collector_1_1_3, Collector_0_2_1, Collector_0_2_2, Collector_0_2_3, Collector_1_2_1, Collector_1_2_2, Collector_1_2_3, Woodcutter_0_1_1, Woodcutter_0_1_2, Woodcutter_0_1_3, Woodcutter_1_1_1, Woodcutter_1_1_2, Woodcutter_1_1_3, Woodcutter_0_2_1, Woodcutter_0_2_2, Woodcutter_0_2_3, Woodcutter_1_2_1, Woodcutter_1_2_2, Woodcutter_1_2_3, Archer_0_1_1, Archer_0_1_2, Archer_0_1_3, Archer_1_1_1, Archer_1_1_2, Archer_1_1_3, Archer_0_2_1, Archer_0_2_2,  Archer_0_2_3, Archer_1_2_1, Archer_1_2_2, Archer_1_2_3);
            }

            txBitBlt(0, 0, GrapicEngine);
        }
    }

    