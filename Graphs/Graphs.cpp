    #include "Resources\\Libs\\GraphLib.h"

    enum list {Off = -1, None = 0, StraightG = 1, ModuleG, ParabolaG, ParabolaBranchG, CubicParabolaG, RadioWavesG, SinusG, TangentG, ArcTangentG};

    void drawning(list graphicOnCanvas, list graphicMenu, list graphicMenuOver, double *coefficients, int coefSelect, bool soundCheckGraphs, bool soundCheckMenu, button GC, button menu, button down, button up, button kCoef, button aCoef, button bCoef, button cCoef, button straight, button module, button parabola, button parabolaBranch, button cubicParabola, button radioWaves, button sinus, button tangent, button arcTangent, HDC background, HDC graphicsMenu, HDC graphicsOn, HDC menuOn, HDC downOff, HDC downOn, HDC upOff, HDC upOn, HDC kfFrame, HDC allGraphics, HDC straightG, HDC moduleG, HDC parabolaG, HDC parabolaBranchG, HDC cubicParabolaG, HDC radioWavesG, HDC sinusG, HDC tangentG, HDC arcTangentG);
    void keyboardControls(list *graphicOnCanvas, list *graphicMenu, list *graphicMenuOver, double *coefficients, int *coefSelect, bool *soundCheckGraphs, bool *soundCheckMenu, button GC, button menu, button down, button up, button kCoef, button aCoef, button bCoef, button cCoef, button straight, button module, button parabola, button parabolaBranch, button cubicParabola, button radioWaves, button sinus, button tangent, button arcTangent, HDC background, HDC graphicsMenu, HDC graphicsOn, HDC menuOn, HDC downOff, HDC downOn, HDC upOff, HDC upOn, HDC kfFrame, HDC allGraphics, HDC straightG, HDC moduleG, HDC parabolaG, HDC parabolaBranchG, HDC cubicParabolaG, HDC radioWavesG, HDC sinusG, HDC tangentG, HDC arcTangentG);

    int main()
    {
        txCreateWindow(1280, 720);
        txSetFillColor(TX_WHITE);
        txFloodFill(0, 0, FLOODFILLBORDER);
        txTextCursor(FALSE);

        list graphicOnCanvas = None;
        list graphicMenu = Off;
        list graphicMenuOver = Off;

        double coefficients[5] = {1, 1, 1 , 1, 2};
        int coefSelect = 0;
        bool soundCheckGraphs;
        bool soundCheckMenu;

        button GC(920, 552, 1276, 621);
        button menu(950, 622, 1280, 720);
        button down(984, 357, 1031, 400);
        button up(984, 290, 1031, 333);

        button kCoef(1077, 334, 1098, 357);  
        button aCoef(1122, 334, 1144, 357);
        button bCoef(1168, 334, 1185, 357);
        button cCoef(1208, 334, 1229, 357);

        button straight(477, 125, 797, 167);
        button module(500, 177, 770, 221);
        button parabola(405, 233, 871, 275);
        button parabolaBranch(471, 272, 859, 329);
        button cubicParabola(360, 341, 913, 383);
        button radioWaves(357, 397, 917, 491);
        button sinus(493, 505, 783, 545);
        button tangent(491, 558, 784, 599);
        button arcTangent(422, 613, 852, 653);

        HDC background = txLoadImage("Resources\\Images\\background.bmp");
        HDC graphicsMenu = txLoadImage("Resources\\Images\\graphicsChoose.bmp");
        HDC graphicsOn = txLoadImage("Resources\\Images\\graphicsOn.bmp");
        HDC menuOn = txLoadImage("Resources\\Images\\menuOn.bmp"); 
        HDC downOff = txLoadImage("Resources\\Images\\downOff.bmp"); 
        HDC downOn = txLoadImage("Resources\\Images\\downOn.bmp"); 
        HDC upOff = txLoadImage("Resources\\Images\\upOff.bmp"); 
        HDC upOn = txLoadImage("Resources\\Images\\upOn.bmp"); 
        HDC kfFrame = txLoadImage("Resources\\Images\\kfFrame.bmp"); 

        HDC allGraphics = txLoadImage("Resources\\Images\\Graphics\\all.bmp");
        HDC straightG = txLoadImage("Resources\\Images\\Graphics\\straightG.bmp");
        HDC moduleG = txLoadImage("Resources\\Images\\Graphics\\moduleG.bmp");
        HDC parabolaG = txLoadImage("Resources\\Images\\Graphics\\parabolaG.bmp");
        HDC parabolaBranchG = txLoadImage("Resources\\Images\\Graphics\\parabolaBranchG.bmp");
        HDC cubicParabolaG = txLoadImage("Resources\\Images\\Graphics\\cubicParabolaG.bmp");
        HDC radioWavesG = txLoadImage("Resources\\Images\\Graphics\\radioWavesG.bmp");
        HDC sinusG = txLoadImage("Resources\\Images\\Graphics\\sinusG.bmp");
        HDC tangentG = txLoadImage("Resources\\Images\\Graphics\\tangentG.bmp");
        HDC arcTangentG = txLoadImage("Resources\\Images\\Graphics\\arcTangentG.bmp");

        while(TRUE)
        {
            txBegin();
            drawning(graphicOnCanvas, graphicMenu, graphicMenuOver, coefficients, coefSelect, soundCheckGraphs, soundCheckMenu, GC, menu, down, up, kCoef, aCoef, bCoef, cCoef, straight, module, parabola, parabolaBranch, cubicParabola, radioWaves, sinus, tangent, arcTangent, background, graphicsMenu, graphicsOn, menuOn, downOff, downOn, upOff, upOn, kfFrame, allGraphics, straightG, moduleG, parabolaG, parabolaBranchG, cubicParabolaG, radioWavesG, sinusG, tangentG, arcTangentG);
            txEnd();
            keyboardControls(&graphicOnCanvas, &graphicMenu, &graphicMenuOver, coefficients, &coefSelect, &soundCheckGraphs, &soundCheckMenu, GC, menu, down, up, kCoef, aCoef, bCoef, cCoef, straight, module, parabola, parabolaBranch, cubicParabola, radioWaves, sinus, tangent, arcTangent, background, graphicsMenu,  graphicsOn, menuOn, downOff, downOn, upOff, upOn, kfFrame, allGraphics, straightG, moduleG, parabolaG, parabolaBranchG, cubicParabolaG, radioWavesG, sinusG, tangentG, arcTangentG);
        }
        return 0;
    }

    void drawning(list graphicOnCanvas, list graphicMenu, list graphicMenuOver, double *coefficients, int coefSelect, bool soundCheckGraphs, bool soundCheckMenu, button GC, button menu, button down, button up, button kCoef, button aCoef, button bCoef, button cCoef, button straight, button module, button parabola, button parabolaBranch, button cubicParabola, button radioWaves, button sinus, button tangent, button arcTangent, HDC background, HDC graphicsMenu, HDC graphicsOn, HDC menuOn, HDC downOff, HDC downOn, HDC upOff, HDC upOn, HDC kfFrame, HDC allGraphics, HDC straightG, HDC moduleG, HDC parabolaG, HDC parabolaBranchG, HDC cubicParabolaG, HDC radioWavesG, HDC sinusG, HDC tangentG, HDC arcTangentG)
    {
        txSetFillColor(TX_WHITE);
        txClear();
        
        txBitBlt(txDC(), 0, 0, 1280, 720, background, 0, 0);

        if(up.IsOver() and graphicMenu == Off)
        {
            txAlphaBlend(txDC(), 980, 290, 58, 53, upOn, 0, 0, 1);
        }else{
            txAlphaBlend(txDC(), 984, 290, 48, 44, upOff, 0, 0, 1);
        }

        if(down.IsOver() and graphicMenu == Off)
        {
            txAlphaBlend(txDC(), 980, 357, 58, 53, downOn, 0, 0, 1);
        }else{
            txAlphaBlend(txDC(), 984, 357, 48, 44, downOff, 0, 0, 1);
        }

        if(coefSelect == 1)
        {
            txAlphaBlend(txDC(), 1062, 318, 52, 55, kfFrame, 0, 0, 1);
        }
        if(coefSelect == 2)
        {
            txAlphaBlend(txDC(), 1107, 318, 52, 55, kfFrame, 0, 0, 1);
        }
        if(coefSelect == 3)
        {
            txAlphaBlend(txDC(), 1151, 318, 52, 55, kfFrame, 0, 0, 1);
        }
        if(coefSelect == 4)
        {
            txAlphaBlend(txDC(), 1193, 318, 52, 55, kfFrame, 0, 0, 1);
        }

        if(GC.IsOver() or graphicMenu != Off)
        {
            txAlphaBlend(txDC(), 0, 0, 1280, 720, graphicsOn, 0, 0, 1);
        }

        graphicsBuilder(graphicOnCanvas, coefficients[0], coefficients[1], coefficients[2], coefficients[3], coefficients[4]);

        if(menu.IsOver())
        {
            txAlphaBlend(txDC(), 0, 0, 1280, 720, menuOn, 0, 0, 1);
        }

        switch(graphicMenu)
        {
            case None:
                txAlphaBlend(txDC(), 0, 0, 1280, 720, graphicsMenu, 0, 0, 1);
                switch(graphicMenuOver)
                {
                    case None:
                        txAlphaBlend(txDC(), 0, 0, 1280, 720, allGraphics, 0, 0, 1);
                        break;

                    case StraightG:
                        txAlphaBlend(txDC(), 0, 0, 1280, 720, straightG, 0, 0, 1);
                        break;

                    case ModuleG:
                        txAlphaBlend(txDC(), 0, 0, 1280, 720, moduleG, 0, 0, 1);
                        break;
                        
                    case ParabolaG:
                        txAlphaBlend(txDC(), 0, 0, 1280, 720, parabolaG, 0, 0, 1);
                        break;

                    case ParabolaBranchG:
                        txAlphaBlend(txDC(), 0, 0, 1280, 720, parabolaBranchG, 0, 0, 1);
                        break;

                    case CubicParabolaG:
                        txAlphaBlend(txDC(), 0, 0, 1280, 720, cubicParabolaG, 0, 0, 1);
                        break;

                    case RadioWavesG:
                        txAlphaBlend(txDC(), 0, 0, 1280, 720, radioWavesG, 0, 0, 1);
                        break;

                    case SinusG:
                        txAlphaBlend(txDC(), 0, 0, 1280, 720, sinusG, 0, 0, 1);
                        break;

                    case TangentG:
                        txAlphaBlend(txDC(), 0, 0, 1280, 720, tangentG, 0, 0, 1);
                        break;

                    case ArcTangentG:
                        txAlphaBlend(txDC(), 0, 0, 1280, 720, arcTangentG, 0, 0, 1);
                        break;
                }
                break;

            case StraightG:
                txAlphaBlend(txDC(), 0, 0, 1280, 720, graphicsMenu, 0, 0, 1);
                txAlphaBlend(txDC(), 0, 0, 1280, 720, straightG, 0, 0, 1);
                break;

            case ModuleG:
                txAlphaBlend(txDC(), 0, 0, 1280, 720, graphicsMenu, 0, 0, 1);
                txAlphaBlend(txDC(), 0, 0, 1280, 720, moduleG, 0, 0, 1);
                break;
                
            case ParabolaG:
                txAlphaBlend(txDC(), 0, 0, 1280, 720, graphicsMenu, 0, 0, 1);
                txAlphaBlend(txDC(), 0, 0, 1280, 720, parabolaG, 0, 0, 1);
                break;

            case ParabolaBranchG:
                txAlphaBlend(txDC(), 0, 0, 1280, 720, graphicsMenu, 0, 0, 1);
                txAlphaBlend(txDC(), 0, 0, 1280, 720, parabolaBranchG, 0, 0, 1);
                break;

            case CubicParabolaG:
                txAlphaBlend(txDC(), 0, 0, 1280, 720, graphicsMenu, 0, 0, 1);
                txAlphaBlend(txDC(), 0, 0, 1280, 720, cubicParabolaG, 0, 0, 1);
                break;

            case RadioWavesG:
                txAlphaBlend(txDC(), 0, 0, 1280, 720, graphicsMenu, 0, 0, 1);
                txAlphaBlend(txDC(), 0, 0, 1280, 720, radioWavesG, 0, 0, 1);
                break;

            case SinusG:
                txAlphaBlend(txDC(), 0, 0, 1280, 720, graphicsMenu, 0, 0, 1);
                txAlphaBlend(txDC(), 0, 0, 1280, 720, sinusG, 0, 0, 1);
                break;

            case TangentG:
                txAlphaBlend(txDC(), 0, 0, 1280, 720, graphicsMenu, 0, 0, 1);
                txAlphaBlend(txDC(), 0, 0, 1280, 720, tangentG, 0, 0, 1);
                break;

            case ArcTangentG:
                txAlphaBlend(txDC(), 0, 0, 1280, 720, graphicsMenu, 0, 0, 1);
                txAlphaBlend(txDC(), 0, 0, 1280, 720, arcTangentG, 0, 0, 1);
                break;
        }
    }

    void keyboardControls(list *graphicOnCanvas, list *graphicMenu, list *graphicMenuOver, double *coefficients, int *coefSelect, bool *soundCheckGraphs, bool *soundCheckMenu, button GC, button menu, button down, button up, button kCoef, button aCoef, button bCoef, button cCoef, button straight, button module, button parabola, button parabolaBranch, button cubicParabola, button radioWaves, button sinus, button tangent, button arcTangent, HDC background, HDC graphicsMenu, HDC graphicsOn, HDC menuOn, HDC downOff, HDC downOn, HDC upOff, HDC upOn, HDC kfFrame, HDC allGraphics, HDC straightG, HDC moduleG, HDC parabolaG, HDC parabolaBranchG, HDC cubicParabolaG, HDC radioWavesG, HDC sinusG, HDC tangentG, HDC arcTangentG)
    {
        //Over
        if(GC.IsOver())
        {
            if(*soundCheckGraphs and *graphicMenu == Off)
            {
                txPlaySound("Resources\\Sounds\\Cursor.wav", SND_ASYNC);
                *soundCheckGraphs = false;
            }
        }else{
            *soundCheckGraphs = true;
        }

        if(*graphicMenu == None)
        {
            if(straight.IsOver())
            {
                *graphicMenuOver = StraightG;
            }else{
            if(module.IsOver())
            {
                *graphicMenuOver = ModuleG;
            }else{
            if(parabola.IsOver())
            {
                *graphicMenuOver = ParabolaG;
            }else{
            if(parabolaBranch.IsOver())
            {
                *graphicMenuOver = ParabolaBranchG;
            }else{
            if(cubicParabola.IsOver())
            {
                *graphicMenuOver = CubicParabolaG;
            }else{
            if(radioWaves.IsOver())
            {
                *graphicMenuOver = RadioWavesG;
            }else{
            if(sinus.IsOver())
            {
                *graphicMenuOver = SinusG;
            }else{
            if(tangent.IsOver())
            {
                *graphicMenuOver = TangentG;
            }else{
            if(arcTangent.IsOver())
            {
                *graphicMenuOver = ArcTangentG;
            }else{
                *graphicMenuOver = None;
            }
            }
            }
            }
            }
            }
            }
            }
            }
        }

        if(menu.IsOver())
        {
            if(*soundCheckMenu)
            {
                txPlaySound("Resources\\Sounds\\Cursor.wav", SND_ASYNC);
                *soundCheckMenu = false;
            }
        }else{
            *soundCheckMenu = true;
        }

        if(kCoef.IsClicked() and *graphicMenu == Off)
        {
            *coefSelect = 1;
        }
        if(aCoef.IsClicked() and *graphicMenu == Off)
        {
            *coefSelect = 2;
        }
        if(bCoef.IsClicked() and *graphicMenu == Off)
        {
            *coefSelect = 3;
        }
        if(cCoef.IsClicked() and *graphicMenu == Off)
        {
            *coefSelect = 4;
        }

        if(up.IsClicked() and *graphicMenu == Off)
        {
            switch(*coefSelect)
            {
                case 1:
                    coefficients[0] = coefficients[0]+0.1;
                    break;
                case 2:
                    coefficients[1] = coefficients[1]+0.1;
                    break;
                case 3:
                    coefficients[2] = coefficients[2]+0.1;
                    break;
                case 4:
                    coefficients[3] = coefficients[3]+0.1;
                    break;
            }
        }

        if(down.IsClicked() and *graphicMenu == Off)
        {
            switch(*coefSelect)
            {
                case 1:
                    coefficients[0] = coefficients[0]-0.1;
                    break;
                case 2:
                    coefficients[1] = coefficients[1]-0.1;
                    break;
                case 3:
                    coefficients[2] = coefficients[2]-0.1;
                    break;
                case 4:
                    coefficients[3] = coefficients[3]-0.1;
                    break;
            }
        }


        if(GC.IsClicked())
        {
            if(*graphicMenu == Off)
            {
                *graphicMenu = *graphicOnCanvas;
                Sleep(200);
            }else{
                *graphicMenu = Off;
                Sleep(200);
            }
        }
        
        if(straight.IsClicked() and *graphicMenu != Off)
        {
            *graphicOnCanvas = StraightG;
            *graphicMenu = StraightG;
        }
        if(module.IsClicked() and *graphicMenu != Off)
        {
            *graphicOnCanvas = ModuleG;
            *graphicMenu = ModuleG;
        }
        if(parabola.IsClicked() and *graphicMenu != Off)
        {
            *graphicOnCanvas = ParabolaG;
            *graphicMenu = ParabolaG;
        }
        if(parabolaBranch.IsClicked() and *graphicMenu != Off)
        {
            *graphicOnCanvas = ParabolaBranchG;
            *graphicMenu = ParabolaBranchG;
        }
        if(cubicParabola.IsClicked() and *graphicMenu != Off)
        {
            *graphicOnCanvas = CubicParabolaG;
            *graphicMenu = CubicParabolaG;
        }
        if(radioWaves.IsClicked() and *graphicMenu != Off)
        {
            *graphicOnCanvas = RadioWavesG;
            *graphicMenu = RadioWavesG;
        }
        if(sinus.IsClicked() and *graphicMenu != Off)
        {
            *graphicOnCanvas = SinusG;
            *graphicMenu = SinusG;
        }
        if(tangent.IsClicked() and *graphicMenu != Off)
        {
            *graphicOnCanvas = TangentG;
            *graphicMenu = TangentG;
        }
        if(arcTangent.IsClicked() and *graphicMenu != Off)
        {
            *graphicOnCanvas = ArcTangentG;
            *graphicMenu = ArcTangentG;
        }
    }