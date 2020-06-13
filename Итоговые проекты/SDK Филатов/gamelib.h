#include "TXlib.h"
COLORREF WILLBODY = RGB (100, 100, 100);
COLORREF CIRCUITWILLBODY = RGB (80,80,80);
COLORREF DARKWILLBODY = RGB (95,95,95);
COLORREF EYESBODY = RGB (16,16,16);

COLORREF DOOR = RGB (9, 46, 156);
COLORREF DARKDOOR = RGB (9, 20, 60);

COLORREF KEY = RGB (9, 46, 156);
COLORREF DARKKEY = RGB (9, 20, 60);

COLORREF DARKSAW = RGB (115, 3, 3);
COLORREF SAW = RGB (179, 2, 2);

COLORREF HAT = RGB (74,3,3);
COLORREF CIRCUIT = RGB (1,1,1);
/*!
    \brief Начальная страница

    Название игры и ее создатель
*/
void drawIntro()
{
txSetFillColor(COLORREF RGB(61,56,55));
txFloodFill(1,1);
txSetColor (TX_WHITE);
txSelectFont ("Comic Sans MS", 35);
txTextOut (200,700, "by AVEKEFIR ");
txSelectFont ("Comic Sans MS", 50);
txTextOut (600,250, "THE GAME");
txSelectFont ("Comic Sans MS", 35);
txTextOut (600,310, "about");
txSelectFont ("Comic Sans MS", 50);
txTextOut (600,355, "'Will'");

txSelectFont ("Comic Sans MS", 23);
txTextOut (630,505, "(tap enter)");


txSetColor (TX_BLACK,15);
txLine (0,0,0,800);
txLine (0,0,100,100);
txLine (100,100,0,200);
txLine (0,200,100,300);
txLine (100,300,0,400);
txLine (0,400,100,500);
txLine (100,500,0,600);
txLine (0,600,100,700);
txLine (100,700,0,800);

txLine (100,0,100,800);
txLine (100,0,0,100);
txLine (0,100,100,200);
txLine (100,200,0,300);
txLine (0,300,100,400);
txLine (100,400,0,500);
txLine (0,500,100,600);
txLine (100,600,0,700);
txLine (0,700,100,800);

txLine (1300,0,1300,800);
txLine (1300,0,1400,100);
txLine (1400,100,1300,200);
txLine (1300,200,1400,300);
txLine (1400,300,1300,400);
txLine (1300,400,1400,500);
txLine (1400,500,1300,600);
txLine (1300,600,1400,700);
txLine (1400,700,1300,800);

txLine (1400,0,1400,800);
txLine (1400,0,1300,100);
txLine (1300,100,1400,200);
txLine (1400,200,1300,300);
txLine (1300,300,1400,400);
txLine (1400,400,1300,500);
txLine (1300,500,1400,600);
txLine (1400,600,1300,700);
txLine (1300,700,1400,800);
}
/*!
    \brief Главное меню

    Две кнопки:

    Играть

    Кастомизация персонажа
*/
void drawMenu ()
{
txSetColor (TX_BLACK,15);
txSetFillColor(COLORREF RGB(61,56,55));
txFloodFill(1,1);
txLine (0,0,0,800);
txLine (0,0,100,100);
txLine (100,100,0,200);
txLine (0,200,100,300);
txLine (100,300,0,400);
txLine (0,400,100,500);
txLine (100,500,0,600);
txLine (0,600,100,700);
txLine (100,700,0,800);

txLine (100,0,100,800);
txLine (100,0,0,100);
txLine (0,100,100,200);
txLine (100,200,0,300);
txLine (0,300,100,400);
txLine (100,400,0,500);
txLine (0,500,100,600);
txLine (100,600,0,700);
txLine (0,700,100,800);

txLine (1300,0,1300,800);
txLine (1300,0,1400,100);
txLine (1400,100,1300,200);
txLine (1300,200,1400,300);
txLine (1400,300,1300,400);
txLine (1300,400,1400,500);
txLine (1400,500,1300,600);
txLine (1300,600,1400,700);
txLine (1400,700,1300,800);

txLine (1400,0,1400,800);
txLine (1400,0,1300,100);
txLine (1300,100,1400,200);
txLine (1400,200,1300,300);
txLine (1300,300,1400,400);
txLine (1400,400,1300,500);
txLine (1300,500,1400,600);
txLine (1400,600,1300,700);
txLine (1300,700,1400,800);

txSetColor (TX_WHITE);
txSelectFont ("Comic Sans MS", 120);
txTextOut (520,200, "PLAY");
txTextOut (520,355, "CUSTOM");
txSelectFont ("Comic Sans MS", 25);
txTextOut (600,320, "'1'");
txTextOut (600,475, "'TAB'");



}
/*!
    \brief Комната кастомизации
    \version 1.0

    Пока только очки и шляпа
*/
void drawCustomRoom()
{
    txSetFillColor(COLORREF RGB(61,56,55));
    txFloodFill(1,1);
    txSetColor (TX_BLACK,15);
    txLine (0,0,0,800);
    txLine (0,0,100,100);
    txLine (100,100,0,200);
    txLine (0,200,100,300);
    txLine (100,300,0,400);
    txLine (0,400,100,500);
    txLine (100,500,0,600);
    txLine (0,600,100,700);
    txLine (100,700,0,800);

    txLine (100,0,100,800);
txLine (100,0,0,100);
txLine (0,100,100,200);
txLine (100,200,0,300);
txLine (0,300,100,400);
txLine (100,400,0,500);
txLine (0,500,100,600);
txLine (100,600,0,700);
txLine (0,700,100,800);

txLine (1300,0,1300,800);
txLine (1300,0,1400,100);
txLine (1400,100,1300,200);
txLine (1300,200,1400,300);
txLine (1400,300,1300,400);
txLine (1300,400,1400,500);
txLine (1400,500,1300,600);
txLine (1300,600,1400,700);
txLine (1400,700,1300,800);

txLine (1400,0,1400,800);
txLine (1400,0,1300,100);
txLine (1300,100,1400,200);
txLine (1400,200,1300,300);
txLine (1300,300,1400,400);
txLine (1400,400,1300,500);
txLine (1300,500,1400,600);
txLine (1400,600,1300,700);
txLine (1300,700,1400,800);


}
/*!
    \brief Знакомство Игрока с персонажем
*/
void drawGreeting()
{
txSetColor (TX_BLACK,5);
txLine (0,700,1400,700);
txLine (50,100,1350,100);
txLine (50,100,50,500);
txLine (50,500,0,500);
txLine (1350,100,1350,500);
txLine (1350,500,1400,500);
txSetFillColor (COLORREF RGB (20, 20, 20));
txFloodFill (1,1);
txFloodFill(1,799);
txSetFillColor (COLORREF RGB (45,45,45));
txFloodFill(56,106);


txSetColor (TX_WHITE,7);
txSelectFont ("Comic Sans MS", 40);
txTextOut (100,300, "It's Will");
txLine (100,350,50,550);

txLine (400,450,530,450);
txLine (480,425,530,450);
txLine (480,475,530,450);

txLine (800,450,930,450);
txLine (880,425,930,450);
txLine (880,475,930,450);

txLine (1200,450,1330,450);
txLine (1280,425,1330,450);
txLine (1280,475,1330,450);
}
/*!
    \brief Обучение перемещения персонажа
*/
void drawTraining ()
{
txSetColor (TX_BLACK,5);
txLine (0,700,1400,700);
txLine (50,100,1350,100);
txLine (50,100,50,500);
txLine (50,500,0,500);
txLine (1350,100,1350,500);
txLine (1350,500,1400,500);
txSetFillColor (COLORREF RGB (20, 20, 20));
txFloodFill (1,1);

txFloodFill(1,799);
txSetFillColor (COLORREF RGB (45,45,45));
txFloodFill(56,106);

txSetColor (TX_WHITE);
txSelectFont ("Comic Sans MS", 40);
txTextOut (200,200, "Will will well drive forward...");
txTextOut (200,230,"...but not back...");
txTextOut (200,260, "...only FORWARD!");
}
/*!
    \brief Первый уровень
*/
void drawFirstlvl ()
{
txSetColor (TX_BLACK,5);
txLine (0,700,400,700);
txLine (400,700,400,300);
txLine (400,300,1000,300);
txLine (1000,300,1000,700);
txLine (1000,700,1400,700);


txLine (50,100,1350,100);

txLine (50,100,50,500);
txLine (50,500,0,500);
txLine (1350,100,1350,500);
txLine (1350,500,1400,500);



txSetFillColor (COLORREF RGB (20, 20, 20));
txFloodFill (1,1);
txFloodFill(1,799);
txSetFillColor (COLORREF RGB (45,45,45));
txFloodFill(56,106);

txSetColor (COLORREF RGB (138, 103, 29),5);
txLine (140,700,300,700);
txLine (620,100,780,100);
txLine (800,300,960,300);
txLine (1100,100,1260,100);


}
/*!
    \brief Второй уровень
*/
void drawSecondlvl ()
{
txSetColor (TX_BLACK,5);
txLine (0,700,1400,700);
txLine (50,100,1350,100);
txLine (50,100,50,500);
txLine (50,500,0,500);
txLine (1350,100,1350,500);
txLine (1350,500,1400,500);
txSetFillColor (COLORREF RGB (20, 20, 20));
txFloodFill (1,1);
txFloodFill(1,799);
txSetFillColor (COLORREF RGB (45,45,45));
txFloodFill(56,106);

txSetFillColor (COLORREF RGB (35,35,35));
txLine (50,300,1350,300);
txLine (50,350,100,300);
txLine (1300,300,1350,350);
txFloodFill (60,110);


}
/*!
    \brief Третий уровень
*/
void drawThirdlvl ()
{
txSetColor (TX_BLACK,5);
txLine (0,700,1400,700);
txLine (50,100,1350,100);
txLine (50,100,50,500);
txLine (50,500,0,500);
txLine (1350,100,1350,500);
txLine (1350,500,1400,500);
txSetFillColor (COLORREF RGB (20, 20, 20));
txFloodFill (1,1);
txFloodFill(1,799);
txSetFillColor (COLORREF RGB (45,45,45));
txFloodFill(56,106);

txSetFillColor (COLORREF RGB (35,35,35));
txLine (50,300,1350,300);
txLine (50,350,100,300);
txLine (1300,300,1350,350);
txFloodFill (60,110);

}
/*!
    \brief Четвертый уровень, но

    Взят за основу последующих уровней
*/
void drawFourthlvl()
{
txSetColor (TX_BLACK,5);
txLine (0,700,1400,700);
txLine (50,100,1350,100);
txLine (50,100,50,500);
txLine (50,500,0,500);
txLine (1350,100,1350,500);
txLine (1350,500,1400,500);
txSetFillColor (COLORREF RGB (20, 20, 20));
txFloodFill (1,1);
txFloodFill(1,799);
txSetFillColor (COLORREF RGB (45,45,45));
txFloodFill(56,106);
}
/*!
    \brief Закрытая дверь
    \param DOOR Цвет двери
    \param DARKDOOR Второй цвет двери

    Отделяет тебя от следующего уровня
*/
void drawDoor (COLORREF DOOR, COLORREF DARKDOOR)
{
    txSetColor (DOOR,14);
    txSetFillColor (DOOR);
    txRectangle (1350,700,1400,500);
    txSetColor (DARKDOOR,7);
    txSetFillColor (TX_BLACK);
    txCircle (1375,600,15);
}
/*!
    \brief Ключ
    \param xkey Координата ключа по x
    \param ykey Координата ключа по y
    \param KEY Цвет ключа
    \param DARKKEY Второй цвет ключа

    Нужен для открытия двери
*/
void drawKey (int xkey, int ykey,COLORREF KEY,COLORREF DARKKEY)
{
    txSetColor (DARKKEY,7);
    txSetFillColor (KEY);
    txCircle (xkey,ykey,15);
}
/*!
    \brief Портал
    \param PORTAL Цвет портала
    \param xpor Координата портала по x
    \param ypor Координата портала по y

    Телепортирует тебя в портал такого же цвета
*/
void drawPortal (COLORREF PORTAL, int xpor, int ypor)
{
    txSetFillColor (PORTAL);
    txRectangle (xpor,ypor,xpor+160,ypor-50);
    txSetFillColor (COLORREF RGB (45,45,45));

}
/*!
    \brief Пила
    \param xsaw Координата пилы по x
    \param ysaw Координата пилы по y
    \param DARKSAW Второй цвет пилы
    \param SAW Цвет пилы

    Уровень начинается с начала, если вы коснетесь ее
*/
void drawSaw(int xsaw, int ysaw,COLORREF DARKSAW, COLORREF SAW)
{
    txSetColor (DARKSAW,4);
    txSetFillColor (SAW);
    txRectangle (xsaw-50,ysaw-50,xsaw+50,ysaw+50);

}
/*!
    \brief Функция управления клавиатурой
    \version 1.0
    \param *sunglasses Включает/выключает очки
    \param *hat Включает/выключает шляпу
    \param *o Вспомогательная переменная
    \param *i Параметр разработчика
    \param *x Движение персонажа по x
    \param *y Движение персонажа по y
    \param *rev Меняет гравитацию
    \param *Opendoor Отвечает за открытие двери
    \param *xray Включает/выключает x-ray
*/
void interfa (bool *sunglasses,bool *hat,int *o, int *i, int *x,int *y, int *rev, int *Opendoor, int *xray)
{

    if (*i==0)
    {
        if (GetAsyncKeyState (0x5A))
        {
            *xray=1;
        }
        if (GetAsyncKeyState (0x58))
        {
            *xray=0;
        }
    }
    if (*i>8)
    {
        if (GetAsyncKeyState (0x5A))
        {
            *xray=1;
        }
        if (GetAsyncKeyState (0x58))
        {
            *xray=0;
        }
    }
    if (GetAsyncKeyState (VK_RETURN))
    {
        if (*i==0)
        {
            *xray=0;
            txClear();
            *i=1;
        }
    }
    if (GetAsyncKeyState (0x31))
    {
        if (*i==1)
        {
            txClear();
            *i=2;
        }
    }


    if (*i==100)
        {
            if (GetAsyncKeyState (0x31))
            {
                *o=1;
            }
            if (*o==1)
            {
                if (GetAsyncKeyState (0x59))
                {

                    *sunglasses=TRUE;
                    *i=1;
                }
                if (GetAsyncKeyState (0x4E))
                {

                    *sunglasses=FALSE;
                    *i=1;
                }
            }
            if (GetAsyncKeyState (0x32))
            {
                *o=2;
            }
            if (*o==2)
            {
                if (GetAsyncKeyState (0x59))
                {
                    *hat=TRUE;
                    *i=1;
                }
                if (GetAsyncKeyState (0x4E))
                {
                    *hat=FALSE;
                    *i=1;
                }
            }
        }

    if (GetAsyncKeyState (VK_TAB))
    {

        *i=100;
    }
    if (GetAsyncKeyState (VK_ADD))
    {
        *i=-2;
    }
    if (GetAsyncKeyState (VK_RIGHT))
    {
        if (*i>1)
        {
        *x=*x+6;
        }
    }
    if (GetAsyncKeyState (VK_UP))
    {
        if (*i==4)
        {
            if ((*x>140)&&(*x<200))
            {
                if (*rev==0)
                {
                    *rev=1;
                }

            }
            if ((*x>620)&&(*x<680))
            {
                if (*y==113)
                {
                    *rev=0;
                    *y=287;

                }
            }
            if ((*x>800)&&(*x<860))
            {
                if (*y==287)
                {
                    *rev=1;
                    *y=113;
                }
            }
            if ((*x>1100)&&(*x<1160))
            {
                if (*y==113)
                {
                    *rev=0;
                    *y=683;
                }
            }
        }
        if (*i==5)
        {
            if ((*x>170)&&(*x<250))
            {

                    *y=287;

            }
            if ((*x>1100)&&(*x<1180))
            {
                *y=683;
            }
        }
        if (*i==6)
        {
            if ((*x>800)&&(*x<880))
            {
                if (*y==683)
                {
                    *y=287;
                    *x=170;
                }
            }
            if ((*x>1100)&&(*x<1180))
            {
                if (*y==287)
                {
                    *y=683;
                    *x=170;
                }
            }

        }
        if (*i==8)
        {
            if ((*x>350)&&(*x<950))
            {
                if (*rev==0)
                {
                    *rev=1;
                }

            }
        }

    }
    if (GetAsyncKeyState (VK_DOWN))
    {
        if (*i==8)
        {
            if ((*x>350)&&(*x<950))
            {
                if (*rev==1)
                {
                    *rev=0;
                    *y=683;
                }
            }
        }
    }
    if (GetAsyncKeyState (0x52))
    {




        if (*i>8)
        {
            *x=-100;
            *rev=0;
            *y=683;
            *Opendoor=0;
        }
        if (*i==8)
        {
            *i=8;
            *x=-100;
            *rev=0;
            *y=683;
            *Opendoor=0;
        }
        if (*i==7)
        {
            *i=7;
            *x=-100;
            *rev=0;
            *y=683;
            *Opendoor=0;
        }
        if (*i==6)
        {
            *i=6;
            *x=-100;
            *rev=0;
            *y=683;
            *Opendoor=0;
        }
        if (*i==5)
        {
            *i=5;
            *x=-100;
            *rev=0;
            *y=683;
            *Opendoor=0;
        }
        if (*i==4)
        {
            *i=4;
            *x=-100;
            *rev=0;
            *y=683;
            *Opendoor=0;
        }
    }
    if (GetAsyncKeyState (VK_ESCAPE))
    {
        if (GetAsyncKeyState (VK_RETURN))
        {
            *i=1;
            *x=-100;
            *rev=0;
            *y=683;
            *Opendoor=0;
        }
    }
    if (GetAsyncKeyState (0x49))
    {
        if (GetAsyncKeyState (0x61))
        {
            *i=4;
        }
        if (GetAsyncKeyState (0x62))
        {
            *i=5;
        }
        if (GetAsyncKeyState (0x63))
        {
            *i=6;
        }
        if (GetAsyncKeyState (0x64))
        {
            *i=7;
        }
        if (GetAsyncKeyState (0x65))
        {
            *i=8;
        }
        if (GetAsyncKeyState (0x66))
        {
            *i=9;
        }
        if (GetAsyncKeyState (0x67))
        {
            *i=10;
        }
        if (GetAsyncKeyState (0x68))
        {
            *i=11;
        }
    }





}
/*!
    \brief Благодарность за моральную помощь и поддержку
*/
void drawSup ()
{
    txSelectFont ("BRUSH SCRIPT MT", 16);
    txSetColor (TX_GREEN);
    txTextOut (200,740, "support Critter");
    txSetFillColor (TX_GREEN);
    txLine (170,745,175,740);
    txLine (175,740,180,745);
    txLine (180,745,185,740);
    txLine (185,740,190,745);
    txLine (190,745,180,758);
    txLine (180,758,170,745);
    txFloodFill (180,750);
}
/*!
    \brief Функция рисующая персонажа
    \param sunglasses Надеть/снять очки
    \param hat Надеть/снять шляпу
    \param coefficient Размер персонажа
    \param x Координата персонажа по x
    \param y Координата персонажа по y
    \param WILLBODY Цвет коробки
    \param CIRCUITWILLBODY Цвет контура
    \param DARKWILLBODY Темный цвет коробки
    \param EYESBODY Цвет глаз
    \param HAT Цвет шляпы
    \param CIRCUIT Цвет контура
*/
void drawWill(bool sunglasses,bool hat,double coefficient,int x,int y,COLORREF WILLBODY,COLORREF CIRCUITWILLBODY,COLORREF DARKWILLBODY,COLORREF EYESBODY,COLORREF HAT, COLORREF CIRCUIT)
{

    txSetColor (CIRCUITWILLBODY);
    txSetFillColor (WILLBODY);
    POINT frontwill [4] = {{x-0*coefficient,y-0*coefficient},{x-0*coefficient,y-200*coefficient},{x+200*coefficient,y-200*coefficient},{x+200*coefficient,y-0*coefficient}};
    txPolygon (frontwill,4);
    txSetFillColor (DARKWILLBODY);
    POINT topwill [4] = {{x-0*coefficient,y-200*coefficient},{x+60*coefficient,y-240*coefficient},{x+260*coefficient,y-240*coefficient},{x+200*coefficient,y-200*coefficient}};
    txPolygon (topwill,4);
    POINT facewill [4] = {{x+260*coefficient,y-240*coefficient},{x+260*coefficient,y-40*coefficient},{x+200*coefficient,y-0*coefficient},{x+200*coefficient,y-200*coefficient}};
    txPolygon (facewill,4);
    txSetFillColor (EYESBODY);
    txCircle (x+218*coefficient,y-150*coefficient,7);
    txCircle (x+247*coefficient,y-160*coefficient,7);
    txSetColor (EYESBODY,5);
    txLine (x+220*coefficient,y-100*coefficient,x+245*coefficient,y-110*coefficient);//mouth
    txCircle (x+45*coefficient,y-0*coefficient,13);
    txCircle (x+155*coefficient,y-0*coefficient,13);
    txSetFillColor (COLORREF RGB (45,45,45));
    txFloodFill (x+65,y+8);
    if (sunglasses)
    {
        txSetColor (EYESBODY,5);
        txSetFillColor (EYESBODY);
        POINT lsunglasses [4] = {{x+206*coefficient,y-130*coefficient},{x+206*coefficient,y-170*coefficient},{x+224*coefficient,y-176*coefficient},{x+224*coefficient,y-136*coefficient}};
        txPolygon (lsunglasses,4);
        txSetColor (EYESBODY,4);
        txLine (x+224*coefficient,y-156*coefficient,x+237*coefficient,y-160*coefficient);
        txSetColor (EYESBODY,5);
        POINT rsunglasses [4] = {{x+238*coefficient,y-140*coefficient},{x+238*coefficient,y-180*coefficient},{x+256*coefficient,y-184*coefficient},{x+256*coefficient,y-144*coefficient}};
        txPolygon (rsunglasses,4);
    }
    if (hat)
    {
    txSetColor(EYESBODY);
    txSetFillColor (HAT);
    txLine (x+0*coefficient,y-205*coefficient,x+60*coefficient,y-222*coefficient);
    txLine (x+60*coefficient,y-222*coefficient,x+90*coefficient,y-270*coefficient);
    txLine (x+90*coefficient,y-270*coefficient,x+115*coefficient,y-265*coefficient);
    txLine (x+115*coefficient,y-265*coefficient,x+140*coefficient,y-270*coefficient);
    txLine (x+140*coefficient,y-270*coefficient,x+160*coefficient,y-222*coefficient);
    txLine (x+160*coefficient,y-222*coefficient,x+200*coefficient,y-205*coefficient);
    txLine (x+200*coefficient,y-205*coefficient,x+0*coefficient,y-205*coefficient);
    txFloodFill (x+100*coefficient,y-230*coefficient);
    txFloodFill (x+140*coefficient,y-250*coefficient);
    txFloodFill (x+140*coefficient,y-240*coefficient);
    txLine (x+200*coefficient,y-205*coefficient,x+260*coefficient,y-240*coefficient);
    txLine (x+160*coefficient,y-222*coefficient,x+220*coefficient,y-257*coefficient);
    txLine (x+140*coefficient,y-270*coefficient,x+200*coefficient,y-305*coefficient);
    txLine (x+115*coefficient,y-265*coefficient,x+175*coefficient,y-300*coefficient);
    txLine (x+90*coefficient,y-270*coefficient,x+150*coefficient,y-305*coefficient);
    txLine (x+0*coefficient,y-205*coefficient,x+60*coefficient,y-240*coefficient);

    txLine (x+60*coefficient,y-240*coefficient,x+70*coefficient,y-240*coefficient);
    txLine (x+150*coefficient,y-305*coefficient,x+175*coefficient,y-300*coefficient);
    txLine (x+175*coefficient,y-300*coefficient,x+200*coefficient,y-305*coefficient);
    txLine (x+200*coefficient,y-305*coefficient,x+220*coefficient,y-257*coefficient);
    txLine (x+220*coefficient,y-257*coefficient,x+260*coefficient,y-240*coefficient);

    txFloodFill (x+215*coefficient,y-250*coefficient);
    txFloodFill (x+215*coefficient,y-240*coefficient);
    txFloodFill (x+215*coefficient,y-230*coefficient);
    txFloodFill (x+160*coefficient,y-235*coefficient);
    txFloodFill (x+160*coefficient,y-240*coefficient);
    txFloodFill (x+160*coefficient,y-250*coefficient);
    txFloodFill (x+160*coefficient,y-287*coefficient);
    txFloodFill (x+140*coefficient,y-287*coefficient);
    txFloodFill (x+50*coefficient,y-230*coefficient);
    txFloodFill (x+15*coefficient,y-210*coefficient);
    txFloodFill (x+17*coefficient,y-212*coefficient);
    txFloodFill (x+19*coefficient,y-212*coefficient);
    POINT a [4] = {{x+0*coefficient,y-205*coefficient},{x+60*coefficient,y-222*coefficient},{x+70*coefficient,y-240*coefficient},{x+60*coefficient,y-240*coefficient}};
    txPolygon (a,4);
    }
}
/*!
    \brief Функция рисующая персонажа с измененной гравитацией
    \param sunglasses Надеть/снять очки
    \param hat Надеть/снять шляпу
    \param coefficient Размер персонажа
    \param x Координата персонажа по x
    \param y Координата персонажа по y
    \param WILLBODY Цвет коробки
    \param CIRCUITWILLBODY Цвет контура
    \param DARKWILLBODY Темный цвет коробки
    \param EYESBODY Цвет глаз
    \param HAT Цвет шляпы
    \param CIRCUIT Цвет контура
*/
void drawReversewill (bool sunglasses,bool hat, double coefficient,int x,int y,COLORREF WILLBODY,COLORREF CIRCUITWILLBODY,COLORREF DARKWILLBODY,COLORREF EYESBODY,COLORREF HAT, COLORREF CIRCUIT)
{
    txSetColor (CIRCUITWILLBODY);
    txSetFillColor (WILLBODY);
    POINT revfrontwill [4] = {{x-0*coefficient,y-0*coefficient},{x+200*coefficient,y-0*coefficient},{x+200*coefficient,y+200*coefficient},{x-0*coefficient,y+200*coefficient}};
    txPolygon (revfrontwill,4);
    txSetFillColor (DARKWILLBODY);
    POINT revtopwill [4] = {{x-0*coefficient,y+200*coefficient},{x+200*coefficient,y+200*coefficient},{x+260*coefficient,y+240*coefficient},{x+60*coefficient,y+240*coefficient}};
    txPolygon (revtopwill,4);
    POINT revfacewill [4] = {{x+200*coefficient,y-0*coefficient},{x+260*coefficient,y+40*coefficient},{x+260*coefficient,y+240*coefficient},{x+200*coefficient,y+200*coefficient}};
    txPolygon (revfacewill,4);
    txSetFillColor (EYESBODY);
    txCircle (x+218*coefficient,y+150*coefficient,7);
    txCircle (x+247*coefficient,y+160*coefficient,7);
    txSetColor (EYESBODY,5);
    txLine (x+220*coefficient,y+100*coefficient,x+245*coefficient,y+110*coefficient);//mouth
    txCircle (x+45*coefficient,y-0*coefficient,13);
    txCircle (x+155*coefficient,y-0*coefficient,13);
    if (sunglasses)
    {
        POINT revlsunglasses [4] = {{x+206*coefficient,y+130*coefficient},{x+206*coefficient,y+170*coefficient},{x+224*coefficient,y+176*coefficient},{x+224*coefficient,y+136*coefficient}};
        txPolygon (revlsunglasses,4);
        txSetColor (EYESBODY,4);
        txLine (x+224*coefficient,y+156*coefficient,x+237*coefficient,y+160*coefficient);
        txSetColor (EYESBODY,5);
        POINT revrsunglasses [4] = {{x+238*coefficient,y+140*coefficient},{x+238*coefficient,y+180*coefficient},{x+256*coefficient,y+184*coefficient},{x+256*coefficient,y+144*coefficient}};
        txPolygon (revrsunglasses,4);
    }
    if (hat)
    {
    txSetColor(EYESBODY);
    txSetFillColor (HAT);
    txLine (x+0*coefficient,y+200*coefficient,x+60*coefficient,y+222*coefficient);
    txLine (x+60*coefficient,y+222*coefficient,x+90*coefficient,y+270*coefficient);
    txLine (x+90*coefficient,y+270*coefficient,x+115*coefficient,y+265*coefficient);
    txLine (x+115*coefficient,y+265*coefficient,x+140*coefficient,y+270*coefficient);
    txLine (x+140*coefficient,y+270*coefficient,x+160*coefficient,y+222*coefficient);
    txLine (x+160*coefficient,y+222*coefficient,x+200*coefficient,y+195*coefficient);
    txLine (x+200*coefficient,y+200*coefficient,x+0*coefficient,y+200*coefficient);
    txFloodFill (x+100*coefficient,y+230*coefficient);
    txFloodFill (x+140*coefficient,y+250*coefficient);
    txFloodFill (x+140*coefficient,y+240*coefficient);
    txLine (x+200*coefficient,y+200*coefficient,x+260*coefficient,y+240*coefficient);
    txLine (x+160*coefficient,y+222*coefficient,x+220*coefficient,y+257*coefficient);
    txLine (x+140*coefficient,y+270*coefficient,x+200*coefficient,y+305*coefficient);
    txLine (x+115*coefficient,y+265*coefficient,x+175*coefficient,y+300*coefficient);
    txLine (x+90*coefficient,y+270*coefficient,x+150*coefficient,y+305*coefficient);
    txLine (x+0*coefficient,y+200*coefficient,x+60*coefficient,y+240*coefficient);

    txLine (x+60*coefficient,y+240*coefficient,x+70*coefficient,y+240*coefficient);
    txLine (x+150*coefficient,y+305*coefficient,x+175*coefficient,y+300*coefficient);
    txLine (x+175*coefficient,y+300*coefficient,x+200*coefficient,y+305*coefficient);
    txLine (x+200*coefficient,y+305*coefficient,x+220*coefficient,y+257*coefficient);
    txLine (x+220*coefficient,y+257*coefficient,x+260*coefficient,y+240*coefficient);

    txFloodFill (x+215*coefficient,y+250*coefficient);
    txFloodFill (x+215*coefficient,y+240*coefficient);
    txFloodFill (x+215*coefficient,y+230*coefficient);
    txFloodFill (x+160*coefficient,y+235*coefficient);
    txFloodFill (x+160*coefficient,y+240*coefficient);
    txFloodFill (x+160*coefficient,y+250*coefficient);
    txFloodFill (x+160*coefficient,y+287*coefficient);
    txFloodFill (x+140*coefficient,y+287*coefficient);
    txFloodFill (x+50*coefficient,y+230*coefficient);
    txFloodFill (x+15*coefficient,y+210*coefficient);
    txFloodFill (x+17*coefficient,y+212*coefficient);
    txFloodFill (x+19*coefficient,y+212*coefficient);
    POINT a [4] = {{x+0*coefficient,y+200*coefficient},{x+60*coefficient,y+222*coefficient},{x+70*coefficient,y+240*coefficient},{x+60*coefficient,y+240*coefficient}};
    txPolygon (a,4);
    }
}
