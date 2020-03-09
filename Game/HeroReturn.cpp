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

        public:
            Button(int valueFirstX, int valueFirstY, int valueSecondX, int valueSecondY)
            {
                firstX = valueFirstX; 
                firstY = valueFirstY;
                secondX = valueSecondX; 
                secondY = valueSecondY;
            }

            bool IsClicked()
            {
                RECT Collision = {firstX, firstY, secondX, secondY};
                if(GetAsyncKeyState(VK_LBUTTON))
                {
                    if(In(txMousePos(), Collision))
                    {   
                        return TRUE;
                    }
                }
            }
    };

    void Painting(
        int Layout, int Act, int HouseUpgrade, int HouseUpgradeSelect, 
        int BackgroundX1, int BackgroundX2, int MenuStage, int MapMove, 

        HDC BACKGROUNDMainMenu, HDC BACKGROUNDMenu, HDC UIMenu, 
        HDC BTNLeft, HDC BTNRight, HDC BTNSmithy, HDC BTNUpgrade, HDC BTNMap,
        HDC BACKGROUNDSmithy, HDC BACKGROUNDUpgradeFirstLvl, HDC BACKGROUNDUpgradeSecondLvl, 
        HDC BACKGROUNDUpgradeThirdLvl, HDC BACKGROUNDUpgradeBuying, HDC BACKGROUNDMap, 
        HDC UICloudAct1, HDC UICloudAct2, HDC UICloudAct3, HDC UICloudAct4, HDC BTNV, HDC BTNX,
        HDC BACKGROUNDGame, HDC BACKGROUNDFirstHouse, HDC BACKGROUNDSecondHouse, HDC BACKGROUNDThirdHouse, 
        HDC BTNFirstActAction, HDC BTNSecondActAction, HDC BTNThirdActAction, HDC BTNFourthAndFifthActAction);

    void KeyboardControls(
        int *Layout, int *Act, int *HouseUpgrade, int *HouseUpgradeSelect, 
        int *BackgroundX1, int *BackgroundX2, int *MenuStage, int *MapMove,

        Button NewGame, Button Left, Button Righ, Button Smithy, Button Upgrade, 
        Button Map, Button Upgr, Button UpgradeBack, Button VFirstAct,
        Button XFirstAct, Button VSecondAct, Button XSecondAct, Button VThirdAct, 
        Button XThirdAct, Button VFourthAct, Button XFourthAct, Button VFifthAct, 
        Button XFifthAct, Button MapBack, Button GameFirstAction, Button GameSecondAction, 
        Button GameThirdAction, Button GameFourthAction, Button GameFifthAction, Button GameSixthAction,

        HDC BACKGROUNDMainMenu, HDC BACKGROUNDMenu, HDC UIMenu, 
        HDC BTNLeft, HDC BTNRight, HDC BTNSmithy, HDC BTNUpgrade, HDC BTNMap,
        HDC BACKGROUNDSmithy, HDC BACKGROUNDUpgradeFirstLvl, HDC BACKGROUNDUpgradeSecondLvl, 
        HDC BACKGROUNDUpgradeThirdLvl, HDC BACKGROUNDUpgradeBuying, HDC BACKGROUNDMap, 
        HDC UICloudAct1, HDC UICloudAct2, HDC UICloudAct3, HDC UICloudAct4, HDC BTNV, HDC BTNX,
        HDC BACKGROUNDGame, HDC BACKGROUNDFirstHouse, HDC BACKGROUNDSecondHouse, HDC BACKGROUNDThirdHouse, 
        HDC BTNFirstActAction, HDC BTNSecondActAction, HDC BTNThirdActAction, HDC BTNFourthAndFifthActAction);
    void Save();
    void Load();
    
    int main()
    {
        txCreateWindow(1296, 720);
        txSetFillColor(TX_WHITE);
        txFloodFill(0, 0, FLOODFILLBORDER);

        //Переменные
        int Layout = 0;
        int Act = 1;
        int HouseUpgrade = 0; 
        int HouseUpgradeSelect = 1;
        int BackgroundX1 = 0;
        int BackgroundX2 = 1296;
        int MenuStage = 1;
        int MapMove = 0;

        //Загрузка картинок
        HDC BACKGROUNDMainMenu = txLoadImage("Resources\\Maps\\BACKGROUND_MainMenu.bmp");

        HDC BACKGROUNDMenu = txLoadImage("Resources\\Maps\\BACKGROUND_Menu.bmp");
        HDC UIMenu = txLoadImage("Resources\\Maps\\UI_Menu.bmp");
        HDC BTNLeft = txLoadImage("Resources\\Maps\\BTN_Left.bmp");
        HDC BTNRight = txLoadImage("Resources\\Maps\\BTN_Right.bmp");
        HDC BTNSmithy = txLoadImage("Resources\\Maps\\BACKGROUND_Menu.bmp");   
        HDC BTNUpgrade = txLoadImage("Resources\\Maps\\BACKGROUND_Menu.bmp");
        HDC BTNMap = txLoadImage("Resources\\Maps\\BTN_Map.bmp");

        HDC BACKGROUNDSmithy = txLoadImage("Resources\\Maps\\BACKGROUND_Smithy.bmp");

        HDC BACKGROUNDUpgradeFirstLvl = txLoadImage("Resources\\Maps\\BACKGROUND_Upgrade_FirstLvl.bmp");
        HDC BACKGROUNDUpgradeSecondLvl = txLoadImage("Resources\\Maps\\BACKGROUND_Upgrade_SecondLvl.bmp");
        HDC BACKGROUNDUpgradeThirdLvl = txLoadImage("Resources\\Maps\\BACKGROUND_Upgrade_ThirdLvl.bmp");
        HDC BACKGROUNDUpgradeBuying = txLoadImage("Resources\\Maps\\BACKGROUND_Upgrade_Buying.bmp");

        HDC BACKGROUNDMap = txLoadImage("Resources\\Maps\\BACKGROUND_Map.bmp"); 
        HDC UICloudAct1 = txLoadImage("Resources\\Maps\\UI_Cloud_Act1.bmp");
        HDC UICloudAct2 = txLoadImage("Resources\\Maps\\UI_Cloud_Act2.bmp");
        HDC UICloudAct3 = txLoadImage("Resources\\Maps\\UI_Cloud_Act3.bmp");
        HDC UICloudAct4 = txLoadImage("Resources\\Maps\\UI_Cloud_Act4.bmp");
        HDC BTNV = txLoadImage("Resources\\Maps\\BTN_V.bmp");
        HDC BTNX = txLoadImage("Resources\\Maps\\BTN_X.bmp");
        
        HDC BACKGROUNDGame = txLoadImage("Resources\\Maps\\BACKGROUND_Game.bmp"); 
        HDC BACKGROUNDFirstHouse = txLoadImage("Resources\\Maps\\UI_Cloud_Act2.bmp");
        HDC BACKGROUNDSecondHouse = txLoadImage("Resources\\Maps\\BACKGROUND_SecondHouse.bmp");
        HDC BACKGROUNDThirdHouse = txLoadImage("Resources\\Maps\\BACKGROUND_ThirdHouse.bmp");
        HDC BTNFirstActAction = txLoadImage("Resources\\Maps\\BTN_FirstAct_Action.bmp");
        HDC BTNSecondActAction = txLoadImage("Resources\\Maps\\BTN_SecondAct_Action.bmp");
        HDC BTNThirdActAction = txLoadImage("Resources\\Maps\\BTN_ThirdAct_Action.bmp");
        HDC BTNFourthAndFifthActAction = txLoadImage("Resources\\Maps\\BTN_FourthAndFifthAct_Action.bmp");

        //Кнопки
        Button NewGame(431, 306, 861, 414); 
        Button Left(36, 324, 80, 395); 
        Button Right(1225, 324, 1269, 395);
        Button Smithy(941, 0, 1036, 95);
        Button Upgrade(941, 0, 1036, 95);
        Button Map(941, 0, 1036, 95);
        Button Upgr(431, 557, 646, 611);
        Button UpgradeBack(115, 613, 221, 645);

        Button VFirstAct(265, 488, 375, 567);
        Button XFirstAct(265, 479, 375, 578);
        Button VSecondAct(564, 388, 672, 467);
        Button XSecondAct(562, 379, 672, 478);
        Button VThirdAct(320, 252, 430, 331);
        Button XThirdAct(320, 243, 430, 342);
        Button VFourthAct(920, 476, 1030, 555);
        Button XFourthAct(920, 467, 1030, 566);
        Button VFifthAct(879, 229, 989, 308);
        Button XFifthAct(879, 220, 989, 319);
        Button MapBack(534, 610, 759, 703);

        Button GameFirstAction(369, 630, 458, 719);
        Button GameSecondAction(462, 630, 551, 719);
        Button GameThirdAction(555, 630, 644, 719);
        Button GameFourthAction(651, 630, 740, 719);
        Button GameFifthAction(744, 630, 833, 719);
        Button GameSixthAction(837, 630, 926, 719);

        while(TRUE)
        {
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
                Painting(Layout, Act, HouseUpgrade, HouseUpgradeSelect, BackgroundX1, BackgroundX2, MenuStage, MapMove, BACKGROUNDMainMenu, BACKGROUNDMenu, UIMenu, BTNLeft, BTNRight, BTNSmithy, BTNUpgrade, BTNMap,BACKGROUNDSmithy, BACKGROUNDUpgradeFirstLvl, BACKGROUNDUpgradeSecondLvl, BACKGROUNDUpgradeThirdLvl, BACKGROUNDUpgradeBuying, BACKGROUNDMap, UICloudAct1, UICloudAct2, UICloudAct3, UICloudAct4, BTNV, BTNX,BACKGROUNDGame, BACKGROUNDFirstHouse, BACKGROUNDSecondHouse, BACKGROUNDThirdHouse, BTNFirstActAction, BTNSecondActAction, BTNThirdActAction, BTNFourthAndFifthActAction);
            txEnd();

            if(MapMove == 0)
            {
                KeyboardControls(&Layout, &Act, &HouseUpgrade, &HouseUpgradeSelect, &BackgroundX1, &BackgroundX2, &MenuStage, &MapMove, NewGame, Left, Right, Smithy, Upgrade, Map, Upgr, UpgradeBack, VFirstAct, XFirstAct, VSecondAct, XSecondAct, VThirdAct, XThirdAct, VFourthAct, XFourthAct, VFifthAct, XFifthAct, MapBack, GameFirstAction, GameSecondAction, GameThirdAction, GameFourthAction, GameFifthAction, GameSixthAction, BACKGROUNDMainMenu, BACKGROUNDMenu, UIMenu, BTNLeft, BTNRight, BTNSmithy, BTNUpgrade, BTNMap,BACKGROUNDSmithy, BACKGROUNDUpgradeFirstLvl, BACKGROUNDUpgradeSecondLvl, BACKGROUNDUpgradeThirdLvl, BACKGROUNDUpgradeBuying, BACKGROUNDMap, UICloudAct1, UICloudAct2, UICloudAct3, UICloudAct4, BTNV, BTNX,BACKGROUNDGame, BACKGROUNDFirstHouse, BACKGROUNDSecondHouse, BACKGROUNDThirdHouse, BTNFirstActAction, BTNSecondActAction, BTNThirdActAction, BTNFourthAndFifthActAction);
            }

            Sleep(1);
        }
        
    }

    void Painting(int Layout, int Act, int HouseUpgrade, int HouseUpgradeSelect, int BackgroundX1, int BackgroundX2, int MenuStage, int MapMove, HDC BACKGROUNDMainMenu, HDC BACKGROUNDMenu, HDC UIMenu, HDC BTNLeft, HDC BTNRight, HDC BTNSmithy, HDC BTNUpgrade, HDC BTNMap, HDC BACKGROUNDSmithy, HDC BACKGROUNDUpgradeFirstLvl, HDC BACKGROUNDUpgradeSecondLvl, HDC BACKGROUNDUpgradeThirdLvl, HDC BACKGROUNDUpgradeBuying, HDC BACKGROUNDMap, HDC UICloudAct1, HDC UICloudAct2, HDC UICloudAct3, HDC UICloudAct4, HDC BTNV, HDC BTNX, HDC BACKGROUNDGame, HDC BACKGROUNDFirstHouse, HDC BACKGROUNDSecondHouse, HDC BACKGROUNDThirdHouse, HDC BTNFirstActAction, HDC BTNSecondActAction, HDC BTNThirdActAction, HDC BTNFourthAndFifthActAction)
    {
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

        if(Layout == 3)
        {
            txBitBlt(txDC(), 0, 0, 1296, 720, BACKGROUNDSmithy, 0, 0);
        }

        if(Layout == 4)
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
    }

    void KeyboardControls(int *Layout, int *Act, int *HouseUpgrade, int *HouseUpgradeSelect, int *BackgroundX1, int *BackgroundX2, int *MenuStage, int *MapMove, Button NewGame, Button Left, Button Righ, Button Smithy, Button Upgrade, Button Map, Button Upgr, Button UpgradeBack, Button VFirstAct, Button XFirstAct, Button VSecondAct, Button XSecondAct, Button VThirdAct, Button XThirdAct, Button VFourthAct, Button XFourthAct, Button VFifthAct, Button XFifthAct, Button MapBack, Button GameFirstAction, Button GameSecondAction, Button GameThirdAction, Button GameFourthAction, Button GameFifthAction, Button GameSixthAction, HDC BACKGROUNDMainMenu, HDC BACKGROUNDMenu, HDC UIMenu, HDC BTNLeft, HDC BTNRight, HDC BTNSmithy, HDC BTNUpgrade, HDC BTNMap, HDC BACKGROUNDSmithy, HDC BACKGROUNDUpgradeFirstLvl, HDC BACKGROUNDUpgradeSecondLvl, HDC BACKGROUNDUpgradeThirdLvl, HDC BACKGROUNDUpgradeBuying, HDC BACKGROUNDMap, HDC UICloudAct1, HDC UICloudAct2, HDC UICloudAct3, HDC UICloudAct4, HDC BTNV, HDC BTNX, HDC BACKGROUNDGame, HDC BACKGROUNDFirstHouse, HDC BACKGROUNDSecondHouse, HDC BACKGROUNDThirdHouse, HDC BTNFirstActAction, HDC BTNSecondActAction, HDC BTNThirdActAction, HDC BTNFourthAndFifthActAction)
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
                        Painting(*Layout, *Act, *HouseUpgrade, *HouseUpgradeSelect, *BackgroundX1, *BackgroundX2, *MenuStage, *MapMove, BACKGROUNDMainMenu, BACKGROUNDMenu, UIMenu, BTNLeft, BTNRight, BTNSmithy, BTNUpgrade, BTNMap,BACKGROUNDSmithy, BACKGROUNDUpgradeFirstLvl, BACKGROUNDUpgradeSecondLvl, BACKGROUNDUpgradeThirdLvl, BACKGROUNDUpgradeBuying, BACKGROUNDMap, UICloudAct1, UICloudAct2, UICloudAct3, UICloudAct4, BTNV, BTNX,BACKGROUNDGame, BACKGROUNDFirstHouse, BACKGROUNDSecondHouse, BACKGROUNDThirdHouse, BTNFirstActAction, BTNSecondActAction, BTNThirdActAction, BTNFourthAndFifthActAction);
                        txEnd();
                    }
                    Sleep(500);
                    *MapMove = 0;
                }
            }
        }
        
        if (NewGame.IsClicked())
        {
            if (*Layout == 0)
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
        }
    }

    void Save()
    {

    }

    void Load()
    {

    }