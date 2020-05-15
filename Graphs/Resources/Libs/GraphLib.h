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
    double module(double x, double k, double a);
    double parabola(double x, double a, double b, double c);
    double parabolaBranch(double x, double k, double a);
    double cubicParabola(double x, double k, double a);
    double radioWaves(double x);
    double sinus(double x, double k, double a, double b);
    double tangent(double x, double k, double b);
    double arcTangent(double x, double k, double b);
    void graphicsBuilder(int graphicOnCanvas);

    double straight(double x, double k, double b) { return k*x+b; }
    double module(double x, double k, double a) { return k*abs(x)+a; }
    double parabola(double x, double a, double b, double c) { return (a*pow(x, 2)+b*x+c)*2; }
    double parabolaBranch(double x, double k, double a) { return k*sqrt(x)+a; }
    double cubicParabola(double x, double k, double a) { return k*pow(x, 3)+a; }
    double radioWaves(double x) { return sin(x)/tan(x)*x*x/10*(x/2+x-(x/2)); }
    double sinus(double x, double k, double a, double b) { return k*sin(x*a)+b; }
    double tangent(double x, double k, double b) { return k*tan(x)+b; }
    double arcTangent(double x, double k, double b) { return k*atan(x)+b; }

    void graphicsBuilder(int graphicOnCanvas, double k, double a, double b, double c, double scale)
    {
        switch(graphicOnCanvas)
        {
            case 1:
                for(double x = 0; x < 960; x++)
                {
                    txSetPixel(x*scale, 359-(straight(x-479, k, b)*scale), TX_WHITE);
                }
                break;

            case 2:
                for(double x = 0; x < 960; x++)
                {
                    txSetPixel(x, 359-module(x-479, k, a), TX_WHITE);
                }
                break;

            case 3:
                for(double x = 0; x < 960; x=x+0.01)
                {
                    txSetPixel(x*scale, (359*scale)-(parabola(x-479, a, b, c)), TX_WHITE);
                }
                break;

            case 4:
                for(double x = 479; x < 960; x=x+0.01)
                {
                    txSetPixel(x, 359-parabolaBranch(x-479, k, a), TX_WHITE);
                }
                break;

            case 5:
                for(double x = 0; x < 960; x=x+0.01)
                {
                    txSetPixel(x, 359-cubicParabola(x-479, k, a), TX_WHITE);
                }
                break;      
            
            case 6:
                for(double x = 0; x < 960; x=x+0.005)
                {
                    txSetPixel(x, 359-radioWaves(x-479), TX_WHITE);
                }
                break;
            case 7:
                for(double x = 0; x < 960; x=x+0.01)
                {
                    txSetPixel(x, 359-sinus(x-479, k, a, b), TX_WHITE);
                }
                break;
            case 8:
                for(double x = 0; x < 960; x=x+0.01)
                {
                    txSetPixel(x, 359-tangent(x-479, k, b), TX_WHITE);
                }
                break;
            case 9:
                for(double x = 0; x < 960; x=x+0.1)
                {
                    txSetPixel(x, 359-arcTangent(x-479, k, b), TX_RED);
                }
                break;
        }
    }