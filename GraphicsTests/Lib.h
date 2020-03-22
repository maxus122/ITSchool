    #include "TXLib.h"
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #define LEN 200000

    void GraphicsEngine(int x, int y, int width, int height, char *image)
    {
        char ImageText[LEN];
        strcat(ImageText, "InOutPut\\");
        strcat(ImageText, image);
        strcat(ImageText, ".bmp");

        txBegin();
        HDC Image = txLoadImage(ImageText);
        txBitBlt(txDC(), x, y, width, height, Image, 0, 0);

        COLORREF **Pixels = new COLORREF*[width]; 
        for(int i = 0; i<width; i++)
        {
            Pixels[i] = new COLORREF[height];
            for(int j=0; j<height; j++)
            {
                Pixels[i][j] = txGetPixel(i, j);
            }
        }
        txClear();

        for(int y = 0; y<height; y++)
        {
            for(int x = 0; x<width; x++)
            {
                txSetPixel(x, y, Pixels[x][y]);
            }
        }
        txEnd();
            
        for(int i = 0; i < height; i++)
        {
            delete[]Pixels[i]; 
        }
        delete [] Pixels;
    }
