#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float mirror(int ,float);
int main()
{
    int number;
    float num_x;
    scanf("%i%f", &number, &num_x);
    mirror(number, num_x);
    return 0;
}
float d=1.0;
float mirror(int n, float x){
    if (n<=2){
        printf("%.2f", d);
    }
    else {
        d=((((2.0*n)-1)/n)*x)-((n-1/n));
        n--;
        return d * mirror(n, x);
    }
}
