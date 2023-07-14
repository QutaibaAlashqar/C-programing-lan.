#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void function_1(int number[5][5],int index[]);
int main()
{
    int number[5][5];
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            scanf("%i", &number[i][j]);
        }
    }
    int index[5];
    for (int i = 0; i < 5; i++){
        scanf("%i", &index[i]);
    function_1(number, index);
    return 0;
    }
}
void function_1(int number[5][5], int index[]){
    int result[5];
    int count= 0;
    int j = 0;
    for (int ii= 0; ii < 5; ii++){
        int res = 0;
        int count_2= 0;
        int ddd= 0;
        for (int i = 0; i < 5; i++){
            ddd = index[count_2];
            res += ((number[i][j]) * ddd);
            count_2++;
        }
        result[count] = res;
        count++;
        j++;
    }
    for (int k = 0; k < 5; k++){
        printf("%i ", result[k]);
    }
    int max = 0;
    int poss = 0;
    for (int i = 0; i < 5; i++){
        if (result[i] > max){
            max = result[i];
            poss = i;
        }
    }
    printf("\n%i", poss + 1);
}

