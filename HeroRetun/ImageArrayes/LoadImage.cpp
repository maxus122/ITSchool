    #include "Hero\\TXLib.h"
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #define LEN 200000

    int main()
    {
        txCreateWindow(1296, 720);
        txSetFillColor(TX_WHITE);
        txFloodFill(0, 0, FLOODFILLBORDER);

        HDC image = txLoadImage("Hero\\Archer\\Archer_0_1_1.bmp");
        txBitBlt(txDC(), 0, 0, txGetExtentX(image), 90, image);

    




        txDeleteDC(image);
    }