    #include "TXLib.h"

    void drawTimon(int x, int y, int timonEar, int timonLeg, bool timonTale, bool timonHair, COLORREF timonBallyColor, COLORREF timonBackColor, COLORREF timonHairColor, COLORREF timonLimbColor);
    void drawPig(int x, int y, int pigEar, int pigHand, bool pigEyes, bool pigLeg, COLORREF pigEarColor, COLORREF pigNoseColor, COLORREF pigShirtColor, COLORREF pigSkinColor);
    void drawPenguin(int x, int y, int penguinHand, int penguinLeg, bool penguinRoth, int penguinEyes, COLORREF penguinEyesColor, COLORREF penguinLegsColor, COLORREF penguinBackColor, COLORREF penguinBallyColor);
    void drawFly(int x, int y, int flyHand, int flyLeg, bool flyHair, bool flyWings, COLORREF flyRothColor, COLORREF flyShirtColor, COLORREF flySkinColor, COLORREF flyEyesColor);
    void drawMinion(int x, int y, int MinionHand, bool MinionGlasses, bool MinionHair, bool MinionRoth, COLORREF MinionEyesColor, COLORREF MinionPantsColor, COLORREF MinionGlassesColor, COLORREF MinionPocketColor);
    void drawSkubi(int x, int y, bool SkubiKeychain, bool skubyiMoles, bool SkubiEyes, bool SkubiNose, COLORREF SkubiStrokePanelColor, COLORREF SkubiSkinColor, COLORREF SkubiCollarColor, COLORREF SkubiEyesColor);

    CONST COLORREF DARKORANGE = RGB(117, 79, 56);
    CONST COLORREF DARKGRAY = RGB(26, 15, 13);
    CONST COLORREF BLACK = RGB(0, 0, 1);
    CONST COLORREF ORANGE = RGB(166, 61, 40);
    CONST COLORREF WHITE = RGB(255, 255, 241);
    CONST COLORREF LIGHTBLUE = RGB(138, 218, 245);
    CONST COLORREF YELLOW = RGB(255, 255, 0);

    int main( )
        {
            //Заливка фона
            txCreateWindow (1400, 800);

            txSetFillColor (TX_WHITE);

            txFloodFill(0, 0, FLOODFILLBORDER);
            //Настройки
                //Тимон
                    int timonX = 214;
                    int timonY = 107;
                    int timonEar = 3;  //0-Нет ушей, 1-Правое ухо, 2-Левое ухо, 3-Оба уха
                    int timonLeg = 3;  //0-Нет ног, 1-Правая нога, 2-Левая нога, 3-Обе ноги
                    bool timonTale = true;
                    bool timonHair = true;
                    COLORREF timonBallyColor = RGB(241, 217, 183);
                    COLORREF timonBackColor = RGB(169, 95, 46);
                    COLORREF timonHairColor = RGB(166, 61, 40);
                    COLORREF timonLimbColor = RGB(87, 78, 64);

                //Хрюня
                    int pigX = 777;
                    int pigY = 338;
                    int pigEar = 3;  //0-Нет ушей, 1-Правое ухо, 2-Левое ухо, 3-Оба уха
                    int pigHand = 3;  //0-Нет рук, 1-Правая рука, 2-Левая рука, 3-Обе руки
                    bool pigEyes = true;
                    bool pigLeg = true;
                    COLORREF pigEarColor = RGB(230, 152, 194);
                    COLORREF pigNoseColor = RGB(251, 202, 205);
                    COLORREF pigShirtColor = RGB(240, 78, 150);
                    COLORREF pigSkinColor = RGB(251, 202, 205);


                //Пингвин
                    int penguinX = 1155;
                    int penguinY = 92;
                    int penguinHand = 3;  //0-Нет рук, 1-Правая рука, 2-Левая рука, 3-Обе руки
                    int penguinLeg = 3;  //0-Нет ног, 1-Правая нога, 2-Левая нога, 3-Обе ноги
                    int penguinEyes = 3; //0-Нет глаз, 1-Правый глаз, 2-Левый газ, 3-Оба глаза
                    bool penguinRoth = true;
                    COLORREF penguinEyesColor = RGB(51, 83, 128);
                    COLORREF penguinLegsColor = RGB(169, 95, 46);
                    COLORREF penguinBackColor = RGB(0, 0, 1);
                    COLORREF penguinBallyColor = RGB(255, 255, 241);

                //Муха
                    int flyX = 128;
                    int flyY = 550;
                    int flyHand = 3;  //0-Нет рук, 1-Правая рука, 2-Левая рука, 3-Обе руки
                    bool flyLeg = true;//При отсутствии ног, крылья автоматические исчезают
                    bool flyHair = true;
                    bool flyWings = true;
                    COLORREF flyRothColor = RGB(148, 56, 105);
                    COLORREF flyShirtColor = RGB(255, 0, 0);
                    COLORREF flySkinColor = RGB(88, 165, 155);
                    COLORREF flyEyesColor = RGB(255, 255, 0);

                //Миньон
                    int MinionX = 585;
                    int MinionY = 493;
                    int MinionHand = 3;  //0-Нет рук, 1-Правая рука, 2-Левая рука, 3-Обе руки
                    bool MinionGlasses = true;
                    bool MinionHair = true;
                    bool MinionRoth = true;
                    COLORREF MinionEyesColor = RGB(117, 79, 56);
                    COLORREF MinionPantsColor = RGB(0, 139, 255);
                    COLORREF MinionGlassesColor = RGB(87, 78, 64);
                    COLORREF MinionPocketColor = RGB(0, 139, 255);

                //Скуби-ду
                    int SkubiX = 1106;
                    int SkubiY = 726;
                    bool SkubiNose = true;
                    bool SkubiKeychain = true;
                    bool skubyiMoles = true;
                    bool SkubiEyes = true;
                    COLORREF SkubiStrokePanelColor = RGB(0, 0, 1);
                    COLORREF SkubiSkinColor = RGB(142, 80, 6);
                    COLORREF SkubiCollarColor = RGB(10, 105, 127);
                    COLORREF SkubiEyesColor = RGB(51, 83, 128);


            drawTimon(timonX, timonY, timonEar, timonLeg, timonTale, timonHair, timonBallyColor, timonBackColor, timonHairColor, timonLimbColor);
            drawPig(pigX, pigY, pigEar, pigHand, pigEyes, pigLeg, pigEarColor, pigNoseColor, pigShirtColor, pigSkinColor);
            drawPenguin(penguinX, penguinY, penguinHand, penguinLeg, penguinRoth, penguinEyes, penguinEyesColor, penguinLegsColor, penguinBackColor, penguinBallyColor);
            drawFly(flyX, flyY, flyHand, flyLeg, flyHair, flyWings, flyRothColor, flyShirtColor, flySkinColor, flyEyesColor);
            drawMinion(MinionX, MinionY, MinionHand, MinionGlasses, MinionHair, MinionRoth, MinionEyesColor, MinionPantsColor, MinionGlassesColor, MinionPocketColor);
            drawSkubi(SkubiX, SkubiY, SkubiKeychain, skubyiMoles, SkubiEyes, SkubiNose, SkubiStrokePanelColor, SkubiSkinColor, SkubiCollarColor, SkubiEyesColor);

            return 0;
        }

    void drawTimon(int x, int y, int timonEar, int timonLeg, bool timonTale, bool timonHair, COLORREF timonBallyColor, COLORREF timonBackColor, COLORREF timonHairColor, COLORREF timonLimbColor)
    {
        //Тимон
                if (timonLeg == 0){
                    POINT TimonBack2 [14] = {{x+(-33), y+(181)}, {x+(-29), y+(186)}, {x+(-19), y+(196)}, {x+(-8), y+(203)}, {x+(1), y+(203)}, {x+(1), y+(203)}, {x+(-6), y+(197)}, {x+(-9), y+(192)}, {x+(-10), y+(191)}, {x+(-10), y+(162)}, {x+(-10), y+(162)}, {x+(-24), y+(162)}, {x+(-30), y+(176)}, {x+(-33), y+(182)}};
                    txSetColor(DARKORANGE);
                    txSetFillColor (timonBackColor);
                    txPolygon(TimonBack2, 14);}

                if (timonLeg == 1){
                    //Правая стопа
                    POINT TimonRightSole [14] = {{x+(-73), y+(259)}, {x+(-59), y+(258)}, {x+(-48), y+(254)}, {x+(-37), y+(250)}, {x+(-34), y+(248)}, {x+(-34), y+(242)}, {x+(-36), y+(239)}, {x+(-41), y+(234)}, {x+(-55), y+(234)}, {x+(-62), y+(236)}, {x+(-67), y+(240)}, {x+(-71), y+(244)}, {x+(-74), y+(249)}, {x+(-76), y+(256)}, };

                    txSetColor(DARKGRAY);
                    txSetFillColor (timonLimbColor);
                    txPolygon(TimonRightSole, 14);

                    //Правые пальцы
                    txSetColor(RGB (45, 27, 27));
                    txLine(x+(-75), y+(253), x+(-73), y+(250));
                    txLine(x+(-73), y+(250), x+(-69), y+(247));
                    txLine(x+(-69), y+(247), x+(-65), y+(243));
                    txLine(x+(-65), y+(243), x+(-62), y+(241));
                    txLine(x+(-62), y+(241), x+(-60), y+(240));

                    txLine(x+(-73), y+(257), x+(-67), y+(251));
                    txLine(x+(-67), y+(251), x+(-60), y+(248));
                    txLine(x+(-60), y+(248), x+(-56), y+(245));
                    txLine(x+(-56), y+(245), x+(-52), y+(244));


                    //Правая нога
                    POINT TimonRightLeg [38] = {{x+(-33), y+(248)}, {x+(-23), y+(245)}, {x+(-10), y+(242)}, {x+(-2), y+(240)}, {x+(3), y+(239)}, {x+(4), y+(237)}, {x+(0), y+(233)}, {x+(-4), y+(231)}, {x+(-12), y+(223)}, {x+(-14), y+(218)}, {x+(-12), y+(212)}, {x+(-6), y+(207)}, {x+(0), y+(204)}, {x+(0), y+(203)}, {x+(-6), y+(196)}, {x+(-10), y+(191)}, {x+(-10), y+(162)}, {x+(-24), y+(162)}, {x+(-30), y+(176)}, {x+(-34), y+(184)}, {x+(-41), y+(197)}, {x+(-44), y+(203)}, {x+(-46), y+(211)}, {x+(-47), y+(223)}, {x+(-46), y+(225)}, {x+(-44), y+(223)}, {x+(-43), y+(224)}, {x+(-41), y+(222)}, {x+(-38), y+(225)}, {x+(-36), y+(223)}, {x+(-27), y+(226)}, {x+(-20), y+(229)}, {x+(-14), y+(232)}, {x+(-13), y+(233)}, {x+(-14), y+(234)}, {x+(-40), y+(234)}, {x+(-36), y+(238)}, {x+(-33), y+(242)}, };

                    txSetColor(DARKORANGE);
                    txSetFillColor (timonBackColor);
                    txPolygon(TimonRightLeg, 38);}

                if (timonLeg == 2){
                    POINT TimonBack2 [14] = {{x+(-33), y+(181)}, {x+(-29), y+(186)}, {x+(-19), y+(196)}, {x+(-8), y+(203)}, {x+(1), y+(203)}, {x+(1), y+(203)}, {x+(-6), y+(197)}, {x+(-9), y+(192)}, {x+(-10), y+(191)}, {x+(-10), y+(162)}, {x+(-10), y+(162)}, {x+(-24), y+(162)}, {x+(-30), y+(176)}, {x+(-33), y+(182)}};
                    txSetColor(DARKORANGE);
                    txSetFillColor (timonBackColor);
                    txPolygon(TimonBack2, 14);

                    //Левая стопа
                    POINT TimonLeftSole [15] = {{x+(112), y+(237)}, {x+(112), y+(231)}, {x+(119), y+(224)}, {x+(119), y+(223)}, {x+(121), y+(222)}, {x+(139), y+(222)}, {x+(148), y+(227)}, {x+(151), y+(231)}, {x+(152), y+(234)}, {x+(152), y+(240)}, {x+(151), y+(241)}, {x+(141), y+(241)}, {x+(136), y+(240)}, {x+(127), y+(239)}, {x+(119), y+(238)}, };
                    txSetColor(DARKGRAY);
                    txSetFillColor (timonLimbColor);
                    txPolygon(TimonLeftSole, 15);

                    //Левые пальцы
                    txSetColor(RGB (45, 27, 27));
                    txLine(x+(150), y+(232), x+(145), y+(230));
                    txLine(x+(145), y+(230), x+(140), y+(227));
                    txLine(x+(140), y+(227), x+(135), y+(226));

                    txLine(x+(147), y+(240), x+(140), y+(233));
                    txLine(x+(140), y+(233), x+(137), y+(232));
                    txLine(x+(137), y+(232), x+(131), y+(229));

                    //Левая нога
                    POINT TimonLeftLeg [32] = {{x+(111), y+(237)}, {x+(111), y+(231)}, {x+(118), y+(224)}, {x+(118), y+(223)}, {x+(96), y+(224)}, {x+(79), y+(207)}, {x+(79), y+(206)}, {x+(61), y+(188)}, {x+(61), y+(187)}, {x+(58), y+(183)}, {x+(55), y+(179)}, {x+(51), y+(173)}, {x+(47), y+(166)}, {x+(43), y+(160)}, {x+(40), y+(155)}, {x+(39), y+(156)}, {x+(39), y+(178)}, {x+(37), y+(184)}, {x+(34), y+(189)}, {x+(30), y+(193)}, {x+(25), y+(197)}, {x+(20), y+(200)}, {x+(19), y+(202)}, {x+(41), y+(203)}, {x+(54), y+(207)}, {x+(64), y+(211)}, {x+(72), y+(216)}, {x+(78), y+(221)}, {x+(81), y+(226)}, {x+(82), y+(233)}, {x+(95), y+(234)}, {x+(106), y+(236)}, };
                    txSetColor(DARKORANGE);
                    txSetFillColor (timonBackColor);
                    txPolygon(TimonLeftLeg, 32);}

                if (timonLeg == 3){
                    //Правая стопа
                    POINT TimonRightSole [14] = {{x+(-73), y+(259)}, {x+(-59), y+(258)}, {x+(-48), y+(254)}, {x+(-37), y+(250)}, {x+(-34), y+(248)}, {x+(-34), y+(242)}, {x+(-36), y+(239)}, {x+(-41), y+(234)}, {x+(-55), y+(234)}, {x+(-62), y+(236)}, {x+(-67), y+(240)}, {x+(-71), y+(244)}, {x+(-74), y+(249)}, {x+(-76), y+(256)}, };

                    txSetColor(DARKGRAY);
                    txSetFillColor (timonLimbColor);
                    txPolygon(TimonRightSole, 14);

                    //Правые пальцы
                    txSetColor(RGB (45, 27, 27));
                    txLine(x+(-75), y+(253), x+(-73), y+(250));
                    txLine(x+(-73), y+(250), x+(-69), y+(247));
                    txLine(x+(-69), y+(247), x+(-65), y+(243));
                    txLine(x+(-65), y+(243), x+(-62), y+(241));
                    txLine(x+(-62), y+(241), x+(-60), y+(240));

                    txLine(x+(-73), y+(257), x+(-67), y+(251));
                    txLine(x+(-67), y+(251), x+(-60), y+(248));
                    txLine(x+(-60), y+(248), x+(-56), y+(245));
                    txLine(x+(-56), y+(245), x+(-52), y+(244));

                    //Правая нога
                    POINT TimonRightLeg [38] = {{x+(-33), y+(248)}, {x+(-23), y+(245)}, {x+(-10), y+(242)}, {x+(-2), y+(240)}, {x+(3), y+(239)}, {x+(4), y+(237)}, {x+(0), y+(233)}, {x+(-4), y+(231)}, {x+(-12), y+(223)}, {x+(-14), y+(218)}, {x+(-12), y+(212)}, {x+(-6), y+(207)}, {x+(0), y+(204)}, {x+(0), y+(203)}, {x+(-6), y+(196)}, {x+(-10), y+(191)}, {x+(-10), y+(162)}, {x+(-24), y+(162)}, {x+(-30), y+(176)}, {x+(-34), y+(184)}, {x+(-41), y+(197)}, {x+(-44), y+(203)}, {x+(-46), y+(211)}, {x+(-47), y+(223)}, {x+(-46), y+(225)}, {x+(-44), y+(223)}, {x+(-43), y+(224)}, {x+(-41), y+(222)}, {x+(-38), y+(225)}, {x+(-36), y+(223)}, {x+(-27), y+(226)}, {x+(-20), y+(229)}, {x+(-14), y+(232)}, {x+(-13), y+(233)}, {x+(-14), y+(234)}, {x+(-40), y+(234)}, {x+(-36), y+(238)}, {x+(-33), y+(242)}, };

                    txSetColor(DARKORANGE);
                    txSetFillColor (timonBackColor);
                    txPolygon(TimonRightLeg, 38);

                    //Левая стопа
                    POINT TimonLeftSole [15] = {{x+(112), y+(237)}, {x+(112), y+(231)}, {x+(119), y+(224)}, {x+(119), y+(223)}, {x+(121), y+(222)}, {x+(139), y+(222)}, {x+(148), y+(227)}, {x+(151), y+(231)}, {x+(152), y+(234)}, {x+(152), y+(240)}, {x+(151), y+(241)}, {x+(141), y+(241)}, {x+(136), y+(240)}, {x+(127), y+(239)}, {x+(119), y+(238)}, };
                    txSetColor(DARKGRAY);
                    txSetFillColor (timonLimbColor);
                    txPolygon(TimonLeftSole, 15);

                    //Левые пальцы
                    txSetColor(RGB (45, 27, 27));
                    txLine(x+(150), y+(232), x+(145), y+(230));
                    txLine(x+(145), y+(230), x+(140), y+(227));
                    txLine(x+(140), y+(227), x+(135), y+(226));

                    txLine(x+(147), y+(240), x+(140), y+(233));
                    txLine(x+(140), y+(233), x+(137), y+(232));
                    txLine(x+(137), y+(232), x+(131), y+(229));

                    //Левая нога
                    POINT TimonLeftLeg [32] = {{x+(111), y+(237)}, {x+(111), y+(231)}, {x+(118), y+(224)}, {x+(118), y+(223)}, {x+(96), y+(224)}, {x+(79), y+(207)}, {x+(79), y+(206)}, {x+(61), y+(188)}, {x+(61), y+(187)}, {x+(58), y+(183)}, {x+(55), y+(179)}, {x+(51), y+(173)}, {x+(47), y+(166)}, {x+(43), y+(160)}, {x+(40), y+(155)}, {x+(39), y+(156)}, {x+(39), y+(178)}, {x+(37), y+(184)}, {x+(34), y+(189)}, {x+(30), y+(193)}, {x+(25), y+(197)}, {x+(20), y+(200)}, {x+(19), y+(202)}, {x+(41), y+(203)}, {x+(54), y+(207)}, {x+(64), y+(211)}, {x+(72), y+(216)}, {x+(78), y+(221)}, {x+(81), y+(226)}, {x+(82), y+(233)}, {x+(95), y+(234)}, {x+(106), y+(236)}, };
                    txSetColor(DARKORANGE);
                    txSetFillColor (timonBackColor);
                    txPolygon(TimonLeftLeg, 32);}

                //Пузико
                POINT TimonBelly [52] = {{x+(1), y+(203)}, {x+(-6), y+(197)}, {x+(-9), y+(192)}, {x+(-10), y+(191)}, {x+(-10), y+(162)}, {x+(-9), y+(161)}, {x+(-8), y+(155)}, {x+(-6), y+(148)}, {x+(-3), y+(141)}, {x+(0), y+(131)}, {x+(2), y+(116)}, {x+(4), y+(102)}, {x+(7), y+(90)}, {x+(10), y+(81)}, {x+(13), y+(72)}, {x+(16), y+(62)}, {x+(16), y+(40)}, {x+(13), y+(31)}, {x+(10), y+(23)}, {x+(6), y+(15)}, {x+(3), y+(8)}, {x+(0), y+(4)}, {x+(0), y+(0)}, {x+(15), y+(4)}, {x+(21), y+(6)}, {x+(19), y+(7)}, {x+(25), y+(11)}, {x+(31), y+(15)}, {x+(25), y+(14)}, {x+(32), y+(20)}, {x+(39), y+(27)}, {x+(34), y+(25)}, {x+(39), y+(37)}, {x+(42), y+(42)}, {x+(42), y+(46)}, {x+(41), y+(47)}, {x+(38), y+(57)}, {x+(36), y+(75)}, {x+(34), y+(93)}, {x+(32), y+(117)}, {x+(34), y+(131)}, {x+(37), y+(146)}, {x+(40), y+(154)}, {x+(39), y+(178)}, {x+(37), y+(184)}, {x+(34), y+(189)}, {x+(30), y+(193)}, {x+(25), y+(197)}, {x+(20), y+(200)}, {x+(19), y+(201)}, {x+(5), y+(202)}, {x+(2), y+(204)}, };
                txSetColor(DARKORANGE);
                txSetFillColor (timonBallyColor);
                txPolygon(TimonBelly, 52);

                if (timonTale) {
                    //Начало хвоста
                    POINT TimonTaleStart [23] = {{x+(-19), y+(143)}, {x+(-20), y+(143)}, {x+(-30), y+(133)}, {x+(-34), y+(127)}, {x+(-38), y+(121)}, {x+(-43), y+(113)}, {x+(-48), y+(107)}, {x+(-51), y+(102)}, {x+(-56), y+(98)}, {x+(-61), y+(95)}, {x+(-64), y+(92)}, {x+(-65), y+(92)}, {x+(-66), y+(93)}, {x+(-70), y+(93)}, {x+(-72), y+(93)}, {x+(-73), y+(94)}, {x+(-74), y+(96)}, {x+(-74), y+(103)}, {x+(-74), y+(104)}, {x+(-68), y+(110)}, {x+(-53), y+(145)}, {x+(-33), y+(181)}, {x+(-24), y+(164)}, };
                    txSetColor(DARKORANGE);
                    txSetFillColor(timonBackColor);
                    txPolygon(TimonTaleStart, 23);

                    //Конец хвоста
                    POINT TimonTaleEnd [17] = {{x+(-116), y+(77)}, {x+(-101), y+(80)}, {x+(-87), y+(84)}, {x+(-75), y+(88)}, {x+(-65), y+(91)}, {x+(-66), y+(92)}, {x+(-71), y+(92)}, {x+(-73), y+(93)}, {x+(-75), y+(95)}, {x+(-75), y+(103)}, {x+(-75), y+(103)}, {x+(-76), y+(103)}, {x+(-82), y+(97)}, {x+(-90), y+(93)}, {x+(-95), y+(90)}, {x+(-115), y+(80)}, {x+(-116), y+(79)}, };
                    txSetColor(DARKGRAY);
                    txSetFillColor (timonLimbColor);
                    txPolygon(TimonTaleEnd, 17);}

                //Спина
                POINT TimonBack [32] = {{x+(-24), y+(162)}, {x+(-23), y+(158)}, {x+(-19), y+(143)}, {x+(-11), y+(114)}, {x+(-6), y+(84)}, {x+(-4), y+(77)}, {x+(-4), y+(45)}, {x+(-10), y+(31)}, {x+(-14), y+(24)}, {x+(-14), y+(3)}, {x+(-10), y+(-1)}, {x+(-9), y+(-2)}, {x+(0), y+(-2)}, {x+(0), y+(0)}, {x+(0), y+(4)}, {x+(3), y+(8)}, {x+(6), y+(15)}, {x+(10), y+(23)}, {x+(13), y+(31)}, {x+(16), y+(40)}, {x+(16), y+(62)}, {x+(13), y+(72)}, {x+(10), y+(81)}, {x+(7), y+(90)}, {x+(4), y+(102)}, {x+(2), y+(116)}, {x+(0), y+(131)}, {x+(-3), y+(141)}, {x+(-6), y+(148)}, {x+(-8), y+(155)}, {x+(-9), y+(161)}, {x+(-10), y+(162)}, };
                txSetColor(DARKORANGE);
                txSetFillColor (timonBackColor);
                txPolygon(TimonBack, 32);

                txSetColor(timonBackColor);
                txLine(x+(-23), y+(162), x+(-10), y+(162));

                //Правая рука
                POINT TimonRightArm [50] = {{x+(-14), y+(24)}, {x+(-17), y+(25)}, {x+(-19), y+(27)}, {x+(-26), y+(32)}, {x+(-34), y+(37)}, {x+(-41), y+(39)}, {x+(-47), y+(46)}, {x+(-49), y+(46)}, {x+(-48), y+(42)}, {x+(-49), y+(39)}, {x+(-54), y+(48)}, {x+(-55), y+(39)}, {x+(-51), y+(29)}, {x+(-51), y+(10)}, {x+(-47), y+(-7)}, {x+(-47), y+(-15)}, {x+(-50), y+(-19)}, {x+(-57), y+(-23)}, {x+(-67), y+(-23)}, {x+(-80), y+(-17)}, {x+(-85), y+(-17)}, {x+(-87), y+(-20)}, {x+(-88), y+(-21)}, {x+(-104), y+(-21)}, {x+(-104), y+(-24)}, {x+(-99), y+(-26)}, {x+(-99), y+(-28)}, {x+(-101), y+(-29)}, {x+(-101), y+(-32)}, {x+(-93), y+(-31)}, {x+(-88), y+(-28)}, {x+(-67), y+(-28)}, {x+(-50), y+(-39)}, {x+(-43), y+(-46)}, {x+(-41), y+(-49)}, {x+(-41), y+(-53)}, {x+(-39), y+(-56)}, {x+(-29), y+(-56)}, {x+(-27), y+(-54)}, {x+(-27), y+(-51)}, {x+(-29), y+(-49)}, {x+(-33), y+(-48)}, {x+(-38), y+(-41)}, {x+(-41), y+(-32)}, {x+(-41), y+(4)}, {x+(-37), y+(14)}, {x+(-34), y+(20)}, {x+(-24), y+(13)}, {x+(-17), y+(5)}, {x+(-14), y+(3)}, };
                txSetColor(DARKORANGE);
                txSetFillColor(timonBackColor);
                txPolygon(TimonRightArm, 50);

                txSetColor(timonBackColor);
                txLine(x+(-14), y+(23), x+(-14), y+(4));
                txSetColor(DARKORANGE);
                txLine(x+(-34), y+(21), x+(-34), y+(27));
                txLine(x+(-34), y+(27), x+(-36), y+(30));

                txSetColor(DARKGRAY);
                txLine(x+(-87), y+(-20), x+(-86), y+(-20));
                txLine(x+(-86), y+(-20), x+(-85), y+(-22));
                txLine(x+(-85), y+(-22), x+(-77), y+(-24));
                txLine(x+(-77), y+(-24), x+(-75), y+(-26));
                txLine(x+(-75), y+(-26), x+(-73), y+(-28));

                txSetFillColor (timonLimbColor);
                txFloodFill(x+(-91), y+(-26));
                txLine(x+(-98), y+(-27), x+(-95), y+(-26));
                txLine(x+(-95), y+(-26), x+(-92), y+(-24));
                txLine(x+(-92), y+(-24), x+(-87), y+(-20));

                txLine(x+(-88), y+(-28), x+(-83), y+(-24));

                txLine(x+(-47), y+(-42), x+(-42), y+(-41));
                txLine(x+(-42), y+(-41), x+(-39), y+(-38));

                txSetFillColor (timonLimbColor);
                txFloodFill(x+(-35), y+(-52));

                //Правая ладонь
                POINT TimonPalm [11] = {{x+(-60), y+(-29)}, {x+(-51), y+(-33)}, {x+(-50), y+(-34)}, {x+(-48), y+(-34)}, {x+(-45), y+(-30)}, {x+(-44), y+(-23)}, {x+(-45), y+(-22)}, {x+(-51), y+(-22)}, {x+(-54), y+(-24)}, {x+(-56), y+(-26)}, {x+(-60), y+(-27)}, };
                txSetColor(DARKORANGE);
                txSetFillColor(timonBackColor);
                txPolygon(TimonPalm, 11);

                txSetColor(DARKORANGE);
                txLine(x+(-76), y+(-25), x+(-69), y+(-26));
                txLine(x+(-69), y+(-26), x+(-60), y+(-27));

                //Левая рука
                POINT TimonLeftArm [60] = {{x+(0), y+(0)}, {x+(0), y+(-2)}, {x+(28), y+(-2)}, {x+(29), y+(0)}, {x+(49), y+(20)}, {x+(56), y+(28)}, {x+(59), y+(28)}, {x+(62), y+(24)}, {x+(66), y+(19)}, {x+(73), y+(11)}, {x+(85), y+(-4)}, {x+(86), y+(-10)}, {x+(99), y+(-24)}, {x+(101), y+(-39)}, {x+(103), y+(-43)}, {x+(106), y+(-43)}, {x+(109), y+(-37)}, {x+(109), y+(-32)}, {x+(105), y+(-25)}, {x+(105), y+(-20)}, {x+(111), y+(-15)}, {x+(130), y+(-15)}, {x+(138), y+(-8)}, {x+(140), y+(-4)}, {x+(140), y+(0)}, {x+(137), y+(1)}, {x+(136), y+(4)}, {x+(131), y+(4)}, {x+(116), y+(-3)}, {x+(103), y+(-3)}, {x+(90), y+(2)}, {x+(86), y+(6)}, {x+(82), y+(12)}, {x+(78), y+(20)}, {x+(73), y+(32)}, {x+(71), y+(38)}, {x+(69), y+(40)}, {x+(68), y+(51)}, {x+(64), y+(57)}, {x+(64), y+(57)}, {x+(63), y+(54)}, {x+(61), y+(57)}, {x+(60), y+(54)}, {x+(59), y+(58)}, {x+(56), y+(53)}, {x+(54), y+(49)}, {x+(48), y+(43)}, {x+(44), y+(40)}, {x+(42), y+(46)}, {x+(42), y+(42)}, {x+(39), y+(37)}, {x+(34), y+(25)}, {x+(39), y+(27)}, {x+(32), y+(20)}, {x+(25), y+(14)}, {x+(31), y+(15)}, {x+(25), y+(11)}, {x+(19), y+(7)}, {x+(21), y+(6)}, {x+(15), y+(4)}, };
                txSetColor(DARKORANGE);
                txSetFillColor(timonBackColor);
                txPolygon(TimonLeftArm, 60);

                txSetColor(DARKGRAY);
                txLine(x+(96), y+(-20), x+(99), y+(-19));
                txLine(x+(99), y+(-19), x+(103), y+(-19));
                txLine(x+(103), y+(-19), x+(105), y+(-20));

                txSetFillColor (timonLimbColor);
                txFloodFill(x+(104), y+(-29));

                if(timonEar == 1){
                    //Правое ухо
                    POINT TimonRightEar [14] = {{x+(-17), y+(-2)}, {x+(-18), y+(2)}, {x+(-22), y+(5)}, {x+(-27), y+(5)}, {x+(-32), y+(1)}, {x+(-34), y+(1)}, {x+(-34), y+(-6)}, {x+(-28), y+(-14)}, {x+(-24), y+(-20)}, {x+(-20), y+(-25)}, {x+(-17), y+(-27)}, {x+(-20), y+(-19)}, {x+(-24), y+(-14)}, {x+(-24), y+(-7)}, };
                    txSetColor(BLACK);
                    txSetFillColor(BLACK);
                    txPolygon(TimonRightEar, 14);

                    txSetColor(DARKORANGE);
                    txSetFillColor(ORANGE);
                    txCircle(x+(-22), y+(-1), 4);}

                if(timonEar == 2){
                    //Левое ухо
                    POINT TimonLeftEar [9] = {{x+(39), y+(-9)}, {x+(45), y+(-10)}, {x+(49), y+(-12)}, {x+(52), y+(-15)}, {x+(52), y+(-27)}, {x+(49), y+(-28)}, {x+(47), y+(-24)}, {x+(45), y+(-20)}, {x+(42), y+(-16)}};
                    txSetColor(BLACK);
                    txSetFillColor(BLACK);
                    txPolygon(TimonLeftEar, 9);

                    txSetColor(DARKORANGE);
                    txSetFillColor(ORANGE);
                    txCircle(x+(44), y+(-16), 6);}

                if(timonEar == 3){
                    //Правое ухо
                    POINT TimonRightEar [14] = {{x+(-17), y+(-2)}, {x+(-18), y+(2)}, {x+(-22), y+(5)}, {x+(-27), y+(5)}, {x+(-32), y+(1)}, {x+(-34), y+(1)}, {x+(-34), y+(-6)}, {x+(-28), y+(-14)}, {x+(-24), y+(-20)}, {x+(-20), y+(-25)}, {x+(-17), y+(-27)}, {x+(-20), y+(-19)}, {x+(-24), y+(-14)}, {x+(-24), y+(-7)}};
                    txSetColor(BLACK);
                    txSetFillColor(BLACK);
                    txPolygon(TimonRightEar, 14);

                    txSetColor(DARKORANGE);
                    txSetFillColor(ORANGE);
                    txCircle(x+(-22), y+(-1), 4);

                    //Левое ухо
                    POINT TimonLeftEar [9] = {{x+(39), y+(-9)}, {x+(45), y+(-10)}, {x+(49), y+(-12)}, {x+(52), y+(-15)}, {x+(52), y+(-27)}, {x+(49), y+(-28)}, {x+(47), y+(-24)}, {x+(45), y+(-20)}, {x+(42), y+(-16)}};
                    txSetColor(BLACK);
                    txSetFillColor(BLACK);
                    txPolygon(TimonLeftEar, 9);

                    txSetColor(DARKORANGE);
                    txSetFillColor(ORANGE);
                    txCircle(x+(44), y+(-16), 6);}

                if (timonHair){
                    //Голова
                    POINT TimonHead [30] = {{x+(-17), y+(-2)}, {x+(28), y+(-2)}, {x+(34), y+(-4)}, {x+(39), y+(-9)}, {x+(42), y+(-16)}, {x+(44), y+(-20)}, {x+(47), y+(-24)}, {x+(49), y+(-28)}, {x+(49), y+(-39)}, {x+(48), y+(-40)}, {x+(38), y+(-41)}, {x+(36), y+(-44)}, {x+(33), y+(-48)}, {x+(30), y+(-52)}, {x+(27), y+(-55)}, {x+(27), y+(-57)}, {x+(24), y+(-63)}, {x+(22), y+(-64)}, {x+(17), y+(-61)}, {x+(17), y+(-56)}, {x+(12), y+(-56)}, {x+(11), y+(-58)}, {x+(2), y+(-58)}, {x+(-4), y+(-53)}, {x+(-9), y+(-46)}, {x+(-12), y+(-44)}, {x+(-17), y+(-27)}, {x+(-20), y+(-19)}, {x+(-24), y+(-14)}, {x+(-24), y+(-7)}};
                    txSetColor(BLACK);
                    txSetFillColor(timonBackColor);
                    txPolygon(TimonHead, 30);

                    //Волосы
                    POINT TimonHairstyle [29] = {{x+(-11), y+(-45)}, {x+(-11), y+(-61)}, {x+(-7), y+(-57)}, {x+(-3), y+(-65)}, {x+(1), y+(-70)}, {x+(5), y+(-70)}, {x+(2), y+(-64)}, {x+(3), y+(-64)}, {x+(8), y+(-68)}, {x+(17), y+(-74)}, {x+(18), y+(-74)}, {x+(18), y+(-72)}, {x+(15), y+(-71)}, {x+(19), y+(-73)}, {x+(14), y+(-69)}, {x+(19), y+(-70)}, {x+(28), y+(-71)}, {x+(29), y+(-69)}, {x+(24), y+(-69)}, {x+(31), y+(-62)}, {x+(24), y+(-63)}, {x+(22), y+(-64)}, {x+(17), y+(-61)}, {x+(17), y+(-56)}, {x+(12), y+(-56)}, {x+(11), y+(-58)}, {x+(2), y+(-58)}, {x+(-4), y+(-53)}, {x+(-9), y+(-46)}, };
                    txSetColor(DARKORANGE);
                    txSetFillColor(timonHairColor);
                    txPolygon(TimonHairstyle, 29);}
                else{
                    //Голова
                    POINT TimonHead [30] = {{x+(-17), y+(-2)}, {x+(28), y+(-2)}, {x+(34), y+(-4)}, {x+(39), y+(-9)}, {x+(42), y+(-16)}, {x+(44), y+(-20)}, {x+(47), y+(-24)}, {x+(49), y+(-28)}, {x+(49), y+(-39)}, {x+(48), y+(-40)}, {x+(38), y+(-41)}, {x+(36), y+(-44)}, {x+(33), y+(-48)}, {x+(30), y+(-52)}, {x+(27), y+(-55)}, {x+(27), y+(-57)}, {x+(24), y+(-63)}, {x+(22), y+(-64)}, {x+(16), y+(-64)}, {x+(12), y+(-63)}, {x+(8), y+(-62)}, {x+(6), y+(-61)}, {x+(2), y+(-58)}, {x+(-4), y+(-53)}, {x+(-9), y+(-46)}, {x+(-12), y+(-44)}, {x+(-17), y+(-27)}, {x+(-20), y+(-19)}, {x+(-24), y+(-14)}, {x+(-24), y+(-7)}};
                    txSetColor(BLACK);
                    txSetFillColor(timonBackColor);
                    txPolygon(TimonHead, 30);}


                //Нос
                POINT TimonNose [11] = {{x+(24), y+(-25)}, {x+(24), y+(-30)}, {x+(31), y+(-34)}, {x+(32), y+(-35)}, {x+(43), y+(-35)}, {x+(44), y+(-34)}, {x+(44), y+(-30)}, {x+(41), y+(-25)}, {x+(36), y+(-20)}, {x+(29), y+(-20)}, {x+(26), y+(-22)}, };
                txSetColor(DARKORANGE);
                txSetFillColor(ORANGE);
                txPolygon(TimonNose, 11);

                POINT TimonRightEye [10] = {{x+(-5), y+(-28)}, {x+(-5), y+(-41)}, {x+(-3), y+(-45)}, {x+(0), y+(-51)}, {x+(3), y+(-54)}, {x+(6), y+(-54)}, {x+(11), y+(-49)}, {x+(16), y+(-41)}, {x+(16), y+(-34)}, {x+(13), y+(-28)}, };
                txSetColor(DARKORANGE);
                txSetFillColor(ORANGE);
                txPolygon(TimonRightEye, 10);

                txSetColor(BLACK);
                txSetFillColor(WHITE);
                txEllipse(x+(2), y+(-44), x+(15), y+(-28));

                txSetColor(BLACK);
                txSetFillColor(BLACK);
                txCircle(x+(10), y+(-40), 3);

                POINT TimonLeftEye [9] = {{x+(23), y+(-44)}, {x+(30), y+(-36)}, {x+(33), y+(-36)}, {x+(33), y+(-46)}, {x+(31), y+(-50)}, {x+(29), y+(-53)}, {x+(27), y+(-53)}, {x+(26), y+(-52)}, {x+(23), y+(-49)}, };
                txSetColor(BLACK);
                txSetFillColor(WHITE);
                txPolygon(TimonLeftEye, 9);

                txSetColor(BLACK);
                txSetFillColor(BLACK);
                txCircle(x+(28), y+(-48), 3);

                txSetColor(BLACK);
                txLine(x+(120), y+(-15), x+(121), y+(-10));
                txLine(x+(121), y+(-10), x+(121), y+(-7));
                txLine(x+(121), y+(-7), x+(120), y+(-1));

                txSetFillColor(timonLimbColor);
                txFloodFill(x+(129), y+(-7));

                txLine(x+(121), y+(-10), x+(126), y+(-9));
                txLine(x+(126), y+(-9), x+(132), y+(-9));
                txLine(x+(132), y+(-9), x+(136), y+(-7));
                txLine(x+(136), y+(-7), x+(139), y+(-5));

                txLine(x+(121), y+(-7), x+(128), y+(-6));
                txLine(x+(128), y+(-6), x+(132), y+(-4));
                txLine(x+(132), y+(-4), x+(135), y+(-2));
                txLine(x+(135), y+(-2), x+(137), y+(1));

                //Рот
                POINT TimonRoth [19] = {{x+(-10), y+(-17)}, {x+(-4), y+(-19)}, {x+(-3), y+(-20)}, {x+(7), y+(-20)}, {x+(20), y+(-17)}, {x+(21), y+(-16)}, {x+(32), y+(-16)}, {x+(36), y+(-17)}, {x+(40), y+(-19)}, {x+(38), y+(-16)}, {x+(37), y+(-13)}, {x+(35), y+(-10)}, {x+(31), y+(-8)}, {x+(29), y+(-7)}, {x+(11), y+(-7)}, {x+(6), y+(-9)}, {x+(0), y+(-11)}, {x+(-2), y+(-12)}, {x+(-9), y+(-14)}, };
                txSetColor(BLACK);
                txSetFillColor(DARKORANGE);
                txPolygon(TimonRoth, 19);

                txSetColor(BLACK);
                txLine(x+(-9), y+(-14), x+(-6), y+(-16));
                txLine(x+(-6), y+(-16), x+(0), y+(-16));
                txLine(x+(0), y+(-16), x+(11), y+(-12));
                txLine(x+(11), y+(-12), x+(24), y+(-11));
                txLine(x+(24), y+(-11), x+(29), y+(-10));
                txLine(x+(29), y+(-10), x+(37), y+(-13));

                txLine(x+(-4), y+(-19), x+(-1), y+(-18));
                txLine(x+(-1), y+(-18), x+(8), y+(-15));
                txLine(x+(8), y+(-15), x+(17), y+(-13));
                txLine(x+(17), y+(-13), x+(25), y+(-12));
                txLine(x+(25), y+(-12), x+(29), y+(-12));
                txLine(x+(29), y+(-12), x+(38), y+(-16));
                txLine(x+(38), y+(-16), x+(40), y+(-19));

                txSetFillColor(WHITE);
                txFloodFill(x+(15), y+(-9));
                txFloodFill(x+(20), y+(-14));
    }

    void drawPig(int x, int y, int pigEar, int pigHand, bool pigEyes, bool pigLeg, COLORREF pigEarColor, COLORREF pigNoseColor, COLORREF pigShirtColor, COLORREF pigSkinColor)
    {
        //Хрюня
                //Голова
                POINT PigHead [40] = {{x+(-210), y+(-170)}, {x+(-206), y+(-188)}, {x+(-202), y+(-197)}, {x+(-199), y+(-202)}, {x+(-196), y+(-207)}, {x+(-190), y+(-211)}, {x+(-180), y+(-217)}, {x+(-172), y+(-219)}, {x+(-159), y+(-220)}, {x+(-149), y+(-218)}, {x+(-140), y+(-217)}, {x+(-132), y+(-216)}, {x+(-126), y+(-213)}, {x+(-122), y+(-210)}, {x+(-117), y+(-204)}, {x+(-117), y+(-204)}, {x+(-112), y+(-196)}, {x+(-110), y+(-188)}, {x+(-109), y+(-187)}, {x+(-106), y+(-156)}, {x+(-110), y+(-139)}, {x+(-114), y+(-125)}, {x+(-118), y+(-115)}, {x+(-118), y+(-91)}, {x+(-121), y+(-81)}, {x+(-126), y+(-75)}, {x+(-131), y+(-67)}, {x+(-151), y+(-53)}, {x+(-152), y+(-52)}, {x+(-173), y+(-51)}, {x+(-181), y+(-58)}, {x+(-195), y+(-71)}, {x+(-214), y+(-89)}, {x+(-234), y+(-112)}, {x+(-236), y+(-119)}, {x+(-240), y+(-127)}, {x+(-240), y+(-150)}, {x+(-235), y+(-158)}, {x+(-231), y+(-164)}, {x+(-220), y+(-167)}};
                txSetColor(BLACK);
                txSetFillColor(pigSkinColor);
                txPolygon(PigHead, 40);

                if (pigEar == 1){
                    //Правое ухо
                    POINT PigRightEar [22] = {{x+(-233), y+(-199)}, {x+(-236), y+(-212)}, {x+(-245), y+(-224)}, {x+(-245), y+(-236)}, {x+(-236), y+(-243)}, {x+(-230), y+(-248)}, {x+(-223), y+(-261)}, {x+(-208), y+(-285)}, {x+(-197), y+(-285)}, {x+(-179), y+(-270)}, {x+(-171), y+(-258)}, {x+(-165), y+(-248)}, {x+(-159), y+(-220)}, {x+(-172), y+(-219)}, {x+(-180), y+(-217)}, {x+(-190), y+(-211)}, {x+(-196), y+(-207)}, {x+(-199), y+(-202)}, {x+(-202), y+(-202)}, {x+(-217), y+(-209)}, {x+(-222), y+(-203)}, {x+(-225), y+(-199)}, };
                    txSetColor(BLACK);
                    txSetFillColor(pigEarColor);
                    txPolygon(PigRightEar, 22);

                    txSetColor(BLACK);
                    txLine(x+(-217), y+(-209), x+(-213), y+(-215));
                    txLine(x+(-213), y+(-215), x+(-210), y+(-225));
                    txLine(x+(-210), y+(-225), x+(-207), y+(-232));
                    txLine(x+(-207), y+(-232), x+(-207), y+(-269));
                    txLine(x+(-207), y+(-269), x+(-206), y+(-270));}

                if (pigEar == 2){
                    //Левое ухо
                    POINT PigLeftEar [23] = {{x+(-140), y+(-217)}, {x+(-140), y+(-244)}, {x+(-133), y+(-262)}, {x+(-125), y+(-273)}, {x+(-111), y+(-288)}, {x+(-100), y+(-301)}, {x+(-94), y+(-309)}, {x+(-89), y+(-325)}, {x+(-72), y+(-308)}, {x+(-61), y+(-284)}, {x+(-58), y+(-268)}, {x+(-58), y+(-238)}, {x+(-64), y+(-227)}, {x+(-58), y+(-238)}, {x+(-64), y+(-227)}, {x+(-70), y+(-214)}, {x+(-84), y+(-202)}, {x+(-92), y+(-197)}, {x+(-109), y+(-189)}, {x+(-110), y+(-188)}, {x+(-121), y+(-188)}, {x+(-134), y+(-204)}, {x+(-138), y+(-210)}, };
                    txSetColor(BLACK);
                    txSetFillColor(pigEarColor);
                    txPolygon(PigLeftEar, 21);}

                if (pigEar == 3){
                    //Правое ухо
                    POINT PigRightEar [22] = {{x+(-233), y+(-199)}, {x+(-236), y+(-212)}, {x+(-245), y+(-224)}, {x+(-245), y+(-236)}, {x+(-236), y+(-243)}, {x+(-230), y+(-248)}, {x+(-223), y+(-261)}, {x+(-208), y+(-285)}, {x+(-197), y+(-285)}, {x+(-179), y+(-270)}, {x+(-171), y+(-258)}, {x+(-165), y+(-248)}, {x+(-159), y+(-220)}, {x+(-172), y+(-219)}, {x+(-180), y+(-217)}, {x+(-190), y+(-211)}, {x+(-196), y+(-207)}, {x+(-199), y+(-202)}, {x+(-202), y+(-202)}, {x+(-217), y+(-209)}, {x+(-222), y+(-203)}, {x+(-225), y+(-199)}, };
                    txSetColor(BLACK);
                    txSetFillColor(pigEarColor);
                    txPolygon(PigRightEar, 22);

                    txSetColor(BLACK);
                    txLine(x+(-217), y+(-209), x+(-213), y+(-215));
                    txLine(x+(-213), y+(-215), x+(-210), y+(-225));
                    txLine(x+(-210), y+(-225), x+(-207), y+(-232));
                    txLine(x+(-207), y+(-232), x+(-207), y+(-269));
                    txLine(x+(-207), y+(-269), x+(-206), y+(-270));

                    //Левое ухо
                    POINT PigLeftEar [23] = {{x+(-140), y+(-217)}, {x+(-140), y+(-244)}, {x+(-133), y+(-262)}, {x+(-125), y+(-273)}, {x+(-111), y+(-288)}, {x+(-100), y+(-301)}, {x+(-94), y+(-309)}, {x+(-89), y+(-325)}, {x+(-72), y+(-308)}, {x+(-61), y+(-284)}, {x+(-58), y+(-268)}, {x+(-58), y+(-238)}, {x+(-64), y+(-227)}, {x+(-58), y+(-238)}, {x+(-64), y+(-227)}, {x+(-70), y+(-214)}, {x+(-84), y+(-202)}, {x+(-92), y+(-197)}, {x+(-109), y+(-189)}, {x+(-110), y+(-188)}, {x+(-121), y+(-188)}, {x+(-134), y+(-204)}, {x+(-138), y+(-210)}, };
                    txSetColor(BLACK);
                    txSetFillColor(pigEarColor);
                    txPolygon(PigLeftEar, 21);}

                if (pigHand == 1){
                    //Правая рука
                    POINT PigRightHand [28] = {{x+(-234), y+(-112)}, {x+(-226), y+(-111)}, {x+(-219), y+(-109)}, {x+(-214), y+(-103)}, {x+(-214), y+(-89)}, {x+(-205), y+(-80)}, {x+(-205), y+(-76)}, {x+(-197), y+(-58)}, {x+(-193), y+(-49)}, {x+(-191), y+(-49)}, {x+(-188), y+(-54)}, {x+(-185), y+(-57)}, {x+(-185), y+(-60)}, {x+(-173), y+(-51)}, {x+(-154), y+(-39)}, {x+(-169), y+(-21)}, {x+(-184), y+(-13)}, {x+(-207), y+(-13)}, {x+(-214), y+(-18)}, {x+(-217), y+(-22)}, {x+(-220), y+(-36)}, {x+(-223), y+(-49)}, {x+(-226), y+(-63)}, {x+(-228), y+(-68)}, {x+(-227), y+(-77)}, {x+(-233), y+(-83)}, {x+(-237), y+(-87)}, {x+(-237), y+(-105)}, };
                    txSetColor(BLACK);
                    txSetFillColor(pigSkinColor);
                    txPolygon(PigRightHand, 28);

                    //Рукав
                    POINT PigSleeve [10] = {{661, 298}, {657, 293}, {657, 274}, {664, 265}, {666, 263}, {675, 263}, {686, 275}, {688, 279}, {692, 293}, {688, 298}};
                    txSetColor(BLACK);
                    txSetFillColor(pigSkinColor);
                    txPolygon(PigSleeve, 10);}

                if (pigHand == 3){
                    //Правая рука
                    POINT PigRightHand [28] = {{x+(-234), y+(-112)}, {x+(-226), y+(-111)}, {x+(-219), y+(-109)}, {x+(-214), y+(-103)}, {x+(-214), y+(-89)}, {x+(-205), y+(-80)}, {x+(-205), y+(-76)}, {x+(-197), y+(-58)}, {x+(-193), y+(-49)}, {x+(-191), y+(-49)}, {x+(-188), y+(-54)}, {x+(-185), y+(-57)}, {x+(-185), y+(-60)}, {x+(-173), y+(-51)}, {x+(-154), y+(-39)}, {x+(-169), y+(-21)}, {x+(-184), y+(-13)}, {x+(-207), y+(-13)}, {x+(-214), y+(-18)}, {x+(-217), y+(-22)}, {x+(-220), y+(-36)}, {x+(-223), y+(-49)}, {x+(-226), y+(-63)}, {x+(-228), y+(-68)}, {x+(-227), y+(-77)}, {x+(-233), y+(-83)}, {x+(-237), y+(-87)}, {x+(-237), y+(-105)}, };
                    txSetColor(BLACK);
                    txSetFillColor(pigSkinColor);
                    txPolygon(PigRightHand, 28);}

                //Тело
                POINT PigBody [33] = {{x+(-173), y+(-51)}, {x+(-154), y+(-31)}, {x+(-145), y+(-24)}, {x+(-124), y+(-9)}, {x+(-84), y+(1)}, {x+(-42), y+(1)}, {x+(-41), y+(0)}, {x+(0), y+(0)}, {x+(33), y+(-9)}, {x+(44), y+(-17)}, {x+(56), y+(-26)}, {x+(60), y+(-34)}, {x+(63), y+(-45)}, {x+(63), y+(-77)}, {x+(56), y+(-94)}, {x+(46), y+(-105)}, {x+(31), y+(-115)}, {x+(20), y+(-122)}, {x+(-6), y+(-122)}, {x+(-31), y+(-115)}, {x+(-43), y+(-109)}, {x+(-57), y+(-101)}, {x+(-78), y+(-93)}, {x+(-79), y+(-92)}, {x+(-101), y+(-92)}, {x+(-116), y+(-102)}, {x+(-118), y+(-102)}, {x+(-118), y+(-91)}, {x+(-121), y+(-81)}, {x+(-126), y+(-75)}, {x+(-131), y+(-67)}, {x+(-151), y+(-53)}, {x+(-152), y+(-52)}, };
                txSetColor(BLACK);
                txSetFillColor(pigShirtColor);
                txPolygon(PigBody, 33);

                //Полоски
                txSetColor(BLACK);
                txLine(x+(-152), y+(-30), x+(-135), y+(-31));
                txLine(x+(-135), y+(-31), x+(-120), y+(-39));

                txLine(x+(-83), y+(-92), x+(-78), y+(-77));
                txLine(x+(-78), y+(-77), x+(-78), y+(-47));
                txLine(x+(-78), y+(-47), x+(-85), y+(-36));

                txLine(x+(-66), y+(-97), x+(-56), y+(-75));
                txLine(x+(-56), y+(-75), x+(-54), y+(-53));
                txLine(x+(-54), y+(-53), x+(-54), y+(-39));
                txLine(x+(-54), y+(-39), x+(-61), y+(-18));
                txLine(x+(-61), y+(-18), x+(-72), y+(1));

                txLine(x+(-47), y+(-106), x+(-26), y+(-85));
                txLine(x+(-26), y+(-85), x+(-20), y+(-62));
                txLine(x+(-20), y+(-62), x+(-20), y+(-27));
                txLine(x+(-20), y+(-27), x+(-33), y+(0));

                txLine(x+(-24), y+(-117), x+(1), y+(-94));
                txLine(x+(1), y+(-94), x+(13), y+(-65));
                txLine(x+(13), y+(-65), x+(13), y+(-46));
                txLine(x+(13), y+(-46), x+(12), y+(-29));
                txLine(x+(12), y+(-29), x+(-2), y+(0));

                txLine(x+(9), y+(-122), x+(34), y+(-98));
                txLine(x+(34), y+(-98), x+(45), y+(-69));
                txLine(x+(45), y+(-69), x+(45), y+(-37));
                txLine(x+(45), y+(-37), x+(33), y+(-9));

                if (pigHand == 0){
                    //Рукав
                    POINT PigSleeve [10] = {{661, 298}, {657, 293}, {657, 274}, {664, 265}, {666, 263}, {675, 263}, {686, 275}, {688, 279}, {692, 293}, {688, 298}};
                    txSetColor(BLACK);
                    txSetFillColor(pigSkinColor);
                    txPolygon(PigSleeve, 10);}

                if (pigHand == 2){
                    //Левая рука
                    POINT PigLeftArm [25] = {{x+(-194), y+(7)}, {x+(-180), y+(4)}, {x+(-161), y+(3)}, {x+(-141), y+(-1)}, {x+(-132), y+(-3)}, {x+(-124), y+(-9)}, {x+(-122), y+(-9)}, {x+(-121), y+(-31)}, {x+(-120), y+(-64)}, {x+(-113), y+(-73)}, {x+(-111), y+(-75)}, {x+(-102), y+(-75)}, {x+(-91), y+(-63)}, {x+(-89), y+(-59)}, {x+(-85), y+(-40)}, {x+(-85), y+(2)}, {x+(-93), y+(17)}, {x+(-105), y+(25)}, {x+(-126), y+(30)}, {x+(-140), y+(32)}, {x+(-174), y+(32)}, {x+(-182), y+(31)}, {x+(-184), y+(28)}, {x+(-189), y+(24)}, {x+(-194), y+(20)}, };
                    txSetColor(BLACK);
                    txSetFillColor(pigSkinColor);
                    txPolygon(PigLeftArm, 25);}

                if (pigHand == 3){
                    //Левая рука
                    POINT PigLeftArm [25] = {{x+(-194), y+(7)}, {x+(-180), y+(4)}, {x+(-161), y+(3)}, {x+(-141), y+(-1)}, {x+(-132), y+(-3)}, {x+(-124), y+(-9)}, {x+(-122), y+(-9)}, {x+(-121), y+(-31)}, {x+(-120), y+(-64)}, {x+(-113), y+(-73)}, {x+(-111), y+(-75)}, {x+(-102), y+(-75)}, {x+(-91), y+(-63)}, {x+(-89), y+(-59)}, {x+(-85), y+(-40)}, {x+(-85), y+(2)}, {x+(-93), y+(17)}, {x+(-105), y+(25)}, {x+(-126), y+(30)}, {x+(-140), y+(32)}, {x+(-174), y+(32)}, {x+(-182), y+(31)}, {x+(-184), y+(28)}, {x+(-189), y+(24)}, {x+(-194), y+(20)}, };
                    txSetColor(BLACK);
                    txSetFillColor(pigSkinColor);
                    txPolygon(PigLeftArm, 25);}

                if (pigLeg){
                    //Левая нога
                    POINT PigLeftLeg [27] = {{x+(63), y+(-52)}, {x+(79), y+(-55)}, {x+(90), y+(-58)}, {x+(88), y+(-62)}, {x+(77), y+(-79)}, {x+(74), y+(-87)}, {x+(71), y+(-96)}, {x+(70), y+(-100)}, {x+(73), y+(-107)}, {x+(80), y+(-110)}, {x+(102), y+(-110)}, {x+(110), y+(-108)}, {x+(118), y+(-103)}, {x+(126), y+(-98)}, {x+(132), y+(-91)}, {x+(132), y+(-77)}, {x+(130), y+(-71)}, {x+(122), y+(-67)}, {x+(113), y+(-67)}, {x+(112), y+(-66)}, {x+(118), y+(-55)}, {x+(118), y+(-45)}, {x+(99), y+(-36)}, {x+(82), y+(-36)}, {x+(60), y+(-34)}, {x+(61), y+(-42)}, {x+(63), y+(-45)}, };
                    txSetColor(BLACK);
                    txSetFillColor(pigSkinColor);
                    txPolygon(PigLeftLeg, 27);

                    //Правая нога
                    POINT PigRightLeg [5] = {{x+(63), y+(-77)}, {x+(63), y+(-59)}, {x+(75), y+(-59)}, {x+(88), y+(-62)}, {x+(77), y+(-79)}, };
                    txSetColor(BLACK);
                    txSetFillColor(pigSkinColor);
                    txPolygon(PigRightLeg, 5);

                    //Правая стопа
                    POINT PigRightSole [15] = {{x+(70), y+(-100)}, {x+(65), y+(-106)}, {x+(61), y+(-116)}, {x+(56), y+(-125)}, {x+(61), y+(-131)}, {x+(71), y+(-133)}, {x+(100), y+(-133)}, {x+(100), y+(-133)}, {x+(108), y+(-130)}, {x+(112), y+(-124)}, {x+(114), y+(-113)}, {x+(110), y+(-108)}, {x+(102), y+(-110)}, {x+(80), y+(-110)}, {x+(73), y+(-107)}, };
                    txSetColor(BLACK);
                    txSetFillColor(pigSkinColor);
                    txPolygon(PigRightSole, 15);}

                txSetColor(BLACK);
                txLine(557, 208, 563, 220);
                txLine(x+(-214), y+(-118), x+(-203), y+(-116));
                txLine(x+(-203), y+(-116), x+(-196), y+(-118));
                txLine(x+(-196), y+(-118), x+(-188), y+(-121));
                txLine(x+(-188), y+(-121), x+(-186), y+(-125));
                txLine(x+(-186), y+(-125), x+(-182), y+(-135));

                txLine(x+(-185), y+(-137), x+(-178), y+(-133));

                //Нос
                POINT PigNose [13] = {{x+(-217), y+(-157)}, {x+(-210), y+(-157)}, {x+(-201), y+(-151)}, {x+(-201), y+(-139)}, {x+(-201), y+(-134)}, {x+(-202), y+(-132)}, {x+(-217), y+(-132)}, {x+(-221), y+(-135)}, {x+(-223), y+(-137)}, {x+(-224), y+(-140)}, {x+(-225), y+(-146)}, {x+(-224), y+(-150)}, {x+(-220), y+(-154)}, };
                txSetColor(BLACK);
                txSetFillColor(pigNoseColor);
                txPolygon(PigNose, 13);

                if (pigEyes){
                    //Глаза
                    txSetFillColor(BLACK);
                    txEllipse(x+(-205), y+(-164), x+(-202), y+(-158));
                    txEllipse(x+(-180), y+(-158), x+(-175), y+(-150));}

                txSetColor(BLACK);
                txLine(x+(-200), y+(-190), x+(-199), y+(-193));
                txLine(x+(-199), y+(-193), x+(-195), y+(-194));

                txLine(x+(-174), y+(-189), x+(-171), y+(-188));
                txLine(x+(-171), y+(-188), x+(-169), y+(-187));
                txLine(x+(-169), y+(-187), x+(-168), y+(-186));
                txLine(x+(-168), y+(-186), x+(-167), y+(-182));
    }

    void drawPenguin(int x, int y, int penguinHand, int penguinLeg, bool penguinRoth, int penguinEyes, COLORREF penguinEyesColor, COLORREF penguinLegsColor, COLORREF penguinBackColor, COLORREF penguinBallyColor)
    {
        //Пингвин
                if (penguinLeg == 1){
                    //Правая нога
                    POINT PenguinRightLeg [19] = {{x+(18), y+(230)}, {x+(26), y+(233)}, {x+(35), y+(235)}, {x+(38), y+(242)}, {x+(38), y+(247)}, {x+(37), y+(250)}, {x+(33), y+(251)}, {x+(29), y+(251)}, {x+(27), y+(247)}, {x+(23), y+(247)}, {x+(22), y+(248)}, {x+(3), y+(250)}, {x+(3), y+(246)}, {x+(-11), y+(246)}, {x+(-9), y+(243)}, {x+(-3), y+(241)}, {x+(5), y+(239)}, {x+(11), y+(238)}, {x+(15), y+(237)}, };
                    txSetColor(BLACK);
                    txSetFillColor(penguinLegsColor);
                    txPolygon(PenguinRightLeg, 19);

                    txSetColor(BLACK);
                    txLine(x+(23), y+(247), x+(37), y+(247));

                    txLine(x+(8), y+(239), x+(11), y+(240));
                    txLine(x+(11), y+(240), x+(16), y+(241));
                    txLine(x+(16), y+(241), x+(21), y+(243));
                    txLine(x+(21), y+(243), x+(21), y+(248));

                    txLine(x+(11), y+(240), x+(5), y+(243));
                    txLine(x+(5), y+(243), x+(3), y+(246));}

                if (penguinLeg == 2){
                    //Левая нога
                    POINT PenguinLeftLeg [32] = {{x+(88), y+(235)}, {x+(93), y+(235)}, {x+(103), y+(233)}, {x+(107), y+(232)}, {x+(107), y+(239)}, {x+(108), y+(240)}, {x+(113), y+(242)}, {x+(117), y+(244)}, {x+(122), y+(246)}, {x+(129), y+(248)}, {x+(133), y+(251)}, {x+(133), y+(254)}, {x+(129), y+(254)}, {x+(123), y+(253)}, {x+(123), y+(252)}, {x+(117), y+(252)}, {x+(116), y+(254)}, {x+(116), y+(256)}, {x+(110), y+(255)}, {x+(105), y+(253)}, {x+(103), y+(252)}, {x+(98), y+(252)}, {x+(97), y+(251)}, {x+(91), y+(252)}, {x+(89), y+(254)}, {x+(87), y+(254)}, {x+(85), y+(252)}, {x+(82), y+(250)}, {x+(82), y+(248)}, {x+(84), y+(246)}, {x+(86), y+(244)}, {x+(88), y+(240)}, };
                    txSetColor(BLACK);
                    txSetFillColor(penguinLegsColor);
                    txPolygon(PenguinLeftLeg, 32);

                    txSetColor(BLACK);
                    txLine(x+(103), y+(252), x+(108), y+(247));
                    txLine(x+(108), y+(247), x+(113), y+(247));
                    txLine(x+(113), y+(247), x+(116), y+(250));
                    txLine(x+(116), y+(250), x+(117), y+(252));

                    txLine(x+(123), y+(252), x+(123), y+(251));
                    txLine(x+(123), y+(251), x+(126), y+(248));
                    txLine(x+(126), y+(248), x+(129), y+(248));
                    txLine(x+(129), y+(248), x+(133), y+(251));}

                if (penguinLeg == 3){
                    //Правая нога
                    POINT PenguinRightLeg [19] = {{x+(18), y+(230)}, {x+(26), y+(233)}, {x+(35), y+(235)}, {x+(38), y+(242)}, {x+(38), y+(247)}, {x+(37), y+(250)}, {x+(33), y+(251)}, {x+(29), y+(251)}, {x+(27), y+(247)}, {x+(23), y+(247)}, {x+(22), y+(248)}, {x+(3), y+(250)}, {x+(3), y+(246)}, {x+(-11), y+(246)}, {x+(-9), y+(243)}, {x+(-3), y+(241)}, {x+(5), y+(239)}, {x+(11), y+(238)}, {x+(15), y+(237)}, };
                    txSetColor(BLACK);
                    txSetFillColor(penguinLegsColor);
                    txPolygon(PenguinRightLeg, 19);

                    txSetColor(BLACK);
                    txLine(x+(23), y+(247), x+(37), y+(247));

                    txLine(x+(8), y+(239), x+(11), y+(240));
                    txLine(x+(11), y+(240), x+(16), y+(241));
                    txLine(x+(16), y+(241), x+(21), y+(243));
                    txLine(x+(21), y+(243), x+(21), y+(248));

                    txLine(x+(11), y+(240), x+(5), y+(243));
                    txLine(x+(5), y+(243), x+(3), y+(246));

                    //Левая нога
                    POINT PenguinLeftLeg [32] = {{x+(88), y+(235)}, {x+(93), y+(235)}, {x+(103), y+(233)}, {x+(107), y+(232)}, {x+(107), y+(239)}, {x+(108), y+(240)}, {x+(113), y+(242)}, {x+(117), y+(244)}, {x+(122), y+(246)}, {x+(129), y+(248)}, {x+(133), y+(251)}, {x+(133), y+(254)}, {x+(129), y+(254)}, {x+(123), y+(253)}, {x+(123), y+(252)}, {x+(117), y+(252)}, {x+(116), y+(254)}, {x+(116), y+(256)}, {x+(110), y+(255)}, {x+(105), y+(253)}, {x+(103), y+(252)}, {x+(98), y+(252)}, {x+(97), y+(251)}, {x+(91), y+(252)}, {x+(89), y+(254)}, {x+(87), y+(254)}, {x+(85), y+(252)}, {x+(82), y+(250)}, {x+(82), y+(248)}, {x+(84), y+(246)}, {x+(86), y+(244)}, {x+(88), y+(240)}, };
                    txSetColor(BLACK);
                    txSetFillColor(penguinLegsColor);
                    txPolygon(PenguinLeftLeg, 32);
                    txSetColor(BLACK);
                    txLine(x+(103), y+(252), x+(108), y+(247));
                    txLine(x+(108), y+(247), x+(113), y+(247));
                    txLine(x+(113), y+(247), x+(116), y+(250));
                    txLine(x+(116), y+(250), x+(117), y+(252));

                    txLine(x+(123), y+(252), x+(123), y+(251));
                    txLine(x+(123), y+(251), x+(126), y+(248));
                    txLine(x+(126), y+(248), x+(129), y+(248));
                    txLine(x+(129), y+(248), x+(133), y+(251));}

                if (penguinHand == 1){
                    //Правая рука
                    POINT PenguinRightArm [34] = {{x+(-7), y+(52)}, {x+(-7), y+(77)}, {x+(-9), y+(84)}, {x+(-12), y+(93)}, {x+(-15), y+(101)}, {x+(-18), y+(113)}, {x+(-20), y+(120)}, {x+(-23), y+(129)}, {x+(-25), y+(138)}, {x+(-27), y+(147)}, {x+(-29), y+(156)}, {x+(-31), y+(164)}, {x+(-34), y+(174)}, {x+(-37), y+(185)}, {x+(-39), y+(192)}, {x+(-40), y+(198)}, {x+(-37), y+(193)}, {x+(-34), y+(186)}, {x+(-30), y+(178)}, {x+(-27), y+(171)}, {x+(-25), y+(165)}, {x+(-22), y+(157)}, {x+(-22), y+(150)}, {x+(-21), y+(142)}, {x+(-20), y+(134)}, {x+(-17), y+(126)}, {x+(-14), y+(118)}, {x+(-12), y+(113)}, {x+(-9), y+(107)}, {x+(-6), y+(102)}, {x+(-3), y+(95)}, {x+(-3), y+(71)}, {x+(-4), y+(62)}, {x+(-5), y+(58)}, };
                    txSetColor(BLACK);
                    txSetFillColor(penguinBackColor);
                    txPolygon(PenguinRightArm, 34);}

                if (penguinHand == 2){
                    //Левая рука
                    POINT PenguinLeftArm [66] = {{x+(117), y+(17)}, {x+(118), y+(17)}, {x+(122), y+(19)}, {x+(125), y+(21)}, {x+(129), y+(23)}, {x+(134), y+(26)}, {x+(136), y+(27)}, {x+(139), y+(30)}, {x+(148), y+(38)}, {x+(155), y+(44)}, {x+(162), y+(58)}, {x+(166), y+(66)}, {x+(166), y+(86)}, {x+(162), y+(92)}, {x+(160), y+(97)}, {x+(140), y+(97)}, {x+(127), y+(87)}, {x+(126), y+(87)}, {x+(127), y+(90)}, {x+(131), y+(100)}, {x+(135), y+(111)}, {x+(139), y+(122)}, {x+(141), y+(134)}, {x+(141), y+(137)}, {x+(139), y+(133)}, {x+(136), y+(122)}, {x+(133), y+(116)}, {x+(127), y+(106)}, {x+(121), y+(96)}, {x+(113), y+(82)}, {x+(100), y+(69)}, {x+(97), y+(65)}, {x+(94), y+(60)}, {x+(89), y+(54)}, {x+(88), y+(47)}, {x+(87), y+(42)}, {x+(86), y+(37)}, {x+(85), y+(31)}, {x+(82), y+(26)}, {x+(79), y+(20)}, {x+(80), y+(17)}, {x+(85), y+(24)}, {x+(89), y+(30)}, {x+(93), y+(35)}, {x+(97), y+(41)}, {x+(101), y+(47)}, {x+(103), y+(48)}, {x+(108), y+(50)}, {x+(112), y+(52)}, {x+(115), y+(54)}, {x+(119), y+(56)}, {x+(122), y+(58)}, {x+(125), y+(60)}, {x+(129), y+(63)}, {x+(132), y+(65)}, {x+(135), y+(67)}, {x+(138), y+(69)}, {x+(140), y+(71)}, {x+(142), y+(71)}, {x+(142), y+(68)}, {x+(141), y+(67)}, {x+(139), y+(64)}, {x+(137), y+(60)}, {x+(123), y+(33)}, {x+(121), y+(28)}, {x+(119), y+(24)}, };
                    txSetColor(BLACK);
                    txSetFillColor(penguinBackColor);
                    txPolygon(PenguinLeftArm, 66);}

                if (penguinHand == 3){
                    //Правая рука
                    POINT PenguinRightArm [34] = {{x+(-7), y+(52)}, {x+(-7), y+(77)}, {x+(-9), y+(84)}, {x+(-12), y+(93)}, {x+(-15), y+(101)}, {x+(-18), y+(113)}, {x+(-20), y+(120)}, {x+(-23), y+(129)}, {x+(-25), y+(138)}, {x+(-27), y+(147)}, {x+(-29), y+(156)}, {x+(-31), y+(164)}, {x+(-34), y+(174)}, {x+(-37), y+(185)}, {x+(-39), y+(192)}, {x+(-40), y+(198)}, {x+(-37), y+(193)}, {x+(-34), y+(186)}, {x+(-30), y+(178)}, {x+(-27), y+(171)}, {x+(-25), y+(165)}, {x+(-22), y+(157)}, {x+(-22), y+(150)}, {x+(-21), y+(142)}, {x+(-20), y+(134)}, {x+(-17), y+(126)}, {x+(-14), y+(118)}, {x+(-12), y+(113)}, {x+(-9), y+(107)}, {x+(-6), y+(102)}, {x+(-3), y+(95)}, {x+(-3), y+(71)}, {x+(-4), y+(62)}, {x+(-5), y+(58)}, };
                    txSetColor(BLACK);
                    txSetFillColor(penguinBackColor);
                    txPolygon(PenguinRightArm, 34);

                    //Левая рука
                    POINT PenguinLeftArm [66] = {{x+(117), y+(17)}, {x+(118), y+(17)}, {x+(122), y+(19)}, {x+(125), y+(21)}, {x+(129), y+(23)}, {x+(134), y+(26)}, {x+(136), y+(27)}, {x+(139), y+(30)}, {x+(148), y+(38)}, {x+(155), y+(44)}, {x+(162), y+(58)}, {x+(166), y+(66)}, {x+(166), y+(86)}, {x+(162), y+(92)}, {x+(160), y+(97)}, {x+(140), y+(97)}, {x+(127), y+(87)}, {x+(126), y+(87)}, {x+(127), y+(90)}, {x+(131), y+(100)}, {x+(135), y+(111)}, {x+(139), y+(122)}, {x+(141), y+(134)}, {x+(141), y+(137)}, {x+(139), y+(133)}, {x+(136), y+(122)}, {x+(133), y+(116)}, {x+(127), y+(106)}, {x+(121), y+(96)}, {x+(113), y+(82)}, {x+(100), y+(69)}, {x+(97), y+(65)}, {x+(94), y+(60)}, {x+(89), y+(54)}, {x+(88), y+(47)}, {x+(87), y+(42)}, {x+(86), y+(37)}, {x+(85), y+(31)}, {x+(82), y+(26)}, {x+(79), y+(20)}, {x+(80), y+(17)}, {x+(85), y+(24)}, {x+(89), y+(30)}, {x+(93), y+(35)}, {x+(97), y+(41)}, {x+(101), y+(47)}, {x+(103), y+(48)}, {x+(108), y+(50)}, {x+(112), y+(52)}, {x+(115), y+(54)}, {x+(119), y+(56)}, {x+(122), y+(58)}, {x+(125), y+(60)}, {x+(129), y+(63)}, {x+(132), y+(65)}, {x+(135), y+(67)}, {x+(138), y+(69)}, {x+(140), y+(71)}, {x+(142), y+(71)}, {x+(142), y+(68)}, {x+(141), y+(67)}, {x+(139), y+(64)}, {x+(137), y+(60)}, {x+(123), y+(33)}, {x+(121), y+(28)}, {x+(119), y+(24)}, };
                    txSetColor(BLACK);
                    txSetFillColor(penguinBackColor);
                    txPolygon(PenguinLeftArm, 66);}

                //Тело
                POINT PenguinBody [87] = {{x+(47), y+(237)}, {x+(75), y+(237)}, {x+(93), y+(235)}, {x+(103), y+(233)}, {x+(107), y+(232)}, {x+(108), y+(231)}, {x+(112), y+(228)}, {x+(117), y+(224)}, {x+(121), y+(219)}, {x+(126), y+(211)}, {x+(130), y+(203)}, {x+(135), y+(191)}, {x+(139), y+(177)}, {x+(142), y+(168)}, {x+(142), y+(141)}, {x+(141), y+(137)}, {x+(139), y+(133)}, {x+(136), y+(122)}, {x+(133), y+(116)}, {x+(127), y+(106)}, {x+(121), y+(96)}, {x+(113), y+(82)}, {x+(100), y+(69)}, {x+(97), y+(65)}, {x+(94), y+(60)}, {x+(89), y+(54)}, {x+(88), y+(47)}, {x+(87), y+(42)}, {x+(86), y+(37)}, {x+(85), y+(31)}, {x+(82), y+(26)}, {x+(79), y+(20)}, {x+(80), y+(17)}, {x+(77), y+(13)}, {x+(73), y+(8)}, {x+(70), y+(3)}, {x+(67), y+(-1)}, {x+(63), y+(-6)}, {x+(58), y+(-10)}, {x+(53), y+(-14)}, {x+(49), y+(-16)}, {x+(45), y+(-19)}, {x+(43), y+(-21)}, {x+(38), y+(-22)}, {x+(27), y+(-22)}, {x+(20), y+(-21)}, {x+(15), y+(-19)}, {x+(11), y+(-17)}, {x+(6), y+(-15)}, {x+(2), y+(-12)}, {x+(-1), y+(-9)}, {x+(-4), y+(-6)}, {x+(-6), y+(-2)}, {x+(-8), y+(1)}, {x+(-10), y+(5)}, {x+(-11), y+(9)}, {x+(-11), y+(35)}, {x+(-9), y+(44)}, {x+(-7), y+(49)}, {x+(-7), y+(52)}, {x+(-5), y+(58)}, {x+(-4), y+(62)}, {x+(-3), y+(71)}, {x+(-3), y+(95)}, {x+(-6), y+(102)}, {x+(-9), y+(107)}, {x+(-12), y+(113)}, {x+(-14), y+(118)}, {x+(-17), y+(126)}, {x+(-20), y+(134)}, {x+(-21), y+(142)}, {x+(-22), y+(150)}, {x+(-22), y+(157)}, {x+(-21), y+(168)}, {x+(-19), y+(179)}, {x+(-17), y+(184)}, {x+(-15), y+(190)}, {x+(-13), y+(196)}, {x+(-11), y+(201)}, {x+(-6), y+(209)}, {x+(-3), y+(214)}, {x+(3), y+(220)}, {x+(8), y+(224)}, {x+(14), y+(228)}, {x+(18), y+(230)}, {x+(26), y+(233)}, {x+(35), y+(235)}, };
                txSetColor(BLACK);
                txSetFillColor(penguinBallyColor);
                txPolygon(PenguinBody, 87);

                //Голова
                txSetColor(BLACK);
                txLine(x+(-11), y+(30), x+(-9), y+(16));
                txLine(x+(-9), y+(16), x+(-8), y+(10));
                txLine(x+(-8), y+(10), x+(-6), y+(5));
                txLine(x+(-6), y+(5), x+(-2), y+(2));
                txLine(x+(-2), y+(2), x+(0), y+(0));
                txLine(x+(0), y+(0), x+(18), y+(0));
                txLine(x+(18), y+(0), x+(21), y+(-5));
                txLine(x+(21), y+(-5), x+(23), y+(-8));
                txLine(x+(23), y+(-8), x+(32), y+(-17));
                txLine(x+(32), y+(-17), x+(41), y+(-17));
                txLine(x+(41), y+(-17), x+(51), y+(-12));
                txLine(x+(51), y+(-12), x+(59), y+(-4));
                txLine(x+(59), y+(-4), x+(65), y+(-3));

                txSetFillColor(penguinBackColor);
                txFloodFill(x+(12), y+(-7));

                if (penguinRoth){
                    //Рот
                    POINT PenguinRoth [26] = {{x+(-7), y+(37)}, {x+(6), y+(37)}, {x+(13), y+(33)}, {x+(18), y+(30)}, {x+(20), y+(24)}, {x+(24), y+(19)}, {x+(25), y+(18)}, {x+(45), y+(20)}, {x+(52), y+(16)}, {x+(61), y+(7)}, {x+(64), y+(1)}, {x+(65), y+(9)}, {x+(63), y+(14)}, {x+(61), y+(19)}, {x+(60), y+(21)}, {x+(54), y+(26)}, {x+(45), y+(33)}, {x+(42), y+(35)}, {x+(36), y+(36)}, {x+(30), y+(37)}, {x+(22), y+(43)}, {x+(14), y+(43)}, {x+(13), y+(44)}, {x+(0), y+(44)}, {x+(-3), y+(42)}, {x+(-6), y+(40)}, };
                    txSetColor(BLACK);
                    txSetFillColor(penguinBackColor);
                    txPolygon(PenguinRoth, 26);}

                if (penguinEyes == 1){
                    //Глаза
                    txSetFillColor(WHITE);
                    txCircle(x+(11), y+(22), 8);
                    txSetFillColor(penguinEyesColor);
                    txCircle(x+(11), y+(22), 5);
                    txSetFillColor(BLACK);
                    txCircle(x+(11), y+(22), 2);}

                if (penguinEyes == 2){
                    txSetFillColor(WHITE);
                    txCircle(x+(40), y+(10), 8);
                    txSetFillColor(penguinEyesColor);
                    txCircle(x+(40), y+(10), 5);
                    txSetFillColor(BLACK);
                    txCircle(x+(40), y+(10), 2);}

                if (penguinEyes == 3){
                    //Глаза
                    txSetFillColor(WHITE);
                    txCircle(x+(11), y+(22), 8);
                    txSetFillColor(penguinEyesColor);
                    txCircle(x+(11), y+(22), 5);
                    txSetFillColor(BLACK);
                    txCircle(x+(11), y+(22), 2);

                    txSetFillColor(WHITE);
                    txCircle(x+(40), y+(10), 8);
                    txSetFillColor(penguinEyesColor);
                    txCircle(x+(40), y+(10), 5);
                    txSetFillColor(BLACK);
                    txCircle(x+(40), y+(10), 2);}
                }

    void drawFly(int x, int y, int flyHand, int flyLeg, bool flyHair, bool flyWings, COLORREF flyRothColor, COLORREF flyShirtColor, COLORREF flySkinColor, COLORREF flyEyesColor)
    {
        //Муха
                if(flyLeg){
                    //Ноги
                    POINT FlyLegs [35] = {{x+(36), y+(239)}, {x+(45), y+(230)}, {x+(51), y+(228)}, {x+(71), y+(228)}, {x+(60), y+(215)}, {x+(53), y+(200)}, {x+(45), y+(173)}, {x+(45), y+(158)}, {x+(68), y+(171)}, {x+(87), y+(178)}, {x+(100), y+(178)}, {x+(117), y+(173)}, {x+(128), y+(166)}, {x+(141), y+(155)}, {x+(141), y+(188)}, {x+(129), y+(206)}, {x+(119), y+(222)}, {x+(113), y+(227)}, {x+(113), y+(230)}, {x+(127), y+(233)}, {x+(136), y+(242)}, {x+(137), y+(246)}, {x+(134), y+(247)}, {x+(118), y+(247)}, {x+(107), y+(241)}, {x+(101), y+(235)}, {x+(103), y+(226)}, {x+(103), y+(208)}, {x+(100), y+(198)}, {x+(84), y+(198)}, {x+(80), y+(210)}, {x+(80), y+(224)}, {x+(82), y+(234)}, {x+(63), y+(242)}, {x+(43), y+(242)}};
                    txSetColor(BLACK);
                    txSetFillColor(flySkinColor);
                    txPolygon(FlyLegs, 35);}
                else{
                    flyWings = false;}

                //Тело
                POINT FlyBody [32] = {{x+(45), y+(158)}, {x+(68), y+(171)}, {x+(87), y+(178)}, {x+(100), y+(178)}, {x+(117), y+(173)}, {x+(128), y+(166)}, {x+(141), y+(155)}, {x+(140), y+(126)}, {x+(138), y+(116)}, {x+(134), y+(97)}, {x+(138), y+(116)}, {x+(151), y+(107)}, {x+(133), y+(85)}, {x+(132), y+(75)}, {x+(127), y+(75)}, {x+(118), y+(82)}, {x+(105), y+(89)}, {x+(92), y+(89)}, {x+(81), y+(85)}, {x+(73), y+(81)}, {x+(65), y+(74)}, {x+(59), y+(73)}, {x+(57), y+(84)}, {x+(50), y+(93)}, {x+(35), y+(104)}, {x+(40), y+(108)}, {x+(52), y+(116)}, {x+(61), y+(97)}, {x+(52), y+(116)}, {x+(48), y+(130)}, {x+(47), y+(138)}, {x+(45), y+(150)}};
                txSetColor(BLACK);
                txSetFillColor(flyShirtColor);
                txPolygon(FlyBody, 32);

                txLine(x+(57), y+(83), x+(71), y+(96));
                txLine(x+(71), y+(96), x+(87), y+(104));
                txLine(x+(87), y+(104), x+(104), y+(104));
                txLine(x+(104), y+(104), x+(124), y+(93));
                txLine(x+(124), y+(93), x+(133), y+(85));

                txLine(x+(118), y+(87), x+(132), y+(80));

                txLine(x+(75), y+(89), x+(69), y+(87));
                txLine(x+(69), y+(87), x+(58), y+(77));

                if (flyWings){
                    //Крылья
                    txSetColor(BLACK);
                    txLine(x+(80), y+(210), x+(89), y+(213));
                    txLine(x+(89), y+(213), x+(99), y+(213));
                    txLine(x+(99), y+(213), x+(103), y+(208));

                    txLine(x+(92), y+(213), x+(92), y+(211));
                    txLine(x+(92), y+(211), x+(97), y+(205));

                    txLine(x+(52), y+(195), x+(44), y+(187));
                    txLine(x+(44), y+(187), x+(38), y+(174));
                    txLine(x+(38), y+(174), x+(39), y+(158));
                    txLine(x+(39), y+(158), x+(43), y+(144));
                    txLine(x+(43), y+(144), x+(47), y+(138));}

                if (flyHand == 1){
                    //Правая рука
                    POINT FlyRightArm [18] = {{x+(40), y+(108)}, {x+(33), y+(114)}, {x+(21), y+(137)}, {x+(16), y+(156)}, {x+(16), y+(174)}, {x+(21), y+(185)}, {x+(27), y+(189)}, {x+(35), y+(189)}, {x+(38), y+(184)}, {x+(38), y+(178)}, {x+(36), y+(175)}, {x+(35), y+(163)}, {x+(31), y+(155)}, {x+(35), y+(147)}, {x+(41), y+(138)}, {x+(47), y+(134)}, {x+(48), y+(130)}, {x+(52), y+(116)}};
                    txSetColor(BLACK);
                    txSetFillColor(flySkinColor);
                    txPolygon(FlyRightArm, 18);

                    txLine(x+(36), y+(172), x+(26), y+(166));}

                if (flyHand == 2){
                    //Левая рука
                    POINT FlyLeftArm [22] = {{x+(142), y+(186)}, {x+(149), y+(190)}, {x+(161), y+(179)}, {x+(166), y+(165)}, {x+(167), y+(156)}, {x+(167), y+(146)}, {x+(164), y+(136)}, {x+(157), y+(125)}, {x+(151), y+(117)}, {x+(146), y+(111)}, {x+(138), y+(116)}, {x+(140), y+(126)}, {x+(140), y+(140)}, {x+(151), y+(153)}, {x+(151), y+(156)}, {x+(150), y+(160)}, {x+(144), y+(166)}, {x+(144), y+(169)}, {x+(145), y+(170)}, {x+(146), y+(172)}, {x+(145), y+(177)}, {x+(142), y+(182)}};
                    txSetColor(BLACK);
                    txSetFillColor(flySkinColor);
                    txPolygon(FlyLeftArm, 22);

                    txLine(x+(146), y+(172), x+(150), y+(172));
                    txLine(x+(150), y+(172), x+(156), y+(165));


                    if (flyWings){
                        txSetFillColor(LIGHTBLUE);
                        txFloodFill(x+(147), y+(155));}}

                if (flyHand == 3){
                    POINT FlyRightArm [18] = {{x+(40), y+(108)}, {x+(33), y+(114)}, {x+(21), y+(137)}, {x+(16), y+(156)}, {x+(16), y+(174)}, {x+(21), y+(185)}, {x+(27), y+(189)}, {x+(35), y+(189)}, {x+(38), y+(184)}, {x+(38), y+(178)}, {x+(36), y+(175)}, {x+(35), y+(163)}, {x+(31), y+(155)}, {x+(35), y+(147)}, {x+(41), y+(138)}, {x+(47), y+(134)}, {x+(48), y+(130)}, {x+(52), y+(116)}};
                    txSetColor(BLACK);
                    txSetFillColor(flySkinColor);
                    txPolygon(FlyRightArm, 18);

                    txLine(x+(36), y+(172), x+(26), y+(166));

                    //Левая рука
                    POINT FlyLeftArm [22] = {{x+(142), y+(186)}, {x+(149), y+(190)}, {x+(161), y+(179)}, {x+(166), y+(165)}, {x+(167), y+(156)}, {x+(167), y+(146)}, {x+(164), y+(136)}, {x+(157), y+(125)}, {x+(151), y+(117)}, {x+(146), y+(111)}, {x+(138), y+(116)}, {x+(140), y+(126)}, {x+(140), y+(140)}, {x+(151), y+(153)}, {x+(151), y+(156)}, {x+(150), y+(160)}, {x+(144), y+(166)}, {x+(144), y+(169)}, {x+(145), y+(170)}, {x+(146), y+(172)}, {x+(145), y+(177)}, {x+(142), y+(182)}};
                    txSetColor(BLACK);
                    txSetFillColor(flySkinColor);
                    txPolygon(FlyLeftArm, 22);

                    txLine(x+(146), y+(172), x+(150), y+(172));
                    txLine(x+(150), y+(172), x+(156), y+(165));

                    if (flyWings){
                    txSetFillColor(LIGHTBLUE);
                    txFloodFill(x+(147), y+(155));}}

                //Голова
                POINT FlyHead [72] = {{x+(59), y+(73)}, {x+(65), y+(74)}, {x+(73), y+(81)}, {x+(81), y+(85)}, {x+(92), y+(89)}, {x+(105), y+(89)}, {x+(118), y+(82)}, {x+(127), y+(75)}, {x+(132), y+(75)}, {x+(139), y+(74)}, {x+(164), y+(61)}, {x+(182), y+(48)}, {x+(190), y+(39)}, {x+(198), y+(25)}, {x+(199), y+(23)}, {x+(199), y+(5)}, {x+(186), y+(-4)}, {x+(194), y+(2)}, {x+(193), y+(-17)}, {x+(191), y+(-34)}, {x+(188), y+(-47)}, {x+(185), y+(-58)}, {x+(180), y+(-69)}, {x+(171), y+(-84)}, {x+(163), y+(-96)}, {x+(152), y+(-107)}, {x+(142), y+(-114)}, {x+(133), y+(-117)}, {x+(114), y+(-117)}, {x+(109), y+(-113)}, {x+(105), y+(-109)}, {x+(102), y+(-104)}, {x+(100), y+(-102)}, {x+(99), y+(-91)}, {x+(100), y+(-102)}, {x+(98), y+(-105)}, {x+(92), y+(-111)}, {x+(88), y+(-114)}, {x+(83), y+(-116)}, {x+(76), y+(-118)}, {x+(75), y+(-119)}, {x+(70), y+(-119)}, {x+(65), y+(-119)}, {x+(60), y+(-117)}, {x+(57), y+(-116)}, {x+(57), y+(-116)}, {x+(52), y+(-113)}, {x+(47), y+(-109)}, {x+(35), y+(-98)}, {x+(26), y+(-87)}, {x+(21), y+(-81)}, {x+(13), y+(-70)}, {x+(8), y+(-59)}, {x+(4), y+(-44)}, {x+(1), y+(-31)}, {x+(0), y+(0)}, {x+(-6), y+(7)}, {x+(-9), y+(14)}, {x+(-10), y+(18)}, {x+(-10), y+(22)}, {x+(-7), y+(28)}, {x+(-4), y+(33)}, {x+(16), y+(53)}, {x+(27), y+(61)}, {x+(37), y+(66)}, {x+(46), y+(69)}, {x+(59), y+(73)}, {x+(65), y+(74)}, {x+(62), y+(70)}, {x+(57), y+(63)}, {x+(62), y+(70)}, {x+(65), y+(74)}};
                txSetColor(BLACK);
                txSetFillColor(flySkinColor);
                txPolygon(FlyHead, 72);

                txLine(255, 625, 266, 613);

                if (flyHair){
                    POINT FlyHair [106] = {{x+(168), y+(-140)}, {x+(159), y+(-137)}, {x+(150), y+(-132)}, {x+(144), y+(-124)}, {x+(142), y+(-114)}, {x+(138), y+(-116)}, {x+(133), y+(-117)}, {x+(132), y+(-121)}, {x+(132), y+(-127)}, {x+(138), y+(-135)}, {x+(143), y+(-139)}, {x+(148), y+(-141)}, {x+(143), y+(-139)}, {x+(138), y+(-135)}, {x+(132), y+(-127)}, {x+(132), y+(-124)}, {x+(133), y+(-117)}, {x+(114), y+(-117)}, {x+(109), y+(-113)}, {x+(105), y+(-109)}, {x+(102), y+(-104)}, {x+(100), y+(-102)}, {x+(99), y+(-91)}, {x+(100), y+(-102)}, {x+(98), y+(-105)}, {x+(92), y+(-111)}, {x+(88), y+(-114)}, {x+(83), y+(-116)}, {x+(76), y+(-118)}, {x+(75), y+(-119)}, {x+(70), y+(-119)}, {x+(71), y+(-121)}, {x+(72), y+(-131)}, {x+(70), y+(-138)}, {x+(66), y+(-143)}, {x+(64), y+(-146)}, {x+(60), y+(-150)}, {x+(64), y+(-146)}, {x+(66), y+(-143)}, {x+(70), y+(-138)}, {x+(72), y+(-131)}, {x+(71), y+(-121)}, {x+(70), y+(-119)}, {x+(65), y+(-119)}, {x+(60), y+(-117)}, {x+(57), y+(-116)}, {x+(55), y+(-123)}, {x+(52), y+(-128)}, {x+(49), y+(-133)}, {x+(44), y+(-138)}, {x+(38), y+(-141)}, {x+(30), y+(-144)}, {x+(13), y+(-147)}, {x+(13), y+(-147)}, {x+(30), y+(-144)}, {x+(38), y+(-141)}, {x+(44), y+(-138)}, {x+(49), y+(-133)}, {x+(52), y+(-128)}, {x+(55), y+(-123)}, {x+(57), y+(-116)}, {x+(60), y+(-117)}, {x+(65), y+(-119)}, {x+(70), y+(-119)}, {x+(71), y+(-121)}, {x+(72), y+(-131)}, {x+(70), y+(-138)}, {x+(66), y+(-143)}, {x+(64), y+(-146)}, {x+(60), y+(-150)}, {x+(64), y+(-146)}, {x+(66), y+(-143)}, {x+(70), y+(-138)}, {x+(72), y+(-131)}, {x+(71), y+(-121)}, {x+(70), y+(-119)}, {x+(75), y+(-119)}, {x+(76), y+(-118)}, {x+(83), y+(-116)}, {x+(88), y+(-114)}, {x+(92), y+(-111)}, {x+(98), y+(-105)}, {x+(100), y+(-102)}, {x+(99), y+(-91)}, {x+(100), y+(-102)}, {x+(102), y+(-104)}, {x+(105), y+(-109)}, {x+(109), y+(-113)}, {x+(114), y+(-117)}, {x+(133), y+(-117)}, {x+(132), y+(-124)}, {x+(132), y+(-127)}, {x+(138), y+(-135)}, {x+(143), y+(-139)}, {x+(148), y+(-141)}, {x+(143), y+(-139)}, {x+(138), y+(-135)}, {x+(132), y+(-127)}, {x+(132), y+(-121)}, {x+(133), y+(-117)}, {x+(138), y+(-116)}, {x+(142), y+(-114)}, {x+(144), y+(-124)}, {x+(150), y+(-132)}, {x+(159), y+(-137)}, {x+(168), y+(-140)}, };
                    txSetColor(BLACK);
                    txPolygon(FlyHair, 106);}

                txLine(x+(0), y+(0), x+(10), y+(-1));

                txSetColor(BLACK);
                txSetFillColor(BLACK);
                txCircle(x+(84), y+(6), 9);
                txCircle(x+(111), y+(5), 10);

                //Нос
                POINT FlyNose [20] = {{x+(69), y+(27)}, {x+(74), y+(20)}, {x+(79), y+(16)}, {x+(81), y+(14)}, {x+(91), y+(11)}, {x+(103), y+(11)}, {x+(113), y+(15)}, {x+(121), y+(22)}, {x+(125), y+(27)}, {x+(124), y+(31)}, {x+(121), y+(36)}, {x+(114), y+(44)}, {x+(105), y+(48)}, {x+(95), y+(48)}, {x+(89), y+(47)}, {x+(83), y+(46)}, {x+(79), y+(44)}, {x+(75), y+(40)}, {x+(72), y+(35)}, {x+(69), y+(27)}};
                txSetColor(BLACK);
                txSetFillColor(BLACK);
                txPolygon(FlyNose, 20);

                //Глаза
                txSetColor(BLACK);
                txLine(x+(69), y+(28), x+(57), y+(28));
                txLine(x+(57), y+(28), x+(51), y+(27));
                txLine(x+(51), y+(27), x+(42), y+(25));
                txLine(x+(42), y+(25), x+(34), y+(22));
                txLine(x+(34), y+(22), x+(28), y+(18));
                txLine(x+(28), y+(18), x+(22), y+(12));
                txLine(x+(22), y+(12), x+(17), y+(3));
                txLine(x+(17), y+(3), x+(13), y+(-9));
                txLine(x+(13), y+(-9), x+(10), y+(-19));
                txLine(x+(10), y+(-19), x+(10), y+(-39));
                txLine(x+(10), y+(-39), x+(13), y+(-53));
                txLine(x+(13), y+(-53), x+(17), y+(-63));
                txLine(x+(17), y+(-63), x+(20), y+(-70));
                txLine(x+(20), y+(-70), x+(24), y+(-79));
                txLine(x+(24), y+(-79), x+(28), y+(-86));
                txLine(x+(28), y+(-86), x+(35), y+(-98));

                txLine(x+(169), y+(-87), x+(177), y+(-62));
                txLine(x+(177), y+(-62), x+(182), y+(-40));
                txLine(x+(182), y+(-40), x+(182), y+(-8));
                txLine(x+(182), y+(-8), x+(177), y+(4));
                txLine(x+(177), y+(4), x+(173), y+(14));
                txLine(x+(173), y+(14), x+(165), y+(21));
                txLine(x+(165), y+(21), x+(155), y+(27));
                txLine(x+(155), y+(27), x+(125), y+(27));

                txSetFillColor(flyEyesColor);
                txFloodFill(x+(130), y+(17));

                //Рот
                txSetColor(BLACK);
                txLine(x+(163), y+(29), x+(170), y+(23));
                txLine(x+(170), y+(23), x+(176), y+(20));
                txLine(x+(176), y+(20), x+(183), y+(20));

                txLine(x+(171), y+(22), x+(171), y+(25));
                txLine(x+(171), y+(25), x+(156), y+(42));
                txLine(x+(156), y+(42), x+(143), y+(52));

                txLine(x+(7), y+(19), x+(33), y+(24));

                txLine(x+(20), y+(21), x+(23), y+(30));
                txLine(x+(23), y+(30), x+(35), y+(42));
                txLine(x+(35), y+(42), x+(47), y+(49));
                txLine(x+(47), y+(49), x+(62), y+(55));

                POINT FlyRoth [11] = {{x+(62), y+(55)}, {x+(79), y+(58)}, {x+(126), y+(58)}, {x+(136), y+(55)}, {x+(143), y+(52)}, {x+(143), y+(53)}, {x+(118), y+(76)}, {x+(108), y+(81)}, {x+(93), y+(81)}, {x+(82), y+(76)}, {x+(62), y+(58)}};
                txSetColor(BLACK);
                txSetFillColor(flyRothColor);
                txPolygon(FlyRoth, 11);

                if (flyWings){
                    txSetFillColor(LIGHTBLUE);
                    txFloodFill(x+(43), y+(175));
                    txFloodFill(x+(91), y+(205));}
    }

    void drawMinion(int x, int y, int MinionHand, bool MinionGlasses, bool MinionHair, bool MinionRoth, COLORREF MinionEyesColor, COLORREF MinionPantsColor, COLORREF MinionGlassesColor, COLORREF MinionPocketColor)
    {
        //Миньон
                //Правая нога
                POINT MinionRightLeg [14] = {{x+(49), y+(247)}, {x+(70), y+(250)}, {x+(106), y+(250)}, {x+(106), y+(274)}, {x+(110), y+(280)}, {x+(110), y+(293)}, {x+(103), y+(300)}, {x+(96), y+(302)}, {x+(63), y+(302)}, {x+(54), y+(299)}, {x+(48), y+(291)}, {x+(48), y+(276)}, {x+(50), y+(273)}, {x+(49), y+(273)}};
                txSetColor(BLACK);
                txSetFillColor(MinionPantsColor);
                txPolygon(MinionRightLeg, 14);

                txSetColor(BLACK);
                txLine(x+(50), y+(273), x+(63), y+(276));
                txLine(x+(63), y+(276), x+(91), y+(276));
                txLine(x+(91), y+(276), x+(106), y+(273));

                txSetFillColor(BLACK);
                txFloodFill(x+(78), y+(292));

                //Левая нога
                POINT MinionLeftLeg [13] = {{x+(125), y+(250)}, {x+(173), y+(250)}, {x+(179), y+(248)}, {x+(179), y+(270)}, {x+(185), y+(277)}, {x+(185), y+(290)}, {x+(177), y+(298)}, {x+(166), y+(301)}, {x+(127), y+(301)}, {x+(122), y+(297)}, {x+(118), y+(293)}, {x+(118), y+(285)}, {x+(125), y+(275)}};
                txSetColor(BLACK);
                txSetFillColor(MinionPantsColor);
                txPolygon(MinionLeftLeg, 13);

                txSetFillColor(MinionPantsColor);
                txFloodFill(x+(155), y+(285));

                txSetColor(BLACK);
                txLine(x+(125), y+(275), x+(169), y+(275));
                txLine(x+(169), y+(275), x+(179), y+(270));

                txSetFillColor(BLACK);
                txFloodFill(x+(153), y+(288));

                //Тело
                POINT MinionBody [27] = {{x+(49), y+(247)}, {x+(70), y+(250)}, {x+(173), y+(250)}, {x+(179), y+(248)}, {x+(198), y+(245)}, {x+(212), y+(239)}, {x+(218), y+(228)}, {x+(213), y+(223)}, {x+(209), y+(216)}, {x+(209), y+(179)}, {x+(212), y+(170)}, {x+(212), y+(165)}, {x+(206), y+(157)}, {x+(195), y+(138)}, {x+(195), y+(136)}, {x+(52), y+(136)}, {x+(52), y+(138)}, {x+(40), y+(164)}, {x+(33), y+(161)}, {x+(33), y+(179)}, {x+(29), y+(195)}, {x+(24), y+(209)}, {x+(20), y+(216)}, {x+(13), y+(222)}, {x+(2), y+(227)}, {x+(18), y+(239)}, {x+(33), y+(243)}};
                txSetColor(BLACK);
                txSetFillColor(MinionPantsColor);
                txPolygon(MinionBody, 27);

                //Карман
                txSetColor(BLACK);
                txLine(x+(159), y+(181), x+(76), y+(181));
                txLine(x+(76), y+(181), x+(76), y+(218));
                txLine(x+(76), y+(218), x+(113), y+(236));
                txLine(x+(113), y+(236), x+(159), y+(218));
                txLine(x+(159), y+(218), x+(159), y+(181));
                txSetFillColor(MinionPocketColor);
                txFloodFill(x+(113), y+(209));

                if (MinionHand == 1){
                    //Правая рука
                    POINT MinionRightArm [17] = {{x+(2), y+(227)}, {x+(2), y+(211)}, {x+(-13), y+(209)}, {x+(-20), y+(204)}, {x+(-25), y+(200)}, {x+(-32), y+(187)}, {x+(-32), y+(173)}, {x+(-26), y+(165)}, {x+(-15), y+(155)}, {x+(1), y+(147)}, {x+(1), y+(144)}, {x+(33), y+(161)}, {x+(33), y+(179)}, {x+(29), y+(195)}, {x+(24), y+(209)}, {x+(20), y+(216)}, {x+(13), y+(222)}};
                    txSetColor(BLACK);
                    txSetFillColor(YELLOW);
                    txPolygon(MinionRightArm, 17);

                    txSetColor(BLACK);
                    txLine(x+(2), y+(211), x+(2), y+(178));
                    txLine(x+(2), y+(195), x+(29), y+(195));
                    txLine(x+(-7), y+(190), x+(6), y+(174));

                    //Левый бок
                    txSetColor(BLACK);
                    txLine(x+(229), y+(149), x+(229), y+(211));
                    txLine(x+(229), y+(200), x+(209), y+(200));
                    txLine(x+(229), y+(211), x+(218), y+(228));}

                if (MinionHand == 2){
                    //Левая рука
                    POINT MinionLeftArm [18] = {{x+(209), y+(216)}, {x+(209), y+(179)}, {x+(212), y+(170)}, {x+(212), y+(165)}, {x+(229), y+(149)}, {x+(229), y+(161)}, {x+(226), y+(159)}, {x+(229), y+(161)}, {x+(238), y+(169)}, {x+(249), y+(178)}, {x+(259), y+(191)}, {x+(259), y+(203)}, {x+(250), y+(211)}, {x+(234), y+(219)}, {x+(223), y+(219)}, {x+(220), y+(228)}, {x+(218), y+(228)}, {x+(213), y+(223)}};
                    txSetColor(BLACK);
                    txSetFillColor(YELLOW);
                    txPolygon(MinionLeftArm, 18);

                    txSetColor(BLACK);
                    txLine(x+(223), y+(219), x+(227), y+(211));
                    txLine(x+(227), y+(211), x+(227), y+(192));
                    txLine(x+(220), y+(185), x+(233), y+(197));
                    txLine(x+(209), y+(200), x+(227), y+(200));

                    //Правый бок
                    txSetColor(BLACK);
                    txLine(x+(2), y+(227), x+(2), y+(144));}

                if (MinionHand == 3){
                    //Правая рука
                    POINT MinionRightArm [17] = {{x+(2), y+(227)}, {x+(2), y+(211)}, {x+(-13), y+(209)}, {x+(-20), y+(204)}, {x+(-25), y+(200)}, {x+(-32), y+(187)}, {x+(-32), y+(173)}, {x+(-26), y+(165)}, {x+(-15), y+(155)}, {x+(1), y+(147)}, {x+(1), y+(144)}, {x+(33), y+(161)}, {x+(33), y+(179)}, {x+(29), y+(195)}, {x+(24), y+(209)}, {x+(20), y+(216)}, {x+(13), y+(222)}};
                    txSetColor(BLACK);
                    txSetFillColor(YELLOW);
                    txPolygon(MinionRightArm, 17);

                    txSetColor(BLACK);
                    txLine(x+(2), y+(211), x+(2), y+(178));
                    txLine(x+(2), y+(195), x+(29), y+(195));
                    txLine(x+(-7), y+(190), x+(6), y+(174));

                    //Левая рука
                    POINT MinionLeftArm [18] = {{x+(209), y+(216)}, {x+(209), y+(179)}, {x+(212), y+(170)}, {x+(212), y+(165)}, {x+(229), y+(149)}, {x+(229), y+(161)}, {x+(226), y+(159)}, {x+(229), y+(161)}, {x+(238), y+(169)}, {x+(249), y+(178)}, {x+(259), y+(191)}, {x+(259), y+(203)}, {x+(250), y+(211)}, {x+(234), y+(219)}, {x+(223), y+(219)}, {x+(220), y+(228)}, {x+(218), y+(228)}, {x+(213), y+(223)}};
                    txSetColor(BLACK);
                    txSetFillColor(YELLOW);
                    txPolygon(MinionLeftArm, 18);

                    txSetColor(BLACK);
                    txLine(x+(223), y+(219), x+(227), y+(211));
                    txLine(x+(227), y+(211), x+(227), y+(192));
                    txLine(x+(220), y+(185), x+(233), y+(197));
                    txLine(x+(209), y+(200), x+(227), y+(200));}

                //Лямки
                POINT MinionRightStrap [6] = {{x+(195), y+(136)}, {x+(195), y+(138)}, {x+(206), y+(157)}, {x+(212), y+(165)}, {x+(229), y+(149)}, {x+(229), y+(103)}};
                txSetColor(BLACK);
                txSetFillColor(MinionPantsColor);
                txPolygon(MinionRightStrap, 6);

                POINT MinionLeftStrap [5] = {{x+(1), y+(144)}, {x+(33), y+(161)}, {x+(40), y+(164)}, {x+(52), y+(138)}, {x+(1), y+(110)}};
                txSetColor(BLACK);
                txSetFillColor(MinionPantsColor);
                txPolygon(MinionLeftStrap, 5);

                if (MinionHand == 0){
                    //Правый бок
                    txSetColor(BLACK);
                    txLine(x+(2), y+(227), x+(2), y+(144));
                    txSetFillColor(YELLOW);
                    txFloodFill(x+(22), y+(181));

                    //Левый бок
                    txSetColor(BLACK);
                    txLine(x+(229), y+(149), x+(229), y+(211));
                    txLine(x+(229), y+(200), x+(209), y+(200));
                    txLine(x+(229), y+(211), x+(218), y+(228));}

                txSetColor(BLACK);
                txLine(x+(2), y+(195), x+(29), y+(195));
                txSetFillColor(MinionPantsColor);
                txFloodFill(x+(15), y+(207));

                txSetFillColor(MinionPantsColor);
                txFloodFill(x+(219), y+(209));
                txSetFillColor(YELLOW);
                txFloodFill(x+(216), y+(176));
                txSetFillColor(YELLOW);
                txFloodFill(x+(22), y+(181));

                //Голова
                txSetColor(BLACK);
                txLine(x+(229), y+(103), x+(229), y+(6));
                txLine(x+(1), y+(110), x+(1), y+(6));
                txArc (x+(1), y+(-65), x+(229), y+(78), 0, 180);

                txSetFillColor(YELLOW);
                txFloodFill(x+(75), y+(107));

                if (MinionGlasses){
                    //Глаза
                    POINT MinionRightEyeStrap [8] = {{x+(0), y+(46)}, {x+(20), y+(46)}, {x+(17), y+(38)}, {x+(16), y+(31)}, {x+(16), y+(24)}, {x+(17), y+(20)}, {x+(19), y+(14)}, {x+(0), y+(14)}};
                    txSetColor(BLACK);
                    txSetFillColor(MinionGlassesColor);
                    txPolygon(MinionRightEyeStrap, 8);

                    POINT MinionLeftEyeStrap [7] = {{x+(218), y+(44)}, {x+(228), y+(44)}, {x+(228), y+(8)}, {x+(216), y+(8)}, {x+(219), y+(16)}, {x+(220), y+(24)}, {x+(220), y+(35)}};
                    txSetColor(BLACK);
                    txSetFillColor(MinionGlassesColor);
                    txPolygon(MinionLeftEyeStrap, 7);

                    txSetColor(BLACK);
                    txSetFillColor(MinionGlassesColor);
                    txCircle(x+(68), y+(30), 52);}

                txSetColor(BLACK);
                txSetFillColor(WHITE);
                txCircle(x+(68), y+(30), 42);

                txSetColor(BLACK);
                txSetFillColor(MinionEyesColor);
                txCircle(x+(68), y+(36), 15);

                txSetColor(BLACK);
                txSetFillColor(BLACK);
                txCircle(x+(68), y+(36), 8);

                if (MinionGlasses){
                    txSetColor(BLACK);
                    txSetFillColor(MinionGlassesColor);
                    txCircle(x+(170), y+(30), 51);}

                    txSetColor(BLACK);
                    txSetFillColor(WHITE);
                    txCircle(x+(170), y+(30), 41);

                    txSetColor(BLACK);
                    txSetFillColor(MinionEyesColor);
                    txCircle(x+(162), y+(35), 17);

                    txSetColor(BLACK);
                    txSetFillColor(BLACK);
                    txCircle(x+(161), y+(37), 7);

                if (MinionRoth){
                    //Рот
                    POINT MinionRoth [15] = {{x+(75), y+(84)}, {x+(85), y+(84)}, {x+(102), y+(94)}, {x+(130), y+(94)}, {x+(149), y+(86)}, {x+(158), y+(86)}, {x+(162), y+(91)}, {x+(162), y+(109)}, {x+(151), y+(121)}, {x+(129), y+(129)}, {x+(101), y+(129)}, {x+(86), y+(122)}, {x+(76), y+(112)}, {x+(72), y+(97)}, {x+(72), y+(89)}};
                    txSetColor(BLACK);
                    txSetFillColor(WHITE);
                    txPolygon(MinionRoth, 15);

                    txSetColor(BLACK);
                    txLine(x+(90), y+(124), x+(90), y+(106));
                    txLine(x+(90), y+(106), x+(95), y+(90));

                    txSetColor(BLACK);
                    txLine(x+(128), y+(94), x+(128), y+(100));
                    txLine(x+(128), y+(100), x+(129), y+(101));
                    txLine(x+(129), y+(101), x+(129), y+(129));}

                if (MinionHair){
                    //Волосы
                    txSetColor(BLACK);
                    txLine(x+(76), y+(-46), x+(34), y+(-60));
                    txLine(x+(95), y+(-55), x+(39), y+(-74));
                    txLine(x+(101), y+(-59), x+(66), y+(-89));
                    txLine(x+(117), y+(-62), x+(139), y+(-90));
                    txLine(x+(126), y+(-60), x+(168), y+(-83));
                    txLine(x+(141), y+(-56), x+(189), y+(-69));}
    }

    void drawSkubi(int x, int y, bool SkubiKeychain, bool skubyiMoles, bool SkubiEyes, bool SkubiNose, COLORREF SkubiStrokePanelColor, COLORREF SkubiSkinColor, COLORREF SkubiCollarColor, COLORREF SkubiEyesColor)
    {
        //Скуби
                //Ошейник
                txSetColor(SkubiStrokePanelColor, 3);

                txLine(x+(0), y+(0), x+(17), y+(21));
                txLine(x+(17), y+(21), x+(36), y+(31));

                txLine(x+(45), y+(38), x+(106), y+(58));
                txLine(x+(106), y+(58), x+(126), y+(58));
                txLine(x+(126), y+(58), x+(135), y+(36));
                txLine(x+(135), y+(36), x+(106), y+(35));
                txLine(x+(106), y+(35), x+(57), y+(16));

                txLine(x+(47), y+(11), x+(16), y+(-14));
                txLine(x+(16), y+(-14), x+(0), y+(0));

                if (SkubiKeychain){
                    txLine(x+(52), y+(6), x+(58), y+(15));
                    txLine(x+(58), y+(15), x+(50), y+(20));
                    txLine(x+(50), y+(20), x+(45), y+(32));
                    txLine(x+(45), y+(32), x+(45), y+(47));
                    txLine(x+(45), y+(47), x+(37), y+(47));
                    txLine(x+(37), y+(47), x+(36), y+(31));
                    txLine(x+(36), y+(31), x+(40), y+(19));
                    txLine(x+(40), y+(19), x+(52), y+(6));

                    txLine(x+(27), y+(50), x+(37), y+(39));
                    txLine(x+(37), y+(39), x+(37), y+(47));
                    txLine(x+(37), y+(47), x+(35), y+(47));
                    txLine(x+(35), y+(47), x+(35), y+(64));
                    txLine(x+(35), y+(64), x+(46), y+(54));
                    txLine(x+(46), y+(54), x+(46), y+(48));
                    txLine(x+(46), y+(48), x+(45), y+(47));
                    txLine(x+(45), y+(47), x+(45), y+(38));
                    txLine(x+(45), y+(38), x+(50), y+(39));
                    txLine(x+(50), y+(39), x+(53), y+(56));
                    txLine(x+(53), y+(56), x+(32), y+(73));
                    txLine(x+(32), y+(73), x+(27), y+(50));

                    txSetFillColor(YELLOW);
                    txFloodFill(x+(44), y+(22));
                    txFloodFill(x+(35), y+(68));
                    txSetFillColor(SkubiCollarColor);
                    txFloodFill(x+(39), y+(54));}
                else{
                    txSetColor(SkubiStrokePanelColor, 3);
                    txLine(x+(47), y+(11), x+(57), y+(16));
                    txLine(x+(17), y+(21), x+(50), y+(39));}


                //Шея
                txLine(x+(16), y+(-14), x+(43), y+(-56));

                txLine(x+(135), y+(36), x+(162), y+(-33));
                txLine(x+(162), y+(-33), x+(179), y+(-113));
                txLine(x+(179), y+(-113), x+(186), y+(-196));
                txLine(x+(186), y+(-196), x+(158), y+(-251));

                //Подбородок
                txLine(x+(139), y+(-83), x+(120), y+(-75));
                txLine(x+(120), y+(-75), x+(137), y+(-91));
                txLine(x+(137), y+(-91), x+(116), y+(-71));
                txLine(x+(116), y+(-71), x+(78), y+(-56));
                txLine(x+(78), y+(-56), x+(43), y+(-56));
                txLine(x+(43), y+(-56), x+(34), y+(-73));
                txLine(x+(34), y+(-73), x+(40), y+(-88));

                txLine(x+(34), y+(-101), x+(34), y+(-91));
                txLine(x+(34), y+(-91), x+(49), y+(-84));
                txLine(x+(49), y+(-84), x+(72), y+(-86));

                //Зубы
                txLine(x+(57), y+(-105), x+(59), y+(-96));
                txLine(x+(59), y+(-96), x+(85), y+(-103));

                txLine(x+(67), y+(-109), x+(67), y+(-98));

                txLine(x+(75), y+(-100), x+(75), y+(-114));

                if (SkubiNose){
                    //Нос
                    txLine(x+(75), y+(-114), x+(80), y+(-119));
                    txLine(x+(80), y+(-119), x+(95), y+(-132));
                    txLine(x+(95), y+(-132), x+(70), y+(-143));
                    txLine(x+(70), y+(-143), x+(58), y+(-160));
                    txLine(x+(58), y+(-160), x+(70), y+(-177));
                    txLine(x+(70), y+(-177), x+(95), y+(-186));
                    txLine(x+(95), y+(-186), x+(111), y+(-186));
                    txLine(x+(111), y+(-186), x+(124), y+(-180));
                    txLine(x+(124), y+(-180), x+(127), y+(-167));
                    txLine(x+(127), y+(-167), x+(125), y+(-157));
                    txLine(x+(125), y+(-157), x+(75), y+(-114));}


                txLine(x+(34), y+(-101), x+(26), y+(-103));
                txLine(x+(26), y+(-103), x+(23), y+(-114));
                txLine(x+(23), y+(-114), x+(27), y+(-125));
                txLine(x+(27), y+(-125), x+(20), y+(-138));
                txLine(x+(20), y+(-138), x+(20), y+(-157));
                txLine(x+(20), y+(-157), x+(30), y+(-170));
                txLine(x+(30), y+(-170), x+(34), y+(-173));
                txLine(x+(34), y+(-173), x+(50), y+(-185));
                txLine(x+(50), y+(-185), x+(48), y+(-200));

                txLine(x+(41), y+(-196), x+(54), y+(-204));

                txLine(x+(34), y+(-173), x+(30), y+(-198));
                txLine(x+(30), y+(-198), x+(54), y+(-233));

                txLine(x+(46), y+(-222), x+(40), y+(-238));
                txLine(x+(40), y+(-238), x+(40), y+(-263));
                txLine(x+(40), y+(-263), x+(34), y+(-270));
                txLine(x+(34), y+(-270), x+(34), y+(-285));
                txLine(x+(34), y+(-285), x+(46), y+(-299));
                txLine(x+(46), y+(-299), x+(59), y+(-305));
                txLine(x+(59), y+(-305), x+(66), y+(-302));
                txLine(x+(66), y+(-302), x+(66), y+(-285));
                txLine(x+(66), y+(-285), x+(79), y+(-281));
                txLine(x+(79), y+(-281), x+(87), y+(-267));
                txLine(x+(87), y+(-267), x+(99), y+(-272));
                txLine(x+(99), y+(-272), x+(107), y+(-272));
                txLine(x+(107), y+(-272), x+(125), y+(-269));
                txLine(x+(125), y+(-269), x+(122), y+(-269));
                txLine(x+(122), y+(-269), x+(153), y+(-306));
                txLine(x+(153), y+(-306), x+(175), y+(-309));
                txLine(x+(175), y+(-309), x+(186), y+(-296));
                txLine(x+(186), y+(-296), x+(186), y+(-268));
                txLine(x+(186), y+(-268), x+(178), y+(-262));
                txLine(x+(178), y+(-262), x+(170), y+(-273));
                txLine(x+(170), y+(-273), x+(170), y+(-294));
                txLine(x+(170), y+(-294), x+(158), y+(-283));
                txLine(x+(158), y+(-283), x+(153), y+(-270));

                txLine(x+(153), y+(-274), x+(170), y+(-281));
                txLine(x+(170), y+(-281), x+(170), y+(-254));
                txLine(x+(170), y+(-254), x+(166), y+(-249));
                txLine(x+(166), y+(-249), x+(163), y+(-249));
                txLine(x+(163), y+(-249), x+(158), y+(-251));

                txLine(x+(26), y+(-103), x+(34), y+(-101));
                txLine(x+(34), y+(-101), x+(57), y+(-106));
                txLine(x+(57), y+(-106), x+(67), y+(-109));
                txLine(x+(67), y+(-109), x+(75), y+(-114));
                txLine(x+(75), y+(-114), x+(80), y+(-119));

                //Губа
                txLine(x+(80), y+(-119), x+(86), y+(-98));
                txLine(x+(86), y+(-98), x+(115), y+(-101));
                txLine(x+(115), y+(-101), x+(138), y+(-114));
                txLine(x+(138), y+(-114), x+(157), y+(-133));
                txLine(x+(157), y+(-133), x+(166), y+(-154));
                txLine(x+(166), y+(-154), x+(163), y+(-175));
                txLine(x+(163), y+(-175), x+(144), y+(-189));
                txLine(x+(144), y+(-189), x+(157), y+(-199));
                txLine(x+(157), y+(-199), x+(159), y+(-213));
                txLine(x+(159), y+(-213), x+(154), y+(-218));

                txLine(x+(150), y+(-215), x+(158), y+(-223));

                if (SkubiEyes){
                    txSetFillColor(WHITE);
                    txSetColor(WHITE);
                    txCircle(x+(111), y+(-226), 10);
                    txCircle(x+(86), y+(-213), 10);
                    txSetFillColor(SkubiEyesColor);
                    txSetColor(SkubiEyesColor);
                    txCircle(x+(111), y+(-226), 6);
                    txCircle(x+(86), y+(-213), 6);
                    txSetFillColor(SkubiStrokePanelColor);
                    txCircle(x+(111), y+(-226), 4);
                    txCircle(x+(86), y+(-213), 4);


                    txSetColor(SkubiStrokePanelColor, 2);
                    txLine(x+(116), y+(-213), x+(121), y+(-214));
                    txLine(x+(121), y+(-214), x+(127), y+(-222));
                    txLine(x+(127), y+(-222), x+(127), y+(-231));
                    txLine(x+(127), y+(-231), x+(123), y+(-239));
                    txLine(x+(123), y+(-239), x+(116), y+(-244));
                    txLine(x+(116), y+(-244), x+(102), y+(-239));
                    txLine(x+(102), y+(-239), x+(102), y+(-229));


                    txLine(x+(96), y+(-226), x+(92), y+(-231));
                    txLine(x+(92), y+(-231), x+(83), y+(-231));
                    txLine(x+(83), y+(-231), x+(77), y+(-228));
                    txLine(x+(77), y+(-228), x+(72), y+(-220));
                    txLine(x+(72), y+(-220), x+(70), y+(-214));
                    txLine(x+(70), y+(-214), x+(70), y+(-206));
                    txLine(x+(70), y+(-206), x+(73), y+(-201));
                    txLine(x+(73), y+(-201), x+(80), y+(-200));
                    txLine(x+(80), y+(-200), x+(85), y+(-202));

                    txSetColor(SkubiStrokePanelColor, 5);
                    txLine(x+(72), y+(-247), x+(85), y+(-262));
                    txLine(x+(85), y+(-262), x+(93), y+(-258));

                    txLine(x+(107), y+(-257), x+(117), y+(-263));
                    txLine(x+(117), y+(-263), x+(134), y+(-257));

                    txSetColor(SkubiStrokePanelColor, 2);
                    txLine(x+(83), y+(-196), x+(90), y+(-200));
                    txLine(x+(90), y+(-200), x+(94), y+(-208));

                    txLine(x+(107), y+(-214), x+(117), y+(-207));
                    txLine(x+(117), y+(-207), x+(127), y+(-214));

                    txLine(x+(72), y+(-230), x+(83), y+(-238));
                    txLine(x+(83), y+(-238), x+(92), y+(-236));

                    txLine(x+(99), y+(-241), x+(103), y+(-247));
                    txLine(x+(103), y+(-247), x+(116), y+(-249));}

                if (skubyiMoles){
                    txSetColor(SkubiStrokePanelColor, 2);
                    txSetFillColor(SkubiStrokePanelColor);
                    txCircle(x+(51), y+(-139), 2);
                    txCircle(x+(45), y+(-129), 3);
                    txCircle(x+(57), y+(-127), 2);

                    txCircle(x+(117), y+(-125), 2);
                    txCircle(x+(123), y+(-137), 3);

                    txCircle(x+(56), y+(-74), 2);
                    txCircle(x+(51), y+(-68), 2);}

                txSetColor(SkubiStrokePanelColor, 2);
                txLine(x+(42), y+(-292), x+(42), y+(-277));
                txLine(x+(42), y+(-277), x+(40), y+(-263));
                txLine(x+(40), y+(-263), x+(49), y+(-284));
                txLine(x+(49), y+(-284), x+(61), y+(-303));

                txSetFillColor(SkubiStrokePanelColor);
                txFloodFill(x+(94), y+(-166));
                txSetFillColor(SkubiSkinColor);
                txFloodFill(x+(94), y+(-26));
                txFloodFill(x+(165), y+(-285));
                txFloodFill(x+(165), y+(-285));
                txFloodFill(x+(48), y+(-292));
                txFloodFill(x+(39), y+(-276));
                txSetFillColor(SkubiCollarColor);
                txFloodFill(x+(26), y+(12));
                txFloodFill(x+(74), y+(38));

    }


