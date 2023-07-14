#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int count2 = 0;
int count = 0;
int fun0(int, int, int, int, int, int, int, int, int array[5][5]);
int main()
{
    int array_5[5][5];
    for (int i = 0 ; i < 5; i++){
        for (int j = 0 ; j < 5; j++){
            scanf("%i", &array_5[i][j]);
        }
    }
    int array_2[2][2];
    for (int i = 0 ; i < 2; i++){
        for (int j = 0 ; j < 2; j++){
            scanf("%i", &array_2[i][j]);
        }
    }
    //int array_4[4][4];
    //int count_1 = 0;
    //int count_2 = 0;
    for (int i = 0 ; i < 4; i++){
        for (int j = 0 ; j < 4; j++){
            int one = array_5[i][j];
            int tow = array_5[i][j + 1];
            int thr = array_5[i + 1][j];
            int fou = array_5[i + 1][j + 1];
            int bir = array_2[0][0];
            int iki = array_2[0][1];
            int ucc = array_2[1][0];
            int dor = array_2[1][1];
            fun0(one, tow, thr, fou, bir, iki, ucc, dor, array_5);
            count++;
            //int result = fun0(one, tow, thr, fou, bir, iki, ucc, dor, array_5);
            //printf("%i ", result);
            //array_2[count_1][count_2] = result;
            //count_1++;
        }
        //count_2++;
        count2++;
        printf("\n");
    }
    /*
    for (int i = 0 ; i < 4; i++){
        for (int j = 0 ; j < 4; j++){
            scanf("%i ", array_4[i][j]);
        }
        printf("\n");
    }
    */
    return 0;
}
int fun0(int one, int tow, int the, int fou, int bir, int iki, int ucc, int dor, int array[][5]){
    int sum = 0;
    int array_4[4][4];
    sum = ((one * bir) + (tow * iki) + (the * ucc) + (fou * dor));
    int c = 0, c1= 0;
    array_4[c][c1] = sum;
    c++;

    printf("%i ", sum);


    //printf("\n%i <>  %i\n", count, count2);
    if (count > 15){
        for (int i = 0 ; i < 4; i++){
            for (int j = 0 ; j < 4; j++){
                printf("%i ", array_4[i][j]);
            }
            printf("\n");
        }
    }

    //return sum;

}
