#include <stdio.h>
#include <stdlib.h>

int fun11(int, int);
int fun22(int, int);
int fun3(int);

int main()
{
    int number, power;
    scanf("%i%i", &number, &power);
    int result_1=fun11(number, power);
    int divi=fun22(result_1, number);
    int fun3(number);
    printf("%i", divi);
    return 0;
}
int fun11(int num, int p){
    int topla=0;
    int re=0;
    while (num!=0){
        int rem=num%10;
         re= (re*10)+rem;
        num/=10;
    }
    int count=0;
    int powwwww=1;
    while (re!=0){
        int reminder=re%10;
        while (count<p){
            powwwww*=reminder;
            count++;
        }
        topla+=powwwww;
        powwwww=1;
        reminder=0;
        re/=10;
        p++;
        count=0;
    }
    return topla;
}
int fun22(int result, int n){
    int ooo=result/n;
    return ooo;
}
int fun3(int nu){
    int count=0;
    while (nu!=0){
        nu/=10;
        count++;
    }
}
