    #include "GraphLib.h"
    
    int main()
    {
        txCreateWindow(1296, 720);
        txSetFillColor(TX_WHITE);
        txFloodFill(0, 0, FLOODFILLBORDER);
        txTextCursor(FALSE);

        for(double x = 0; x<1296; x = x+0.0001)
        {
            txSetPixel(x+648, (Parabola(x)-720)*(-1), TX_BLACK);
        }
    }