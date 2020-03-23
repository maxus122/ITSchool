    #include "Resources\\Libs\\HeRLib.h"

    int main()
    {
        txCreateWindow(1296, 720);
        txSetFillColor(TX_WHITE);
        txFloodFill(0, 0, FLOODFILLBORDER);

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

        COLORREF **BACKGROUND_MainMenu = loadImage(0, 0, 1296, 720, "Objects\\BACKGROUND_FirstHouse");
        
        txSetColor(TX_RED, 3);
        txLine(1000, 200, 1100, 200);
        Sleep(2000);
        drawingBackground(BACKGROUND_MainMenu);
    
        /*for (int i=0;i<720;i++)
        {
            delete[]BACKGROUND_MainMenu[i];
        }
        delete[]BACKGROUND_MainMenu;*/
    }