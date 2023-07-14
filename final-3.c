#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int distance(int n1, int n2);
int main(){
    int n1, n2;
    scanf("%i%i", &n1, &n2);
    int resukt = distance(n1, n2)
    printf("%i\n", resukt);
    return 0;
}
int fun1(int n1,int n2){
    int reslut=0;
    int size = n1;
    int count=0;
    while (size>0){
        size = size / 10;
        count++;
    }
    int number = 0;
    int array_1[count];
    int array_2[count];
    while (n1 > 0){
        int sed=n1 % 10;
        int des=n2 % 10;
        array_1[number]=sed;
        array_2[number]=des;
        number++;
        n1 = n1 / 10;
        n2= n2 / 10;
    }
    for(int i=0; i<count; i++){
        int num=array_1[i] - array_2[i];
        if (num < 0){
            num =-1*num;
            reslut += num;
        }
        else
            reslut += num;
    }
    return reslut;
}

