//==========[ Подключение библиотек ]==========
    #include "Resources\\Libs\\HeRLib.h"
//=============================================

//==========[ Создание холста игры ]==========
    int main()
    {
        txCreateWindow(1296, 720);
        txSetFillColor(TX_WHITE);
        txFloodFill(0, 0, FLOODFILLBORDER);
        txTextCursor(FALSE);
//============================================

//===============[ Переменные ]===============
        int layout = 0;
        int act = 1;
        int houseUpgrade = 0; 
        int treesUpgrade = 1;
        int vegetablesUpgrade = 1;
        int smithyUpgradeSelect = 11;
        int houseUpgradeSelect = 1;
        int backgroundX1 = 0;
        int backgroundX2 = 1296;
        int menuStage = 1;
        int mapMove = 0;
        int time = 0;
        int blacksmithFrame = 1;
//============================================
        
//================[ Объекты ]=================
        hrCollector collectorArray[6];
        hrWoodcutter woodcutterArray[3];
        hrKnight knightArray[3];
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

        hrButton newGame(431, 306, 861, 414, 0); 
        hrButton left(36, 324, 80, 395, 1); 
        hrButton right(1225, 324, 1269, 395, 1);
        hrButton smithy(941, 0, 1036, 95, 1);
        hrButton upgrade(941, 0, 1036, 95, 1);
        hrButton map(941, 0, 1036, 95, 1);

        hrButton smithyUpgrade11(414, 69, 509, 164, 2);
        hrButton smithyUpgrade12(533, 69, 628, 164, 2);
        hrButton smithyUpgrade13(652, 69, 747, 164, 2);
        hrButton smithyUpgrade21(414, 190, 509, 285, 2);
        hrButton smithyUpgrade22(533, 190, 628, 285, 2);
        hrButton smithyUpgrade23(652, 190, 747, 285, 2);
        hrButton smithyUpgrade31(414, 311, 509, 406, 2);
        hrButton smithyUpgrade32(533, 311, 628, 406, 2);
        hrButton smithyUpgrade33(652, 311, 747, 406, 2);
        hrButton smithyUpgrade41(414, 432, 509, 527, 2);
        hrButton smithyUpgrade42(533, 432, 628, 527, 2);
        hrButton smithyUpgrade43(652, 432, 747, 527, 2);
        hrButton smithyUpgrade51(414, 553, 509, 648, 2);
        hrButton smithyUpgrade52(533, 553, 628, 648, 2);
        hrButton smithyUpgrade53(652, 553, 747, 648, 2);
        hrButton smithyBuy(938, 597, 1056, 631, 2);
        hrButton smithyBack(944, 638, 1050, 670, 2);


        hrButton upgr(431, 557, 646, 611, 3);
        hrButton upgradeFirstLvl(66, 171, 261, 236, 3); 
        hrButton upgradeSecondLvl(63, 288, 270, 403, 3);
        hrButton upgradeThirdLvl(63, 442, 267, 513, 3);
        hrButton upgradeBack(115, 613, 221, 645, 3);

        hrButton vFirstAct(265, 488, 375, 567, 4);
        hrButton xFirstAct(265, 479, 375, 578, 4);
        hrButton vSecondAct(564, 388, 672, 467, 4);
        hrButton xSecondAct(562, 379, 672, 478, 4);
        hrButton vThirdAct(320, 252, 430, 331, 4);
        hrButton xThirdAct(320, 243, 430, 342, 4);
        hrButton vFourthAct(920, 476, 1030, 555, 4);
        hrButton xFourthAct(920, 467, 1030, 566, 4);
        hrButton vFifthAct(879, 229, 989, 308, 4);
        hrButton xFifthAct(879, 220, 989, 319, 4);
        hrButton mapBack(534, 610, 759, 703, 4);

        hrButton gameFirstAction(369, 630, 458, 719, 5);
        hrButton gameSecondAction(462, 630, 551, 719, 5);
        hrButton gameThirdAction(555, 630, 644, 719, 5);
        hrButton gameFourthAction(651, 630, 740, 719, 5);
        hrButton gameFifthAction(744, 630, 833, 719, 5);
        hrButton gameSixthAction(837, 630, 926, 719, 5);
//============================================

//===========[ Загрузка картинок ]============
        HDC backgroundLoad = txLoadImage("Resources\\Images\\Backgrounds\\BACKGROUND_Load.bmp");
        txBitBlt(txDC(), 0, 0, 1296, 720, backgroundLoad, 0, 0);

        txBegin();
        HDC backgroundMainMenu = txLoadImage("Resources\\Images\\Backgrounds\\BACKGROUND_MainMenu.bmp");
        HDC backgroundMenu = txLoadImage("Resources\\Images\\Backgrounds\\BACKGROUND_Menu.bmp");
        HDC backgroundSmithy = txLoadImage("Resources\\Images\\Backgrounds\\BACKGROUND_Smithy.bmp");
        HDC backgroundUpgradeFirstLvl = txLoadImage("Resources\\Images\\Backgrounds\\BACKGROUND_Upgrade_FirstLvl.bmp");
        HDC backgroundUpgradeSecondLvl = txLoadImage("Resources\\Images\\Backgrounds\\BACKGROUND_Upgrade_SecondLvl.bmp");
        HDC backgroundUpgradeThirdLvl = txLoadImage("Resources\\Images\\Backgrounds\\BACKGROUND_Upgrade_ThirdLvl.bmp");
        HDC backgroundMap = txLoadImage("Resources\\Images\\Backgrounds\\BACKGROUND_Map.bmp");
        HDC backgroundGame = txLoadImage("Resources\\Images\\Backgrounds\\BACKGROUND_Game.bmp");

        HDC uiMenu = txLoadImage("Resources\\Images\\UI\\UI_Menu.bmp");
        HDC btnLeft = txLoadImage("Resources\\Images\\UI\\Buttons\\BTN_Left.bmp");
        HDC btnRight = txLoadImage("Resources\\Images\\UI\\Buttons\\BTN_Right.bmp");
        HDC btnSmithy = txLoadImage("Resources\\Images\\UI\\Buttons\\BTN_Smithy.bmp");
        HDC btnUpgrade = txLoadImage("Resources\\Images\\UI\\Buttons\\BTN_Upgrade.bmp");
        HDC btnMap = txLoadImage("Resources\\Images\\UI\\Buttons\\BTN_Map.bmp");

        HDC uiSmithyBuying = txLoadImage("Resources\\Images\\UI\\UI_Smithy_Buying.bmp");
        HDC uiSmithyUpgrade11 = txLoadImage("Resources\\Images\\UI\\UI_Smithy_11.bmp");
        HDC uiSmithyUpgrade12 = txLoadImage("Resources\\Images\\UI\\UI_Smithy_12.bmp");
        HDC uiSmithyUpgrade13 = txLoadImage("Resources\\Images\\UI\\UI_Smithy_13.bmp");
        HDC uiSmithyUpgrade21 = txLoadImage("Resources\\Images\\UI\\UI_Smithy_21.bmp");
        HDC uiSmithyUpgrade22 = txLoadImage("Resources\\Images\\UI\\UI_Smithy_22.bmp");
        HDC uiSmithyUpgrade23 = txLoadImage("Resources\\Images\\UI\\UI_Smithy_23.bmp");
        HDC uiSmithySelectUpgrade = txLoadImage("Resources\\Images\\UI\\UI_Smithy_SelectUpgrade.bmp");

        HDC uiUpgradeBuying = txLoadImage("Resources\\Images\\UI\\UI_Upgrade_Buying.bmp");

        HDC uiCloudAct1 = txLoadImage("Resources\\Images\\UI\\UI_Cloud_Act1.bmp");
        HDC uiCloudAct2 = txLoadImage("Resources\\Images\\UI\\UI_Cloud_Act2.bmp");
        HDC uiCloudAct3 = txLoadImage("Resources\\Images\\UI\\UI_Cloud_Act3.bmp");
        HDC uiCloudAct4 = txLoadImage("Resources\\Images\\UI\\UI_Cloud_Act4.bmp");
        HDC btnV = txLoadImage("Resources\\Images\\UI\\Buttons\\BTN_V.bmp");
        HDC btnX = txLoadImage("Resources\\Images\\UI\\Buttons\\BTN_X.bmp");

        HDC btnFirstActAction = txLoadImage("Resources\\Images\\UI\\Buttons\\BTN_FirstAct_Action.bmp");
        HDC btnSecondActAction = txLoadImage("Resources\\Images\\UI\\Buttons\\BTN_SecondAct_Action.bmp");
        HDC btnThirdActAction = txLoadImage("Resources\\Images\\UI\\Buttons\\BTN_ThirdAct_Action.bmp");
        HDC btnFourthAndFifthActAction = txLoadImage("Resources\\Images\\UI\\Buttons\\BTN_FourthAndFifthAct_Action.bmp");
        txEnd();
//============================================

        hrLoad(&act, &houseUpgrade, &treesUpgrade, &vegetablesUpgrade);

//===========[ Цикл игры ]============
        while(TRUE)
        {
            time++;
            txBegin();
                painting(layout, act, houseUpgrade, treesUpgrade, vegetablesUpgrade, smithyUpgradeSelect, houseUpgradeSelect, backgroundX1, backgroundX2, menuStage, mapMove, &blacksmithFrame, collectorArray, woodcutterArray, knightArray, archerArray, vegetablesArray, treesArray, backgroundMainMenu, backgroundMenu, backgroundSmithy, backgroundUpgradeFirstLvl, backgroundUpgradeSecondLvl, backgroundUpgradeThirdLvl, backgroundMap, backgroundGame, uiMenu, btnLeft, btnRight, btnSmithy, btnUpgrade, btnMap, uiSmithyBuying, uiSmithySelectUpgrade, uiSmithyUpgrade11, uiSmithyUpgrade12, uiSmithyUpgrade13, uiSmithyUpgrade21, uiSmithyUpgrade22, uiSmithyUpgrade23, uiUpgradeBuying, uiCloudAct1, uiCloudAct2, uiCloudAct3, uiCloudAct4, btnV, btnX, btnFirstActAction, btnSecondActAction, btnThirdActAction, btnFourthAndFifthActAction);
            txEnd();

            if(mapMove == 0)
            {
                keyboardControls(&layout, &act, &houseUpgrade, &treesUpgrade, &vegetablesUpgrade, &smithyUpgradeSelect, &houseUpgradeSelect, &backgroundX1, &backgroundX2, &menuStage, &mapMove, &blacksmithFrame, collectorArray, woodcutterArray, knightArray, archerArray, vegetablesArray, treesArray, newGame, left, right, smithy, upgrade, map, smithyUpgrade11, smithyUpgrade12, smithyUpgrade13, smithyUpgrade21, smithyUpgrade22, smithyUpgrade23, smithyUpgrade31, smithyUpgrade32, smithyUpgrade33, smithyUpgrade41, smithyUpgrade42, smithyUpgrade43, smithyUpgrade51, smithyUpgrade52, smithyUpgrade53, smithyBuy, smithyBack, upgr, upgradeFirstLvl, upgradeSecondLvl, upgradeThirdLvl, upgradeBack, vFirstAct, xFirstAct, vSecondAct, xSecondAct, vThirdAct, xThirdAct, vFourthAct, xFourthAct, vFifthAct, xFifthAct, mapBack, gameFirstAction, gameSecondAction, gameThirdAction, gameFourthAction, gameFifthAction, gameSixthAction, backgroundMainMenu, backgroundMenu, backgroundSmithy, backgroundUpgradeFirstLvl, backgroundUpgradeSecondLvl, backgroundUpgradeThirdLvl, backgroundMap, backgroundGame, uiMenu, btnLeft, btnRight, btnSmithy, btnUpgrade, btnMap, uiSmithyBuying, uiSmithySelectUpgrade, uiSmithyUpgrade11, uiSmithyUpgrade12, uiSmithyUpgrade13, uiSmithyUpgrade21, uiSmithyUpgrade22, uiSmithyUpgrade23, uiUpgradeBuying, uiCloudAct1, uiCloudAct2, uiCloudAct3, uiCloudAct4, btnV, btnX, btnFirstActAction, btnSecondActAction, btnThirdActAction, btnFourthAndFifthActAction);
            }

            
            for(int i = 0; i<6; i++)
            {
                if(layout == 5)
                {
                    if(time%5 == 0)
                    {
                        if(collectorArray[i].GetState() == 1)
                        {
                            for(int i2 = 0; i2 < 6; i2++)
                            {
                                if(vegetablesArray[i2].GetFrame() == 4)
                                {
                                    if(!vegetablesArray[i2].IsCollect())
                                    {
                                        if(collectorArray[i].Collect() == 1)
                                        {
                                            collectorArray[i].SetAnimation(2);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }

            for(int i = 0; i<6; i++)
            {
                if(layout == 5)
                {
                    if(time%3 == 0)
                    {
                        if(collectorArray[i].GetState())
                        {
                            if(collectorArray[i].GetAnimation() != 2)
                            {
                                collectorArray[i].Frames(collectorArray[i].GetFrame());
                                collectorArray[i].SetCoordinate(collectorArray[i].GetX()+7, 194);
                            }
                        }
                    }
                }
            }

            for(int i = 0; i<3; i++)
            {
                if(layout == 5)
                {
                    if(time%5 == 0)
                    {
                        if(woodcutterArray[i].GetState())
                        {
                            woodcutterArray[i].Frames(woodcutterArray[i].GetFrame());
                            woodcutterArray[i].SetCoordinate(woodcutterArray[i].GetX()+7, 194);
                            Sleep(1);
                        }
                    }
                }
            }

            for(int i = 0; i<3; i++)
            {
                if(layout == 5)
                {
                    if(time%5 == 0)
                    {
                        if(archerArray[i].GetState())
                        {
                            archerArray[i].Frames(archerArray[i].GetFrame());
                            archerArray[i].SetCoordinate(archerArray[i].GetX()+7, 530);
                        }
                    }
                }
            }

            for(int i = 0; i<3; i++)
            {
                if(layout == 5)
                {
                    if(time%2 == 0)
                    {
                        if(knightArray[i].GetState())
                        {
                            knightArray[i].Frames(knightArray[i].GetFrame());
                            knightArray[i].SetCoordinate(knightArray[i].GetX()+7, 530);
                        }
                    }
                }
            }
            
            if(layout == 5)
            {
                if(time%20 == 0)
                {
                    for(int i = 0; i<6; i++)
                    {
                        if(rand()%3+1 == 1)
                        {
                            vegetablesArray[i].Frames(vegetablesArray[i].GetFrame());
                        }
                    }
                }
            }
            
        }
    }
//====================================

    