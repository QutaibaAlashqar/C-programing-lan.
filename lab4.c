#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,b,c;
    scanf("%i%i%i", &a, &b, &c);
    double dalta, kok1=0.0, kok2=0.0;
    dalta=((b*b)-(4*a*c));
    if (dalta > 0){
        kok1=(((-b)+(sqrt(dalta)))/(2*a));
        kok2=(((-b)-(sqrt(dalta)))/(2*a));
        printf("%.3f \n%.3f", kok1, kok2);
    }
    else if (dalta==0){
        kok1=(((-b)+(sqrt(dalta)))/(2*a));
        kok2=(((-b)-(sqrt(dalta)))/(2*a));
        printf("%.3f \n%.3f", kok1, kok2);

    }
    else if (dalta<0){
    }


    return 0;
}
