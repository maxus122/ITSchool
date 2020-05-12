    #include "TXLib.h"
    #include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
    #include <cmath>
    #define LEN 200000

    class button
    {
        private:
            int firstX;
            int firstY;
            int secondX;
            int secondY;

        public:
            button(int valueFirstX, int valueFirstY, int valueSecondX, int valueSecondY)
            {
                firstX = valueFirstX; 
                firstY = valueFirstY;
                secondX = valueSecondX; 
                secondY = valueSecondY;
            }

            bool IsOver()
            {
                RECT collision = {firstX, firstY, secondX, secondY};
                if(In(txMousePos(), collision))
                {  
                    return true;
                }else{
                    return false;
                }
            }

            bool IsClicked()
            {
                RECT collision = {firstX, firstY, secondX, secondY};
                if(GetAsyncKeyState(VK_LBUTTON))
                {
                    if(In(txMousePos(), collision))
                    {  
                        return true;
                    }else{
                        return false;
                    }
                }
            }

            int GetFirstX() { return firstX; }
            int GetFirstY() { return firstY; }
            int GetSecondX() { return secondX; }
            int GetSecondY() { return secondY; }
    };

    double straight(double x, double k, double b);
    double module(double x);
    double parabola(double x, double a, double b, double c);
    double parabolaBranch(double x);
    double cubicParabola(double x);
    double radioWaves(double x);
    double sinus(double x);
    double tangent(double x);
    double arcTangent(double x);
    void graphicsBuilder(int graphicOnCanvas);

    double straight(double x, double k, double b)
    {
        return k*x+b;
    }
    double module(double x)
    {
        return 5+abs(x*5)*5;
    }
    double parabola(double x, double a, double b, double c)
    {
        return a*pow(x, 2)+b*x+c;
    }
    double parabolaBranch(double x)
    {
        return atan(x);
    }
    double cubicParabola(double x)
    {
        return pow(x, 3);
    }
    double radioWaves(double x)
    {
        return sin(x)/tan(x)*x*x/10*(x/2+x-(x/2));
    }
    double sinus(double x)
    {
        return -3.4+sin(x*94.2)*99.8;
    }
    double tangent(double x)
    {
        return 1+tan(x*5)*0.4;
    }
    double arcTangent(double x)
    {
        return atan(x);
    }

    void graphicsBuilder(int graphicOnCanvas)
    {
        switch(graphicOnCanvas)
        {
            case 1:
                txBegin();
                for(double x = 0; x < 960; x++)
                {
                    txSetPixel(x, 359-straight(x-479, 1, 0), TX_WHITE);
                }
                txEnd();
                break;

            case 2:
                txBegin();
                for(double x = 0; x < 960; x++)
                {
                    txSetPixel(x, 359-module(x-479), TX_WHITE);
                }
                txEnd();
                break;

            case 3:
                txBegin();
                for(double x = 0; x < 960; x=x+0.01)
                {
                    txSetPixel(x, 359-parabola(x-479, 1, 1, 1), TX_WHITE);
                }
                txEnd();
                break;

            case 4:
                txBegin();
                for(double x = 479; x < 960; x=x+0.01)
                {
                    txSetPixel(x, 359-parabolaBranch(x-479), TX_WHITE);
                }
                txEnd();
                break;

            case 5:
                txBegin();
                for(double x = 0; x < 960; x=x+0.01)
                {
                    txSetPixel(x, 359-cubicParabola(x-479), TX_WHITE);
                }
                txEnd();
                break;      

            
            case 6:
                for(double x = 0; x < 960; x=x+0.001)
                {
                    txSetPixel(x, 359-radioWaves(x-479), TX_RED);
                }
                break;
            case 7:
                for(double x = 0; x < 960; x=x+0.01)
                {
                    txSetPixel(x, 359-sinus(x-479), TX_RED);
                }
                break;
            case 8:
                for(double x = 0; x < 960; x=x+0.001)
                {
                    txSetPixel(x, 359-tangent(x-479), TX_RED);
                }
                break;
            case 9:
                for(double x = 0; x < 960; x=x+0.001)
                {
                    txSetPixel(x, 359-arcTangent(x-479), TX_RED);
                }
                break;
        }
    }