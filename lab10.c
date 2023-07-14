#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double sep=0.0001;
void fun1(double, double);
int main()
{
    double a, b;
    scanf("%lf%lf", &a, &b);
    fun1(a, b);
    return 0;
}
void fun1(double a, double b){
    double x_max, y_max;
    int cc=0;
    long double xi, xr, yi , yr;
    while (cc!=1){
        xi=(a+0.5*(b-a-sep));
        //xr=xi+sep;
        xr=(a+0.5*(b-a+sep));
        yi=(xi*cos(xi));
        yr=(xr*cos(xr));
        if (yi>yr){
            b=xr;
            cc=0;
            xi=((a+0.5)*(b-a-sep));
            //xr=xi+sep;
            xr=((a+0.5)*(b-a+sep));
            yi=(xi*cos(xi));
            yr=(xr*cos(xr));
        }
        else if (yr>yi){
            a=xi;
            cc=0;
            xi=((a+0.5)*(b-a-sep));
            //xr=xi+sep;
            xr=((a+0.5)*(b-a+sep));
            yi=(xi*cos(xi));
            yr=(xr*cos(xr));
        }
        if (yi==yr){
            printf("%lf  %lf", xi, xr);
            x_max=(0.5*(xi+xr));
            y_max=(x_max*(cos(x_max)));
            //printf("%lf\n%lf", x_max, y_max);
            cc=1;
            break;
        }
        else if ((b-a) < (3.0*sep)){
            x_max=(0.5*(xi-xr));
            y_max=(x_max*(cos(x_max)));
            //printf("%lf\n%lf", x_max, y_max);
            cc=1;
            break;
        }
    }
    printf("%f\n%f", x_max, y_max);
}
