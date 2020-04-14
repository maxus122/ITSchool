    #include "TXLib.h"
    #include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
    #define LEN 200000

    double Parabola(double x);

    double Parabola(double x)
    {
        double y;
        y = x*x;
        return y;
    }