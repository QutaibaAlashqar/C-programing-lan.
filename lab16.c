#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int size;
void fun0(int number[size][size], int index1, int index2, int retot);
int main()
{
    int index1;
    int index2;
    int retot;
    scanf("%i%i%i", &index1, &index2, &retot);
    int number[index1][index2];
    size = index1;
    if (index1 != index2){
        printf("0");
    }
    else{
        for (int i = 0;i < index1; i++){
            for (int j = 0; j < index2; j++){
                scanf("%i", &number[i][j]);
            }
        }
        fun0(number, index1, index2, retot);
    }
    return 0;
}
void fun0(int number[size][size], int index1, int index2, int retot){
    int res = 0;
    int flag = 1;
    for (int i = 0;i < index1; i++){
        res += number[0][i];
    }
    for (int i = 0;i < index1; i++){
        int res2 = 0;
        for (int j = 0; j < index1; j++){
            res2 += number[i][j];
        }
        if (res2 != res){
            flag = 0;
            break;
        }
    }
    int col = 0;
    for (int i = 0; i < index1; i++){
        int res2 = 0;
        for (int j = 0; j < index1; j++){
            res2 += number[j][col];
        }
        if (res2 != res){
            flag = 0;
            break;
        }
        col++;
    }

    int res3 = 0;
    int row3 = 0;
    for (int i = 0; i < index1; i++){
        res3 += number[row3][row3];
        row3++;
    }
    if (res != res3){
        flag = 0;
    }


    int res4 = 0;
    int row4 = index1 - 1;
    for (int i = 0; i < index1; i++){
        res4 += number[i][row4];
        row4--;
    }
    if (res != res4){
        flag = 0;
    }


    if (flag == 1){
        printf("1\n");
    }
    else{
        printf("0\n");
    }


    int num[index2][index2];
    for (int i = 0; i < index2; i++){
        for (int j = 0; j < index2; j++){
            num[i][j] = number[i + retot][j + retot];
        }
    }
    for (int i = 0; i < index2; i++){
        for (int j = 0; j < index2; j++){
            printf("%i ", num[i][j]);
        }
        printf("\n");
    }
}
