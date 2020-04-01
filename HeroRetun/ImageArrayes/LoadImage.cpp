    #include "Resources\\TXLib.h"
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #define LEN 335000












    //Настройки
    const char Path[LEN] = "Resources\\Images\\Objects\\OBJECTS_FirstHouse2part";



















    void Save(char *savePath, HDC image, int width, int height);
    
    int main()
    {
        char imagePath[LEN];
        char savePath[LEN];

        strcpy(imagePath, Path);
        strcat(imagePath, ".bmp");

        strcpy(savePath, Path);
        strcat(savePath, ".txt");

        HDC image = txLoadImage(imagePath);
        txCreateWindow(txGetExtentX(image), txGetExtentY(image));
        txSetFillColor(TX_WHITE);
        txFloodFill(0, 0, FLOODFILLBORDER);
        txBitBlt(txDC(), 0, 0, txGetExtentX(image), txGetExtentY(image), image);

        Save(savePath, image, txGetExtentX(image), txGetExtentY(image));

        txDeleteDC(image);
        txDisableAutoPause();	
        return 0;
    }

    void Save(char *savePath, HDC image, int width, int height)
    {
        COLORREF **pixelsArray = new COLORREF*[width]; 
        for(int i = 0; i<width; i++)
        {
            pixelsArray[i] = new COLORREF[height];
        }

        for(int i = 0; i<width; i++)
        {
            for(int j=0; j<height; j++)
            {
                pixelsArray[i][j] = txGetPixel(i, j, image);
            }
        }

        FILE *Arr;
        Arr = fopen(savePath, "w+");

        int R, G, B;
        char RText[LEN];
        char GText[LEN];
        char BText[LEN];
        char fileText[345000];

        strcpy(fileText, "{");

        for(int i = 0; i<width; i++)
        {
            for(int j=0; j<height; j++)
            {
                R = GetRValue(pixelsArray[i][j]);
                G = GetGValue(pixelsArray[i][j]);
                B = GetBValue(pixelsArray[i][j]);
                itoa(R, RText, 10);
                itoa(G, GText, 10);
                itoa(B, BText, 10);

                strcat(fileText, "RGB(");
                strcat(fileText, RText);
                strcat(fileText, ",");
                strcat(fileText, GText);
                strcat(fileText, ",");
                strcat(fileText, BText);
                strcat(fileText, "),");
            }
        }

        strcat(fileText, "};");
        fputs(fileText, Arr);
        fclose(Arr);
    }