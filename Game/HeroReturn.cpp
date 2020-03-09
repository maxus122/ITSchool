    //Библиотеки
    #include "Resources\\TXLib.h"
    #include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
    #define LEN 100

    void Painting();
    void KeyboardControls();
    void Save();
    void Load();
    
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

        //Переменные
        int Layout = 0;
        int Act = 0;
        int BackgroundX1 = 0;
        int BackgroundX2 = 1296;
        int MenuStage = 2;
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

        HDC BACKGROUNDUpgrade_FirstLvl = txLoadImage("Resources\\Maps\\BACKGROUND_Upgrade_FirstLvl.bmp");
        HDC BACKGROUNDUpgradeSecondLvl = txLoadImage("Resources\\Maps\\BACKGROUND_Upgrade_SecondLvl.bmp");
        HDC BACKGROUNDUpgradeThirdLvl = txLoadImage("Resources\\Maps\\BACKGROUND_Upgrade_ThirdLvl.bmp");
        HDC BACKGROUND_Upgrade_Buying = txLoadImage("Resources\\Maps\\BACKGROUND_Upgrade_Buying.bmp");

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
        Button BTNLeft(36, 324, 80, 395);
        Button BTNRight(1225, 324, 1269, 395);
        Button BTNSmithy(941, 0, 1036, 95);
        Button BTNUpgrade(941, 0, 1036, 95);
        Button BTNMap(941, 0, 1036, 95);
        Button BTNUpgr(431, 557, 646, 611);

        Button BTNVFirstAct();
        Button BTNXFirstAct();
        Button BTNVSecondAct();
        Button BTNXSecondAct();
        Button BTNVThirdAct();
        Button BTNXThirdAct();
        Button BTNVFourthAct();
        Button BTNXFourthAct();
        Button BTNVFifthAct();
        Button BTNXFifthAct();

        Button BTNFirstActAction();
        Button BTNSecondActAction();
        Button BTNThirdActAction();
        Button BTNFourthAndFifthActAction();


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
        txSetFillColor(TX_WHITE);
        txClear();
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