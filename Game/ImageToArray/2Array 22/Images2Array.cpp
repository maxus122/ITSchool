    #include "InOutPut\\TXLib.h"
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #define LEN 200000

    int main()
    {
        txCreateWindow(1296, 720);
        txSetFillColor(TX_WHITE);
        txFloodFill(0, 0, FLOODFILLBORDER);
        
        char Name[LEN];
        char ImageText[LEN];
        strcpy(Name, "Image");
        strcat(ImageText, "InOutPut\\");
        strcat(ImageText, Name);
        strcat(ImageText, ".bmp");
        txBegin();

        HDC image = txLoadImage(ImageText);


        txBitBlt(txDC(), 0, 0, 1296, 720, image, 0, 0);

        COLORREF **Pixels = new COLORREF*[1296]; 
        for(int i = 0; i<1296; i++)
        {
            Pixels[i] = new COLORREF[720];
            for(int j=0; j<720; j++)
            {
                Pixels[i][j] = txGetPixel(i, j);
            }
        }
        txClear();
        txEnd();

        for(int y = 0; y<720; y++)
        {
            for(int x = 0; x<1296; x++)
            {
                txSetPixel(x, y, Pixels[x][y]);
            }
        }
            
        for(int i = 0; i < 720; i++)
        {
            delete[]Pixels[i]; 
        }
        delete [] Pixels;

        return 0;
    }