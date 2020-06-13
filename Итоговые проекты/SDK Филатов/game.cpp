
#include "gamelib.h"

int main ()
{

    txCreateWindow(1400,800);
    int i=5;
    int o=0;
    int x=-100;
    int y=683;
    int rev=0;
    int Opendoor=0;
    int xkey=700;
    int ykey=270;
    int xsaw=500;
    int ysaw=500;
    int directionsaw=1;
    int xray=0;
    bool sunglasses;
    bool hat=FALSE;
    txBegin();
    while (i>=0)
    {
    interfa (&sunglasses,&hat,&o,&i,&x,&y,&rev,&Opendoor,&xray);
    txSleep(1);
    if (i==0)
    {
        if (xray==1)
        {
            drawSup ();
        }
        if (xray==0)
        {
            txClear();
            drawIntro();
        }

    }
    if (i==1)
    {
        txClear();
        drawMenu();
    }
    if (i==100)
    {
        txClear();
        drawCustomRoom();
        txSetColor (TX_WHITE);
        txSelectFont ("Comic Sans MS", 35);
        txTextOut (130,100, "Cool sunglasses");
        txTextOut (330,107, "'1'");
        txSelectFont ("Comic Sans MS", 25);
        if (o==1)
        {
        txTextOut (400,80, "ON/OFF");
        txTextOut (400,110, " 'y'/'n'");
        }
        txSelectFont ("Comic Sans MS", 35);
        txTextOut (130,200, "Fancy hat");
        txTextOut (330,207, "'2'");
        txSelectFont ("Comic Sans MS", 25);
        if (o==2)
        {
        txTextOut (400,180, "ON/OFF");
        txTextOut (400,210, " 'y'/'n'");
        }
    }
    if (i==2)
    {
            txClear();
            drawWill(sunglasses,hat,0.5,x,y,WILLBODY,CIRCUITWILLBODY,DARKWILLBODY,EYESBODY,HAT,CIRCUIT);
            drawGreeting();
            if (x>1385)
            {
                i=3;
                txClear();
                x=-100;
            }
    }
    if (i==3)
    {
        txClear();
        drawWill(sunglasses,hat,0.5,x,y,WILLBODY,CIRCUITWILLBODY,DARKWILLBODY,EYESBODY,HAT,CIRCUIT);
        drawTraining();
        txSelectFont ("Comic Sans MS", 25);
        txTextOut (400,710, "exit it main menu   'esc+enter'");
        txTextOut (370,730, "WARNING: progress will be lost");
        if (x>650)
        {
            txSetColor (TX_WHITE);

            txTextOut (900,500, "Yes, it's curiously");
        }

        if (x>1385)
        {
            i=4;
            txClear();
            x=-100;
        }
    }
    if (i==4)
    {
        txClear();
        drawFirstlvl();
        if (Opendoor==0)
        {
            drawDoor(DOOR,DARKDOOR);

            drawKey(xkey,ykey,KEY,DARKKEY);
            if (x>1210)
            {
                x=1209;
            }
        }
        if (y==287)
        {
            if ((x>xkey-130)&&(x<xkey))
            {
                Opendoor=1;
            }
        }
        if (y>650)
        {
            if (x>270)
            {
                if (x<400)
                {
                x=269;
                }
            }
        }
        if ((y==113)&&(x>1217))
        {
            x=1216;
        }
        if ((y==287)&&(x>877))
        {
            x=876;
        }
        if (rev==0)
        {
                drawWill(sunglasses,hat,0.5,x,y,WILLBODY,CIRCUITWILLBODY,DARKWILLBODY,EYESBODY,HAT,CIRCUIT);
        }
        else
        {
            y=113;
            drawReversewill (sunglasses,hat,0.5,x,y,WILLBODY,CIRCUITWILLBODY,DARKWILLBODY,EYESBODY,HAT,CIRCUIT);
        }


        txSetColor (TX_WHITE);
        txSelectFont ("Comic Sans MS", 30);
        txTextOut (155,710, "It's ~elevator~");
        txTextOut (146,735, "up arrow to change gravity");
        txTextOut (440,590, "'R' to restart lvl");
        txTextOut (1294,710, "It's ~Door~");
        txTextOut (500,320, "It's ~Key~, that open Door");
        txSetColor (TX_RED,4);
        txLine (548,356,587,356);
        txLine (1342,746,1390,746);
        if (x>1385)
        {

            i=5;
            txClear();
            x=-100;
            Opendoor=0;
        }
    }



    if (i==5)
    {
        txClear();
        drawWill(sunglasses,hat,0.5,x,y,WILLBODY,CIRCUITWILLBODY,DARKWILLBODY,EYESBODY,HAT,CIRCUIT);
        drawSecondlvl ();
        COLORREF PORTAL = RGB (102, 75, 19);
        drawPortal (PORTAL,170,700);
        drawPortal (PORTAL,170,300);
        PORTAL = RGB (36, 41, 112);
        drawPortal (PORTAL,1100,300);
        drawPortal (PORTAL,1100,700);

        if (Opendoor==0)
            {
                drawDoor(DOOR,DARKDOOR);

                drawKey(xkey,ykey,KEY,DARKKEY);
            if (x>1210)
            {
                x=1209;
            }
            }
        if (y==287)
        {
            if ((x>xkey-130)&&(x<xkey))
            {
                Opendoor=1;
            }
        }
        txSetColor (TX_WHITE);
        txSelectFont ("Comic Sans MS", 30);
        txTextOut (600,380, "It's ~portals~");
        txLine (500,360,320,300);
        txLine (500,410,320,560);
        txLine (800,360,980,300);
        txLine (800,410,980,560);
        if (x>1375)
        {
            i=6;
            txClear();
            x=-100;
            Opendoor=0;
        }
    }
    if (i==6)
    {
        txClear();
        drawWill(sunglasses,hat,0.5,x,y,WILLBODY,CIRCUITWILLBODY,DARKWILLBODY,EYESBODY,HAT,CIRCUIT);
        drawThirdlvl();
        COLORREF PORTAL = RGB (102, 75, 19);
        drawPortal (PORTAL,800,700);
        drawPortal (PORTAL,170,300);
        PORTAL = RGB (36, 41, 112);
        drawPortal (PORTAL,1100,300);
        drawPortal (PORTAL,170,700);
        if (y==287)
        {
            if (x>1219)
            {
                x=1218;
            }
        }
        if (Opendoor==0)
            {
                drawDoor(DOOR,DARKDOOR);

                drawKey(xkey,ykey,KEY,DARKKEY);
                if (x>1210)
                {
                    x=1209;
                }
            }
        if (y==287)
        {
            if ((x>xkey-130)&&(x<xkey))
            {
                Opendoor=1;
            }
        }
        if (x>1375)
        {
            i=7;
            txClear();
            x=-100;
            Opendoor=0;
        }
    }
        //
    if (i==7)
    {
        txClear();
        drawWill(sunglasses,hat,0.5,x,y,WILLBODY,CIRCUITWILLBODY,DARKWILLBODY,EYESBODY,HAT,CIRCUIT);
        drawSaw (500,ysaw,DARKSAW,SAW);
        txSetColor (COLORREF RGB (45,45,45));
        txSetFillColor (COLORREF RGB (45,45,45));
        txRectangle (580,150,900,288);
        txRectangle (300,150,440,200);
        txSetColor (TX_WHITE);
        txSelectFont ("Comic Sans MS", 40);
        txTextOut (300,150, "It's ~saw~");
        txSelectFont ("Comic Sans MS", 20);
        txTextOut (580,200, "I don't advise touch this");
        txTextOut (580,225, "but if you want...");
        txTextOut (580,250, "then try");

        if (directionsaw==1)
        {
            ysaw=ysaw+10;
        }
        if (directionsaw==2)
        {
            ysaw=ysaw-10;
        }
        if (ysaw<160)
        {
            directionsaw=1;
        }
        if (ysaw>645)
        {
            directionsaw=2;
        }
        drawFourthlvl();
        if (Opendoor==0)
        {
            drawDoor(DOOR,DARKDOOR);
            int ykey=650;
            drawKey(xkey,ykey,KEY,DARKKEY);
            if (x>1210)
            {
                x=1209;
            }
        }
        if ((x>310)&&(x<530))
        {
            if (ysaw>518)
            {
            x=-100;
            rev=0;
            y=683;
            Opendoor=0;
            }
        }
        if (y==683)
        {
            if ((x>xkey-130)&&(x<xkey))
            {
                Opendoor=1;
            }
        }
        if (x>1375)
        {
            i=8;
            txClear();
            x=-100;
            Opendoor=0;
        }
    }
    if (i==8)
    {
        txClear();
        if (rev==0)
        {
                drawWill(sunglasses,hat,0.5,x,y,WILLBODY,CIRCUITWILLBODY,DARKWILLBODY,EYESBODY,HAT,CIRCUIT);
        }
        else
        {
            y=119;
            drawReversewill (sunglasses,hat,0.5,x,y,WILLBODY,CIRCUITWILLBODY,DARKWILLBODY,EYESBODY,HAT,CIRCUIT);
        }
        drawFourthlvl();
        txSetColor (COLORREF RGB (138, 103, 29),5);
        txLine (350,700,1050,700);
        txLine (350,100,1050,100);
        txSetColor (TX_WHITE);
        txSelectFont ("Comic Sans MS", 40);
        txTextOut (500,370, "If you forgot, this is elevator");
        txSelectFont ("Comic Sans MS", 28);
        txTextOut (630,230, "down arrow");
        txTextOut (640,540, "up arrow");
        if (Opendoor==0)
        {
            drawDoor(DOOR,DARKDOOR);
            int ykey=650;
            drawKey(xkey,ykey,KEY,DARKKEY);
            if (x>1210)
            {
                x=1209;
            }
        }
        drawSaw (xsaw,633,DARKSAW,SAW);
         if (directionsaw==1)
        {
            xsaw=xsaw+15;
        }
        if (directionsaw==2)
        {
            xsaw=xsaw-15;
        }
        if (xsaw<300)
        {
            directionsaw=1;
        }
        if (xsaw>1100)
        {
            directionsaw=2;
        }
        if (y==683)       //if x change
        {
            if ((x>xsaw-180)&&(x<xsaw+50))
            {
            x=-100;
            rev=0;
            y=683;
            Opendoor=0;
            }
        }
        if (y==683)
        {
            if ((x>xkey-130)&&(x<xkey))
            {
                Opendoor=1;
            }
        }
        if (rev==1)
        {
            if (x>1210)
            {
                x=1209;
            }
        }
        if (x>1375)
        {
            i=9;
            txClear();
            x=-100;
            Opendoor=0;
        }
    }
    if (i==9)
    {
        txClear();
        drawFourthlvl();
        if (xray==0)
        {
            WILLBODY = RGB (100, 100, 100);
            DARKWILLBODY = RGB (95,95,95);
            drawWill(sunglasses,hat,0.5,x,y,WILLBODY,CIRCUITWILLBODY,DARKWILLBODY,EYESBODY,HAT,CIRCUIT);
        }
        if (xray==1)
        {
        WILLBODY = (COLORREF RGB(7, 148, 0));
        DARKWILLBODY = (COLORREF RGB(7, 128, 0));
        drawWill(sunglasses,hat,0.5,x,y,WILLBODY,CIRCUITWILLBODY,DARKWILLBODY,EYESBODY,HAT,CIRCUIT);
        txSelectFont ("BRUSH SCRIPT MT", 30);
        txSetColor (TX_GREEN);
        if ((x>100)&&(x<300))
        {
            txTextOut (190,250, "now you can see");
        }
        if ((x>300)&&(x<500))
        {
            txTextOut (390,490, "more than before");
        }
        if ((x>500)&&(x<700))
        {
            txTextOut (590,320, "because you shouldn't trust anyone");
        }
        if ((x>700)&&(x<1000))
        {
            txSelectFont ("BRUSH SCRIPT MT", 50);
            txTextOut (949,280, "^_^");
            txSetColor (TX_GREEN,5);
            txLine (1000,200,1200,280);
            txLine (1020,270,1250,190);
        }

        if (Opendoor==0)
        {
            DOOR = (COLORREF RGB (5,94,0));
            DARKDOOR = (COLORREF RGB (3,64,0));
            KEY = (COLORREF RGB (5,94,0));
            DARKKEY = (COLORREF RGB (3,64,0));
            drawDoor(DOOR,DARKDOOR);
            int ykey=650;
            drawKey(xkey,ykey,KEY,DARKKEY);
            if (x>1210)
            {
                x=1209;
            }
        }
        if (y==683)
        {
            if ((x>xkey-130)&&(x<xkey))
            {
                Opendoor=1;
            }
        }
        }
        if (Opendoor==0)
        {
        if (x>1210)
            {
                x=1209;
            }
        }
        txSetColor (TX_WHITE);
        txSelectFont ("Comic Sans MS", 40);
        if ((x>100)&&(x<300))
        {
            txTextOut (190,200, "Hmm..");
        }
        if ((x>300)&&(x<500))
        {
            txTextOut (390,440, "this room");
        }
        if ((x>500)&&(x<700))
        {
            txTextOut (590,270, "so empty");
        }
        if ((x>700)&&(x<1000))
        {
            txSelectFont ("Comic Sans MS", 80);
            txTextOut (949,200, "or NOT");
        }
        if ((x>1000)&&(x<1400))
        {
            txSelectFont ("Comic Sans MS", 30);
            txTextOut (949,200, "try turn on ~xray~");
            txTextOut (975,235, "'z'");
            txTextOut (949,270, "turn off");
            txTextOut (975,305, "'x'");
        }
        if (x>1375)
        {
            i=10;
            txClear();
            x=-100;
            Opendoor=0;
        }
    }
    if (i==10)
    {
        txClear();
        drawFourthlvl();
        if (Opendoor==0)
        {
        if (x>1210)
            {
                x=1209;
            }
        }
        if (xray==0)
        {
            WILLBODY = RGB (100, 100, 100);
            DARKWILLBODY = RGB (95,95,95);
            drawWill(sunglasses,hat,0.5,x,y,WILLBODY,CIRCUITWILLBODY,DARKWILLBODY,EYESBODY,HAT,CIRCUIT);
        }
        if (xray==1)
        {
        if (Opendoor==0)
        {
            DOOR = (COLORREF RGB (5,94,0));
            DARKDOOR = (COLORREF RGB (3,64,0));
            KEY = (COLORREF RGB (5,94,0));
            DARKKEY = (COLORREF RGB (3,64,0));
            drawDoor(DOOR,DARKDOOR);
            int ykey=650;
            drawKey(xkey,ykey,KEY,DARKKEY);
            if (x>1210)
            {
                x=1209;
            }
        }
        if (y==683)
        {
            if ((x>xkey-130)&&(x<xkey))
            {
                Opendoor=1;
            }
        }
        if ((x>510)&&(x<730))
        {
            if (ysaw>518)
            {
            x=-100;
            rev=0;
            y=683;
            Opendoor=0;
            }
        }
        WILLBODY = (COLORREF RGB(7, 148, 0));
        DARKWILLBODY = (COLORREF RGB(7, 128, 0));
        DARKSAW = (COLORREF RGB(8, 82, 0));
        SAW = (COLORREF RGB(11, 111, 1));
        drawWill(sunglasses,hat,0.5,x,y,WILLBODY,CIRCUITWILLBODY,DARKWILLBODY,EYESBODY,HAT,CIRCUIT);
        drawSaw (700,ysaw,DARKSAW,SAW);
         if (directionsaw==1)
        {
            ysaw=ysaw+15;
        }
        if (directionsaw==2)
        {
            ysaw=ysaw-15;
        }
        if (ysaw<200)
        {
            directionsaw=1;
        }
        if (ysaw>645)
        {
            directionsaw=2;
        }
        }
        if (x>1375)
        {
            i=11;
            txClear();
            x=-100;
            Opendoor=0;
        }
    }
    if (i==11)
    {
        txClear();
        drawFourthlvl();

        if (Opendoor==0)
        {
            if (x>1210)
            {
                x=1209;
            }
        DOOR = RGB (9, 46, 156);
        DARKDOOR = RGB (9, 20, 60);

        KEY = RGB (9, 46, 156);
        DARKKEY = RGB (9, 20, 60);
        drawDoor(DOOR,DARKDOOR);
        int ykey=650;
        drawKey(xkey,ykey,KEY,DARKKEY);
        }
        if (y==683)
        {
            if ((x>xkey-130)&&(x<xkey))
            {
                Opendoor=1;
            }
        }
        if (xray==0)
        {
            WILLBODY = RGB (100, 100, 100);
            DARKWILLBODY = RGB (95,95,95);
            drawWill(sunglasses,hat,0.5,x,y,WILLBODY,CIRCUITWILLBODY,DARKWILLBODY,EYESBODY,HAT,CIRCUIT);
        }
        if (xray==1)
        {
            WILLBODY = (COLORREF RGB(7, 148, 0));
            DARKWILLBODY = (COLORREF RGB(7, 128, 0));
            drawWill(sunglasses,hat,0.5,x,y,WILLBODY,CIRCUITWILLBODY,DARKWILLBODY,EYESBODY,HAT,CIRCUIT);
        }
}


    }
txEnd();
 }
