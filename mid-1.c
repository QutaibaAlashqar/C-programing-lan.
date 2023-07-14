#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double fun(double , double , int);
int main()
{
    double mony, yil;
    int yontem;
    scanf("%lf%lf%i", &mony, &yil, &yontem);
    fun(mony, yil, yontem);

    return 0;
}
double fun(double m, double y, int yontem){
    double rem;
    int count=1;
    int yer=y;
    double s=(2/y);
    switch (yontem){
        case 1:
            rem=m/y;
            while (count<=10){
                m-=rem;
                printf("%2d yil sonunda ", count);
                printf("deger kaybi : %7.2f ", rem);
                printf("Kalan para : %8.2f\n", m);
                count++;

            }
        case 2:
            while (count<=10){
                double k=m*s;
                m=m-k;
                printf("%2d yil sonunda ", count);
                printf("deger kaybi : %7.2f ", k);
                printf("Kalan para : %8.2f\n", m);
                count++;
            }
        case 3:

        default:
            printf("");
    }
}
