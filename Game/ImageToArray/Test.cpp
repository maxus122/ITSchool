    #include "InOutPut\\TXLib.h"
    #include "InOutPut\\Test.h"
    #include <stdio.h>
    #include <stdlib.h>
    #include <time.h>

    void Drawing();

    int main()
    {
        txCreateWindow(1296, 720);
        txSetFillColor(TX_WHITE);
        txFloodFill(0, 0, FLOODFILLBORDER);
        
        Drawing();
    }

    