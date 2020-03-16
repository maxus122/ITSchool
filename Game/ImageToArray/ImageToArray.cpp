    #include "InOutPut\\TXLib.h"
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #define LEN 200000

    void Save(int i, COLORREF Color, HDC image, char *Text, char *XText, char *YText, char *ColorText);

    int main()
    {
        txCreateWindow(1296, 720);
        txSetFillColor(TX_WHITE);
        txFloodFill(0, 0, FLOODFILLBORDER);

        HDC image = txLoadImage("InOutPut\\Image.bmp");
        FILE *Arr;
        COLORREF Color;
        
        char Text[LEN];
        char XText[LEN];
        char YText[LEN];
        char ColorText[LEN];

        txBitBlt(txDC(), 0, 0, 1296, 720, image, 0, 0);

        Arr = fopen("InOutPut\\Saving.txt", "w+");
        for(int i = 0; i<180; i++)
        {
            Save(i, Color, image, Text, XText, YText, ColorText);
            strcat(Text, "};\n\n");
            fputs(Text, Arr);
        }
        fputs(Text, Arr);
        for(int i = 180; i<360; i++)
        {
            Save(i, Color, image, Text, XText, YText, ColorText);
            strcat(Text, "};\n\n");
            fputs(Text, Arr);
        }
        fputs(Text, Arr);
        for(int i = 360; i<540; i++)
        {
            Save(i, Color, image, Text, XText, YText, ColorText);
            strcat(Text, "};\n\n");
            fputs(Text, Arr);
        }
        fputs(Text, Arr);
        for(int i = 540; i<720; i++)
        {
            Save(i, Color, image, Text, XText, YText, ColorText);
            strcat(Text, "};\n\n");
            fputs(Text, Arr);
        }
        
    }

    void Save(int i, COLORREF Color, HDC image, char *Text, char *XText, char *YText, char *ColorText)
    {
        int R, G, B;
        char RText[LEN];
        char GText[LEN];
        char BText[LEN];
        strcpy(Text, "\n {");
        for(int i2 = 0; i2<1296; i2++)
        {
            strcat(Text, "RGB(");
            Color = txGetPixel(i2, i);
            R = GetRValue(Color);
            G = GetGValue(Color);
            B = GetBValue(Color);
            itoa(R, RText, 10);
            itoa(G, GText, 10);
            itoa(B, BText, 10);
            strcat(Text, RText);
            strcat(Text, ", ");
            strcat(Text, GText);
            strcat(Text, ", ");
            strcat(Text, BText);
            strcat(Text, "), ");
        }
    }

    /*void Save(int i, COLORREF Color, HDC image, char *Text, char *XText, char *YText, char *ColorText)
    {
        int R, G, B;
        char RText[LEN];
        char GText[LEN];
        char BText[LEN];
        strcpy(Text, "\n");
        for(int i2 = 0; i2<1296; i2++)
        {
            itoa(i2, XText, 10);
            itoa(i, YText, 10);
            strcat(Text, "txSetPixel(");
            strcat(Text, XText);
            strcat(Text, ", ");
            strcat(Text, YText);
            strcat(Text, ", RGB(");
            Color = txGetPixel(i2, i);
            R = GetRValue(Color);
            G = GetGValue(Color);
            B = GetBValue(Color);
            itoa(R, RText, 10);
            itoa(G, GText, 10);
            itoa(B, BText, 10);
            strcat(Text, RText);
            strcat(Text, ", ");
            strcat(Text, GText);
            strcat(Text, ", ");
            strcat(Text, BText);
            strcat(Text, ")); \n");
        }
    }*/

