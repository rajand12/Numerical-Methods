#include <stdio.h>
#include <math.h>
double f(double x, double y, double ay,double  by, double ny);
int main()
{
    int i;
    int nx = 0;
    double ax, bx;
    double sumx = 0;
    double soma=0;
    double hx,hy;
    double x,y;
    double ay,by;
    int ny;
    printf("Lower limit ax = ");
    scanf("%lf", &ax);
    printf("Upper limit  bx (b>a) = ");
    scanf("%lf", &bx);
    printf("Interval nx (n>1) n = ");
    scanf("%d", &nx);
    hx = (bx - ax) / (nx - 1);
    x = ax;
    printf("inferior limit ay = ");
    scanf("%lf", &ay);
    printf("upper limit by (b>a) = ");
    scanf("%lf", &by);
    printf("interval ny (n>1) n = ");
    scanf("%d", &ny);

    for (i = 1; i <= nx - 1; i++)
    {
        sumx = sumx + f(x,y,ay,by,ny) + f(x + hx,y,ay,by,ny);
        x = x + hx;
    }


    sumx = sumx * (hx / 2);

    printf("O resultado da soma e': %lf\n", sumx);

    return 0;
} // end main()


//
//
//
double f(double x, double y, double ay,double  by, double ny)
{
    double func;
    int j=0;
    double hy;
    double sumy=0;

    func= sin(x+y) / ((x*x) + y);

    hy = (by - ay) / (ny -1);
    y= ay;

    for (j =1; j <= ny - 1; j++)
    {
        sumy = sumy + sin(x + (y + hy)/ (x*x) + y+ hy);
        y = y +hy;
    }

    return sumy = sumy * (hy / 2);
} // end f()
