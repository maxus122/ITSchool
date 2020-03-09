    #include "Resources\\TXLib.h"
    #include <stdio.h>
    #include <stdlib.h>
    #include <time.h>

    void painting();
    void keyboardControls();

    int main()
    {
        txCreateWindow(1296, 720);
        txSetFillColor(TX_WHITE);
        txFloodFill(0, 0, FLOODFILLBORDER);

        while(true)
        {
            txBegin();
            painting();
            txEnd();
            
            keyboardControls();
            Sleep(1);
        }
    }

    void painting()
    {
        
    }

    void keyboardControls()
    {

    }