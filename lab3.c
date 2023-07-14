#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    scanf("%i", &x);
    int count=1,toplam=0, top=0;
    while (count<=x){
        toplam=count*count+1;
        top+=toplam;
        toplam=0;
        count++;
    }
    printf("%i",top);




    return 0;
}
