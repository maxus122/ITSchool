    #include "Resources\\TXLib.h"
    #include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
    #define LEN 100

    void painting(int Level, int BackgroundX1, int BackgroundX2, int MapMove, int MenuStage, HDC MainMenuMap, HDC MenuMap, HDC SmithyMap, HDC GameMap, HDC UI, HDC MainMenuBTN_Right, HDC MainMenuBTN_Left, HDC MainMenuBTN_Smithy, HDC MainMenuBTN_Boat);
    void keyboardControls(int *Level, int *BackgroundX1, int *BackgroundX2, int *MapMove, int *MenuStage, RECT MainMenuMapBTN_NewGame, RECT MainMenuMapBTN_Left, RECT MainMenuMapBTN_Right, RECT MainMenuMapBTN_Smithy, RECT MainMenuMapBTN_Boat, HDC MainMenuMap, HDC MenuMap, HDC SmithyMap, HDC GameMap, HDC UI, HDC MainMenuBTN_Right, HDC MainMenuBTN_Left, HDC MainMenuBTN_Smithy, HDC MainMenuBTN_Boat);

    int main()
    {
        txCreateWindow(1296, 720);
        txSetFillColor(TX_WHITE);
        txFloodFill(0, 0, FLOODFILLBORDER);

        HDC MainMenuMap = txLoadImage("Resources\\Maps\\MainMenuMap.bmp");
        HDC MenuMap = txLoadImage("Resources\\Maps\\MenuMap.bmp");
        HDC SmithyMap = txLoadImage("Resources\\Maps\\SmithyMap.bmp");
        HDC GameMap = txLoadImage("Resources\\Maps\\GameMap.bmp");
        HDC UI = txLoadImage("Resources\\Maps\\UI.bmp");
        HDC MainMenuBTN_Right = txLoadImage("Resources\\Maps\\MainMenuBTN_Right.bmp");
        HDC MainMenuBTN_Left = txLoadImage("Resources\\Maps\\MainMenuBTN_Left.bmp");
        HDC MainMenuBTN_Smithy = txLoadImage("Resources\\Maps\\MainMenuBTN_Smithy.bmp");
        HDC MainMenuBTN_Boat = txLoadImage("Resources\\Maps\\MainMenuBTN_Boat.bmp");
        

        int Level = 0;
        int MenuStage = 2;
        int BackgroundX1 = 0;
        int BackgroundX2 = 1296;
        int MapMove = 0;

        RECT MainMenuMapBTN_NewGame = {431, 305, 861, 413};
        RECT MainMenuMapBTN_Left = {36, 324, 80, 395};
        RECT MainMenuMapBTN_Right = {1225, 324, 1269, 395};
        RECT MainMenuMapBTN_Smithy = {966, 6, 1049, 89};
        RECT MainMenuMapBTN_Boat = {955, 8, 1049, 124};

        while(true)
        {
            txBegin();
            painting(Level, BackgroundX1, BackgroundX2, MapMove, MenuStage, MainMenuMap, MenuMap, SmithyMap, GameMap, UI, MainMenuBTN_Right, MainMenuBTN_Left, MainMenuBTN_Smithy, MainMenuBTN_Boat);
            txEnd();

            if(MapMove == 0)
            {
                keyboardControls(&Level, &BackgroundX1, &BackgroundX2, &MapMove, &MenuStage, MainMenuMapBTN_NewGame, MainMenuMapBTN_Left, MainMenuMapBTN_Right, MainMenuMapBTN_Smithy, MainMenuMapBTN_Boat, MainMenuMap, MenuMap, SmithyMap, GameMap, UI, MainMenuBTN_Right, MainMenuBTN_Left, MainMenuBTN_Smithy, MainMenuBTN_Boat);
            }

            Sleep(1);
        }
    }

    void painting(int Level, int BackgroundX1, int BackgroundX2, int MapMove, int MenuStage, HDC MainMenuMap, HDC MenuMap, HDC SmithyMap, HDC GameMap, HDC UI, HDC MainMenuBTN_Right, HDC MainMenuBTN_Left, HDC MainMenuBTN_Smithy, HDC MainMenuBTN_Boat)
    {
        txSetFillColor(TX_WHITE);
        txClear();

        if(Level == 0)
        {
            txBitBlt(txDC(), 0, 0, BackgroundX2, 720, MainMenuMap, BackgroundX1, 0);
        }

        if(Level == 1)
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
            if(BackgroundX1 == 3870)
            {
                MenuStage = 3;
            }

            txBitBlt(txDC(), 0, 0, BackgroundX2, 720, MenuMap, BackgroundX1, 0);
            if(MapMove != 1)
            {
                txAlphaBlend(txDC(), 0, 0, 1296, 720, UI, 0, 0, 1);
                if(MenuStage == 0)
                {
                    txAlphaBlend(txDC(), 0, 0, 1296, 720, MainMenuBTN_Right, 0, 0, 1);
                }
                if(MenuStage == 1)
                {
                    txAlphaBlend(txDC(), 0, 0, 1296, 720, MainMenuBTN_Right, 0, 0, 1);
                    txAlphaBlend(txDC(), 0, 0, 1296, 720, MainMenuBTN_Left, 0, 0, 1);
                    txAlphaBlend(txDC(), 0, 0, 1296, 720, MainMenuBTN_Smithy, 0, 0, 1);
                }
                if(MenuStage == 2)
                {
                    txAlphaBlend(txDC(), 0, 0, 1296, 720, MainMenuBTN_Right, 0, 0, 1);
                    txAlphaBlend(txDC(), 0, 0, 1296, 720, MainMenuBTN_Left, 0, 0, 1);
                }
                if(MenuStage == 3)
                {
                    txAlphaBlend(txDC(), 0, 0, 1296, 720, MainMenuBTN_Left, 0, 0, 1);
                    txAlphaBlend(txDC(), 0, 0, 1296, 720, MainMenuBTN_Boat, 0, 0, 1);
                }
            }
        }

        if(Level == 3)
        {
            txBitBlt(txDC(), 0, 0, 1296, 720, SmithyMap, 0, 0);
        }

        if(Level == 4)
        {
            txBitBlt(txDC(), 0, 0, 1296, 720, GameMap, 0, 0);
        }
    }

    void keyboardControls(int *Level, int *BackgroundX1, int *BackgroundX2, int *MapMove, int *MenuStage, RECT MainMenuMapBTN_NewGame, RECT MainMenuMapBTN_Left, RECT MainMenuMapBTN_Right, RECT MainMenuMapBTN_Smithy, RECT MainMenuMapBTN_Boat, HDC MainMenuMap, HDC MenuMap, HDC SmithyMap, HDC GameMap, HDC UI, HDC MainMenuBTN_Right, HDC MainMenuBTN_Left, HDC MainMenuBTN_Smithy, HDC MainMenuBTN_Boat)
    {
        if (*Level == 0)
        {
            if (GetAsyncKeyState(VK_SPACE))
            {
                if(*BackgroundX1 != 1290)
                {
                    *MapMove = 1;
                    for(int i=0; i<129; i++)
                    {
                        *BackgroundX1 = *BackgroundX1+10;
                        *BackgroundX2 = *BackgroundX2+10;

                        txBegin();
                        painting(*Level, *BackgroundX1, *BackgroundX2, *MapMove, *MenuStage, MainMenuMap, MenuMap, SmithyMap, GameMap, UI, MainMenuBTN_Right, MainMenuBTN_Left, MainMenuBTN_Smithy, MainMenuBTN_Boat);
                        txEnd();
                    }
                    Sleep(500);
                    *MapMove = 0;
                }
            }
        
            if (GetAsyncKeyState(VK_LBUTTON))
            {
                if(*BackgroundX1 == 1290)
                {
                    if(In (txMousePos(), MainMenuMapBTN_NewGame))
                    {
                        txSetFillColor(RGB(0, 0, 0));
                        txSetColor(RGB(0, 0, 0));
                        txClear();
                        *BackgroundX1 = 2580; 
                        *BackgroundX2 = 3870;
                        Sleep(500);
                        *Level = 1;
                        *MenuStage = 2;
                        txSetFillColor(RGB(255, 255, 255));
                        txSetColor(RGB(255, 255, 255));
                    }
                }
            }
        }

        if (*Level == 1)
        {
            if (GetAsyncKeyState(VK_LBUTTON))
            {
                if(*MenuStage == 0)
                {
                    if(In (txMousePos(), MainMenuMapBTN_Right))
                    {
                        *MapMove = 1;
                        for(int i=0; i<129; i++)
                        {
                            *BackgroundX1 = *BackgroundX1+10;
                            *BackgroundX2 = *BackgroundX2+10;

                            txBegin();
                            painting(*Level, *BackgroundX1, *BackgroundX2, *MapMove, *MenuStage, MainMenuMap, MenuMap, SmithyMap, GameMap, UI, MainMenuBTN_Right, MainMenuBTN_Left, MainMenuBTN_Smithy, MainMenuBTN_Boat);
                            txEnd();
                        }
                        *MenuStage = 1;
                        Sleep(500);
                        *MapMove = 0;
                    }
                }

                if(*MenuStage == 1)
                {
                    if(In (txMousePos(), MainMenuMapBTN_Left))
                    {
                        *MapMove = 1;
                        for(int i=0; i<129; i++)
                        {
                            *BackgroundX1 = *BackgroundX1-10;
                            *BackgroundX2 = *BackgroundX2-10;

                            txBegin();
                            painting(*Level, *BackgroundX1, *BackgroundX2, *MapMove, *MenuStage, MainMenuMap, MenuMap, SmithyMap, GameMap, UI, MainMenuBTN_Right, MainMenuBTN_Left, MainMenuBTN_Smithy, MainMenuBTN_Boat);
                            txEnd();
                        }
                        *MenuStage = 0;
                        Sleep(500);
                        *MapMove = 0;
                    }

                    if(In (txMousePos(), MainMenuMapBTN_Right))
                    {
                        *MapMove = 1;
                        for(int i=0; i<129; i++)
                        {
                            *BackgroundX1 = *BackgroundX1+10;
                            *BackgroundX2 = *BackgroundX2+10;

                            txBegin();
                            painting(*Level, *BackgroundX1, *BackgroundX2, *MapMove, *MenuStage, MainMenuMap, MenuMap, SmithyMap, GameMap, UI, MainMenuBTN_Right, MainMenuBTN_Left, MainMenuBTN_Smithy, MainMenuBTN_Boat);
                            txEnd();
                        }
                        *MenuStage = 2;
                        Sleep(500);
                        *MapMove = 0;
                    }
                }

                if(*MenuStage == 2)
                {
                    if(In (txMousePos(), MainMenuMapBTN_Left))
                    {
                        *MapMove = 1;
                        for(int i=0; i<129; i++)
                        {
                            *BackgroundX1 = *BackgroundX1-10;
                            *BackgroundX2 = *BackgroundX2-10;

                            txBegin();
                            painting(*Level, *BackgroundX1, *BackgroundX2, *MapMove, *MenuStage, MainMenuMap, MenuMap, SmithyMap, GameMap, UI, MainMenuBTN_Right, MainMenuBTN_Left, MainMenuBTN_Smithy, MainMenuBTN_Boat);
                            txEnd();
                        }
                        Sleep(500);
                        *MapMove = 0;
                    }

                    if(In (txMousePos(), MainMenuMapBTN_Right))
                    {
                        *MapMove = 1;
                        for(int i=0; i<129; i++)
                        {
                            *BackgroundX1 = *BackgroundX1+10;
                            *BackgroundX2 = *BackgroundX2+10;

                            txBegin();
                            painting(*Level, *BackgroundX1, *BackgroundX2, *MapMove, *MenuStage, MainMenuMap, MenuMap, SmithyMap, GameMap, UI, MainMenuBTN_Right, MainMenuBTN_Left, MainMenuBTN_Smithy, MainMenuBTN_Boat);
                            txEnd();
                        }
                        Sleep(500);
                        *MapMove = 0;
                    }

                    if(In (txMousePos(), MainMenuMapBTN_Smithy))
                    {
                        txSetFillColor(RGB(0, 0, 0));
                        txSetColor(RGB(0, 0, 0));
                        txClear();
                        *BackgroundX1 = 0; 
                        *BackgroundX2 = 1296;
                        Sleep(500);
                        *Level = 3;
                        txSetFillColor(RGB(255, 255, 255));
                        txSetColor(RGB(255, 255, 255));
                    }
                }

                if(*MenuStage == 3)
                {
                    if(In (txMousePos(), MainMenuMapBTN_Left))
                    {
                        *MapMove = 1;
                        for(int i=0; i<129; i++)
                        {
                            *BackgroundX1 = *BackgroundX1-10;
                            *BackgroundX2 = *BackgroundX2-10;

                            txBegin();
                            painting(*Level, *BackgroundX1, *BackgroundX2, *MapMove, *MenuStage, MainMenuMap, MenuMap, SmithyMap, GameMap, UI, MainMenuBTN_Right, MainMenuBTN_Left, MainMenuBTN_Smithy, MainMenuBTN_Boat);
                            txEnd();
                        }
                        *MenuStage == 2;
                        Sleep(500);
                        *MapMove = 0;
                    }

                    if(In (txMousePos(), MainMenuMapBTN_Boat))
                    {
                        txSetFillColor(RGB(0, 0, 0));
                        txSetColor(RGB(0, 0, 0));
                        txClear();
                        *BackgroundX1 = 0; 
                        *BackgroundX2 = 1296;
                        *Level = 4;
                        Sleep(500);
                        txSetFillColor(RGB(255, 255, 255));
                        txSetColor(RGB(255, 255, 255));
                    }
                }
            }
        }

        if (GetAsyncKeyState(VK_RIGHT))
        {
            if(*BackgroundX1 != 3870)
            {
                *MapMove = 1;
                for(int i=0; i<129; i++)
                {
                    *BackgroundX1 = *BackgroundX1+10;
                    *BackgroundX2 = *BackgroundX2+10;

                    txBegin();
                    painting(*Level, *BackgroundX1, *BackgroundX2, *MapMove, *MenuStage, MainMenuMap, MenuMap, SmithyMap, GameMap, UI, MainMenuBTN_Right, MainMenuBTN_Left, MainMenuBTN_Smithy, MainMenuBTN_Boat);
                    txEnd();
                }
                Sleep(500);
                *MapMove = 0;
            }
        }

        if (GetAsyncKeyState(VK_LEFT))
        {
            if(*BackgroundX1 != 0)
            {
                *MapMove = 1;
                for(int i=0; i<129; i++)
                {
                    *BackgroundX1 = *BackgroundX1-10;
                    *BackgroundX2 = *BackgroundX2-10;

                    txBegin();
                    painting(*Level, *BackgroundX1, *BackgroundX2, *MapMove, *MenuStage, MainMenuMap, MenuMap, SmithyMap, GameMap, UI, MainMenuBTN_Right, MainMenuBTN_Left, MainMenuBTN_Smithy, MainMenuBTN_Boat);
                    txEnd();
                }
                Sleep(500);
                *MapMove = 0;
            }
        }
    }
