#include "TXLib.h"

int main( )
    {
    txCreateWindow (40, 100);

    txSetFillColor (TX_WHITE);           //������� ����
    txFloodFill(0, 0, FLOODFILLBORDER);

    txSetColor(TX_RED);                  //��������� ��������������
    txLine      (10, 75, 30, 75);
    txLine      (30, 25, 30, 75);
    txLine      (30, 25, 10, 25);
    txLine      (10, 75, 10, 25);

    txSetColor(TX_GREEN);                //��������� ����������
    txCircle    (30, 50, 6);

    txSetColor(TX_BLACK);                //��������� ������
    txLine      (4, 48, 17, 52);

    return 0;
    }
