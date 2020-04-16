    #include "GraphLib.h"
    
    int main()
    {
        txCreateWindow(1280, 720);
        txSetFillColor(TX_WHITE);
        txFloodFill(0, 0, FLOODFILLBORDER);
        txTextCursor(FALSE);

        txBegin();
        for(double x = 640; x<1280; x = x+0.0001)
        {
            txSetPixel(x, (Parabola(x-639)-720)*(-1), TX_BLACK);
        }

        for(double x = 640; x>0; x = x-0.001)
        {
            txSetPixel(x, (Parabola(x-641)-720)*(-1), TX_BLACK);
        }
        txEnd();
    }