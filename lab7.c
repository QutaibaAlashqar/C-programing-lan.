#include <stdio.h>
#include <stdlib.h>

int main()
{
    int counter=10, count=1, number, max=0, palce2, max2=0, palce;

    do {
        scanf("%i", &number);
        if (number>max){
            max=number;
            palce=count;
        }
        else if (number>max2 && number!=max){
            max2=number;
            palce2=count;
    }
        count++;
    }while (count<=counter);
    printf("%i %i", palce, palce2);
    return 0;
}
