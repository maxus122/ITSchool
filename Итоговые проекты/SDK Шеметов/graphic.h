//! @include Txlib.h
#include "TXlib.h"

/*! @mainpage
    @p Графическая библиотека для игры air trafic control
    @author Pavel
    @version 0.1
    */

//!   @defgroup Отрисовка
//!   @brief Раздел графических функций.

double searchX(double x0, double x1, double y0, double y1, double angle);
double searchY(double x0, double x1, double y0, double y1, double angle);
void drawAircraft(int x, int y, COLORREF color);

/*!
    @ingroup Отрисовка
    @brief Рисует главное меню
    @param windowWidth Размер окна по x
    @param windowHeight Размер окн по y
    @param selectMouse Наведена ли мышка на кнопку
    @result Выводит на экран главного меню игры
*/
void drawMenuScreen(int windowWidth, int windowHeight, bool selectMouse){
    txSetFillColor(TX_BLACK);
    txClear();
    int xCenter = windowWidth/2;
    int yCenter = windowHeight/2;

    txSetColor(RGB(7, 204, 4), 5);
    txSelectFont ("Arial", 50, 0, FW_BOLD);
    txDrawText(xCenter-200, yCenter-200, xCenter+200, yCenter-100, "Air trafic control");

    txRectangle(xCenter-150, yCenter-100, xCenter +150, yCenter-50);
    txDrawText(xCenter-150, yCenter-100, xCenter +150, yCenter-50, "Старт");
}

/*!
    @ingroup Отрисовка
    @brief Рисует окно, вызываемого при поражении
    @param windowWidth Размер окна по x
    @param windowHeight Размер окн по y
    @result Выводит на экран окно проигрыша
*/
void drawGameOverScreen(int windowWidth, int windowHeight){
    txSetFillColor(TX_BLACK);
    txClear();
    int xCenter = windowWidth/2;
    int yCenter = windowHeight/2;

    txSetColor(RGB(7, 204, 4), 5);
    txSelectFont ("Arial", 50, 0, FW_BOLD);
    txDrawText(xCenter-200, yCenter-200, xCenter+200, yCenter-100, "Ваша карьера диспечера закончилась...");

    txRectangle(xCenter-150, yCenter-100, xCenter +150, yCenter-50);
    txDrawText(xCenter-150, yCenter-100, xCenter +150, yCenter-50, "Новая игра");
}

/*!
    @ingroup Отрисовка
    @brief Рисует таблицу рейсов
    @param x0 Координата x левого верхнего угла таблицы
    @param y0 Координата y левого верхнего угла таблицы
    @param x1 Координата x правого нижнего угла таблицы
    @param y1 Координата y правого нижнего угла таблицы
    @result Выводит на экран таблицу рейсов
*/
void drawTableAirControl(int x0, int y0, int x1, int y1){

}
/*!
    @ingroup Отрисовка
    @brief Рисует таблицу улучшений
    @param x0 Координата x левого верхнего угла таблицы
    @param y0 Координата y левого верхнего угла таблицы
    @param x1 Координата x правого нижнего угла таблицы
    @param y1 Координата y правого нижнего угла таблицы
    @result Выводит на экран таблицу улучшений
*/
void drawTableUpgradeAirport(int x0, int y0, int x1, int y1){

}

/*!
    @ingroup Отрисовка
    @brief Покадрово Рисует анимацию нажатия на кнопку
    @param windowWidth Размер окна по x
    @param windowHeight Размер окн по y
    @param frame Кадр анимации в дипозоне от 0 до 40
    @code
        for(int i = 0; i<41; i++){
            drawAnimateClick(800, 600, i);
        }
    @endcode
    @warning Разрешение экрана может быть любым, функция сама расчитает анимацию.
    @warning Данная функция сама очищает экран для следующего кадра!
    @result Выводит на экран анимацию нажатия на кнопку в виде летящего самолёта
*/
void drawAnimateClick(int windowWidth, int windowHeight, int frame){
        drawAircraft(windowWidth/40*frame, (windowHeight-50)-(windowHeight/40*frame), TX_WHITE);
        txSleep(1);
        txSetFillColor(TX_BLACK);
        txClear();
}

