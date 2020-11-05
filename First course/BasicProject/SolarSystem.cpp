/*
    1) ������ - 109%.                           109
    2) �������� (2440 ��) � 38% �� �������.     0.38
    3) ������ (6 052 ��) � 95% �� �������.      0.95
    4) ����� (6 371 ��) - 100%.                 1
    5) ���� (3390 ��) � 53% �� �������.         0.53
    6) ������ (69 911 ��) � 1.120% �������.     11.12
    7) ������ (58 232 ��) � 945% �������.       9.45
    8) ���� (25 362 ��) � 400% �������.         4
    9) ������ (24 622 ��) � 388% �������.       3.88
*/

    #include "TXLib.h"

    void drawSolarSystem(double CoefficientOfAll, bool Solar);

    int main()
    {
        txCreateWindow (1400, 800);

        txSetFillColor (TX_WHITE);
        txFloodFill(0, 0, FLOODFILLBORDER);

        double CoefficientOfAll = 1;
        bool Solar = false;

        drawSolarSystem(CoefficientOfAll, Solar);

        return 0;
    }

    void drawSolarSystem(double CoefficientOfAll, bool Solar)
    {
        double Coefficients [9] = {109, 0.38, 0.95, 1, 0.53, 11.12, 9.45, 4, 3.88};
        double X [9] = {0};
        txSetColor(TX_BLACK);
        for(int i = 0; i<9; i++)
        {
            if(i == 0)
            {
                if (Solar == true)
                {
                    txCircle((5*Coefficients[i]*CoefficientOfAll), 400, 5*Coefficients[i]*CoefficientOfAll);
                    X[i] = {(5*Coefficients[i]*CoefficientOfAll)};
                }
            }else{
                    X[i] = {(5*Coefficients[i]*CoefficientOfAll)+(5*Coefficients[i-1]*CoefficientOfAll)+10+X[i-1]};
                    txCircle(X[i], 400, 5*Coefficients[i]*CoefficientOfAll);
            }
        }
    }
