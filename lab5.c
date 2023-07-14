#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int number;
    int result;
    scanf("%u", &number);
    int original_number=number;
    while(number>0){
        int number2=number%10;
        result=(result*10)+(number2);
        number/=10;
        number2=0;
    }
    if (result==original_number){
        printf("1\n");
    }
    else{
        printf("0\n");
    }
    return 0;
}
