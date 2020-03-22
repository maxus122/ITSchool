    #include "Lib.h"

    int main()
    {
        txCreateWindow(1296, 720);
        txSetFillColor(TX_WHITE);
        txFloodFill(0, 0, FLOODFILLBORDER);

        char Layout[LEN];
        strcpy(Layout, "Image");
        GraphicsEngine(0, 0, 1296, 720, Layout);
        return 0;
    }