/*!
    @ingroup Отрисовка
    @brief Рисует радар зелёного цвета
    @param x Координата x центра
    @param y Координата y центра
    @result Выводит на экран радар зелёного цвета с 5 радиусами
*/
void drawRadar(int x, int y){
    txSetColor(RGB(7, 204, 4), 5);
    txCircle(x/2, y/2, 300);
    txCircle(x/2, y/2, 250);
    txCircle(x/2, y/2, 200);
    txCircle(x/2, y/2, 150);
    txCircle(x/2, y/2, 75);

    txLine((x/2)-300,y/2, (x/2)+300, y/2);
    txLine(x/2, (y/2)-300, x/2, (y/2)+300);
}

/*!
    @ingroup Отрисовка
    @brief Рисует ВВП
    @param x Координата x центра
    @param y Координата y центра
    @result Выводит на экран рисунок ВВП
*/
void drawAirport(int x, int y){

    txSelectFont ("Arial", 20, 0, FW_BOLD);

    txSetColor(RGB(7, 204, 4), 5);

    txRectangle((x/2)-75, (y/2)-50, (x/2)+50, (y/2)-25);
    txSetColor(RGB(5, 108, 2), 5);

    txDrawText((x/2)-75, (y/2)-60, (x/2)+50, (y/2)-50, "ВВП1");


}

/*!
    @ingroup Отрисовка
    @brief Рисует стрелку радара
    @param angle Угол отклонения по часовой стрелке
    @param x Координата x центра
    @param y Координата y центра
    @result Выводит на экран стрелки радара
*/
void drawLineRadar(int angle, int x, int y){
    txSetColor(RGB(7, 204, 4), 5);
    txLine(x/2, y/2, searchX(x/2, x/2, y/2, (y/2)-300, angle), searchY(x/2, x/2, y/2, (y/2)-300, angle));

    txSetColor(RGB(107, 252, 103), 5);
    txLine(x/2, y/2, searchX(x/2, x/2, y/2, (y/2)-300, angle-1), searchY(x/2, x/2, y/2, (y/2)-300, angle-1));

    txSetColor(RGB(155, 253, 103), 5);
    txLine(x/2, y/2, searchX(x/2, x/2, y/2, (y/2)-300, angle-2), searchY(x/2, x/2, y/2, (y/2)-300, angle-2));

    txSetColor(RGB(204, 254, 203), 5);
    txLine(x/2, y/2, searchX(x/2, x/2, y/2, (y/2)-300, angle-3), searchY(x/2, x/2, y/2, (y/2)-300, angle-3));

    txSetColor(RGB(213, 254, 211), 5);
    txLine(x/2, y/2, searchX(x/2, x/2, y/2, (y/2)-300, angle-4), searchY(x/2, x/2, y/2, (y/2)-300, angle-4));

    txSetColor(RGB(217, 254, 216), 5);
    txLine(x/2, y/2, searchX(x/2, x/2, y/2, (y/2)-300, angle-5), searchY(x/2, x/2, y/2, (y/2)-300, angle-5));
}
/*!
    @ingroup Отрисовка
    @brief Рисует самолёт
    @param x Координата x центра
    @param y Координата y центра
    @param color Цвет в RGB формате
    @result Выводит на экран самолёт
*/
void drawAircraft(int x, int y, COLORREF color){
    txSetColor(color);
    txSetFillColor(color);

    POINT polygon[16] = {{x, y}, {x+4, y+4}, {x+4, y+8}, {x+8, y+4}, {x+20, y+4}, {x+20, y+20}, {x+36, y+4}, {x+48, y+4}, {x+48, y}, {x+48, y-4}, {x+36, y-4}, {x+20, y-20}, {x+20, y-4}, {x+8, y-4}, {x+4, y-8}, {x+4, y-4}};
    txPolygon(polygon, 16);
}


double searchX(double x0, double x1, double y0, double y1, double angle){
    double x2 = (x1-x0)*cos(angle*M_PI/180)-(y1-y0)*sin(angle*M_PI/180)+x0;
    return x2;
}
double searchY(double x0, double x1, double y0, double y1, double angle){
    double y2 = (x1-x0)*sin(angle*M_PI/180)+(y1-y0)*cos(angle*M_PI/180)+y0;
    return y2;
}



