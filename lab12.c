#include <stdio.h>
#include <stdlib.h>
fun10(int arr[10][10], int, int ,int, int, int , int, int);
fun9(int arr[10][10], int, int ,int, int, int , int, int);
fun8(int arr[10][10], int, int ,int, int, int , int, int);
fun7(int arr[10][10], int, int ,int, int, int , int, int);
fun6(int arr[10][10], int, int ,int, int, int , int, int);
fun5(int arr[10][10], int, int ,int, int, int , int, int);
fun4(int arr[10][10], int, int ,int, int, int , int, int);
fun3(int arr[10][10], int, int ,int, int, int , int);
fun2(int arr[10][10], int, int ,int, int, int , int);
fun(int arr[10][10], int, int ,int, int);
int main()
{
    int tow_d_array[10][10];
    int index;
    scanf("%i", &index);
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            tow_d_array[i][j] = index;
        }
    }
    for (int i = 9; i >= 0; i--){
        int number;
        number = tow_d_array[9][i];
        int poz1 = 9;
        int poz2 = i;
        int result = fun(tow_d_array, number, poz1, poz2, index);
        tow_d_array[9][i] = result;
    }
    /////2
    for (int i = 9; i >= 0; i--){
        int one = tow_d_array[9][9];
        int tow = tow_d_array[9][3];
        int number;
        number = tow_d_array[8][i];
        int poz1 = 8;
        int poz2 = i;
        int result = fun2(tow_d_array, number, poz1, poz2, index, one, tow);
        tow_d_array[8][i] = result;
    }
    ////////////3
    for (int i = 9; i >= 0; i--){
        int one = tow_d_array[8][9];
        int tow = tow_d_array[8][4];
        int number;
        number = tow_d_array[7][i];
        int poz1 = 7;
        int poz2 = i;
        int result = fun3(tow_d_array, number, poz1, poz2, index, one, tow);
        tow_d_array[7][i] = result;
    }
    ////////3
    for (int i = 9; i >= 0; i--){
        int one = tow_d_array[7][0];
        int tow = tow_d_array[7][1];
        int three = tow_d_array[7][2];
        int number;
        number = tow_d_array[6][i];
        int poz1 = 6;
        int poz2 = i;
        int result = fun4(tow_d_array, number, poz1, poz2, index, one, tow, three);
        tow_d_array[6][i] = result;
    }
    ////////
    for (int i = 9; i >= 0; i--){
        int one = tow_d_array[6][0];
        int tow = tow_d_array[6][1];
        int three = tow_d_array[6][2];
        int number;
        number = tow_d_array[5][i];
        int poz1 = 5;
        int poz2 = i;
        int result = fun5(tow_d_array, number, poz1, poz2, index, one, tow, three);
        tow_d_array[5][i] = result;
    }
     ////////
    for (int i = 9; i >= 0; i--){
        int one = tow_d_array[5][0];
        int tow = tow_d_array[5][1];
        int three = tow_d_array[5][2];
        int number;
        number = tow_d_array[4][i];
        int poz1 = 4;
        int poz2 = i;
        int result = fun6(tow_d_array, number, poz1, poz2, index, one, tow, three);
        tow_d_array[4][i] = result;
    }
    ////////6
    for (int i = 9; i >= 0; i--){
        int one = tow_d_array[4][0];
        int tow = tow_d_array[4][1];
        int three = tow_d_array[4][2];
        int number;
        number = tow_d_array[3][i];
        int poz1 = 3;
        int poz2 = i;
        int result = fun7(tow_d_array, number, poz1, poz2, index, one, tow, three);
        tow_d_array[3][i] = result;
    }
     ////////8
    for (int i = 9; i >= 0; i--){
        int one = tow_d_array[3][0];
        int tow = tow_d_array[3][1];
        int three = tow_d_array[3][2];
        int number;
        number = tow_d_array[2][i];
        int poz1 = 2;
        int poz2 = i;
        int result = fun8(tow_d_array, number, poz1, poz2, index, one, tow, three);
        tow_d_array[2][i] = result;
    }
    ////9
    for (int i = 9; i >= 0; i--){
        int one = tow_d_array[2][0];
        int tow = tow_d_array[2][1];
        int three = tow_d_array[2][2];
        int number;
        number = tow_d_array[1][i];
        int poz1 = 1;
        int poz2 = i;
        int result = fun9(tow_d_array, number, poz1, poz2, index, one, tow, three);
        tow_d_array[1][i] = result;
    }
    /////////10
    for (int i = 9; i >= 0; i--){
        int one = tow_d_array[1][0];
        int tow = tow_d_array[1][1];
        int three = tow_d_array[1][2];
        int number;
        number = tow_d_array[0][i];
        int poz1 = 0;
        int poz2 = i;
        int result = fun10(tow_d_array, number, poz1, poz2, index, one, tow, three);
        tow_d_array[0][i] = result;
    }
    ///>>>>>
    int tota=0;
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){

        }

    }
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            tota+=tow_d_array[i][j];
        }
    }
    printf("%i", tota);
    return 0;
}
/////1
int fun(int arr[10][10], int num, int poz1, int poz2,int index){
    int sonuc;
    if (poz1 == 9){
        if (poz2 == 9){
            sonuc = (4 * index) / 9;
        }
        else if (poz2 == 8){
            sonuc = ((6 * index) / 9) + 1;
        }
        else if (poz2 == 7){
            sonuc = ((6 * index) / 9) + 1;
        }
        else if (poz2 == 6){
            sonuc = ((6 * index) / 9) + 1;
        }
        else if (poz2 == 5){
            sonuc = ((6 * index) / 9) + 1;
        }
        else if (poz2 == 4){
            sonuc = ((6 * index) / 9) + 1;
        }
        else if (poz2 == 3){
            sonuc = ((6 * index) / 9) + 1;
        }
        else if (poz2 == 2){
            sonuc = ((6 * index) / 9) + 1;
        }
        else if (poz2 == 1){
            sonuc = ((6 * index) / 9) + 1;
        }
        else if (poz2 == 0){
            sonuc = (4 * index) / 9;
        }
    }
    return sonuc;
}
/////
int fun2(int arr[10][10], int num, int poz1, int poz2,int index, int one, int tow){
    int sonuc;
    if (poz1 == 8){
        if (poz2 == 9){
            sonuc = ((4 * index) + one + tow) / 9;
        }
        else if (poz2 == 8){
            sonuc = ((6 * index) + (tow * 2) + one) / 9;
        }
        else if (poz2 == 7){
            sonuc = ((6 * index) + (tow * 3)) / 9;
        }
        else if (poz2 == 6){
            sonuc = ((6 * index) + (tow * 3)) / 9;
        }
        else if (poz2 == 5){
            sonuc = ((6 * index) + (tow * 3)) / 9;
        }
        else if (poz2 == 4){
            sonuc = ((6 * index) + (tow * 3)) / 9;
        }
        else if (poz2 == 3){
            sonuc = ((6 * index) + (tow * 3)) / 9;
        }
        else if (poz2 == 2){
            sonuc = ((6 * index) + (tow * 3)) / 9;
        }
        else if (poz2 == 1){
            sonuc = ((6 * index) + (tow * 2) + one) / 9;
        }
        else if (poz2 == 0){
            sonuc = ((4 * index) + one + tow) / 9;
        }
    }
    return sonuc;
}
////////
int fun3(int arr[10][10], int num, int poz1, int poz2,int index, int one, int tow){
    int sonuc;
    if (poz1 == 7){
        if (poz2 == 9){
            sonuc = ((4 * index) + one + tow) / 9;
        }
        else if (poz2 == 8){
            sonuc = ((6 * index) + (tow * 2) + one) / 9;
        }
        else if (poz2 == 7){
            sonuc = ((6 * index) + (tow * 3)) / 9;
        }
        else if (poz2 == 6){
            sonuc = ((6 * index) + (tow * 3)) / 9;
        }
        else if (poz2 == 5){
            sonuc = ((6 * index) + (tow * 3)) / 9;
        }
        else if (poz2 == 4){
            sonuc = ((6 * index) + (tow * 3)) / 9;
        }
        else if (poz2 == 3){
            sonuc = ((6 * index) + (tow * 3)) / 9;
        }
        else if (poz2 == 2){
            sonuc = ((6 * index) + (tow * 3)) / 9;
        }
        else if (poz2 == 1){
            sonuc = ((6 * index) + (tow * 2) + one) / 9;
        }
        else if (poz2 == 0){
            sonuc = ((4 * index) + one + tow) / 9;
        }
    }
    return sonuc;
}
////////////
int fun4(int arr[10][10], int num, int poz1, int poz2,int index, int one, int tow, int three){
    int sonuc;
    if (poz1 == 6){
        if (poz2 == 9){
            sonuc = ((4 * index) + one + tow) / 9;
        }
        else if (poz2 == 8){
            sonuc = ((6 * index) + tow + one + three) / 9+1;
        }
        else if (poz2 == 7){
            sonuc = ((6 * index) + tow +  (three * 2)) / 9+1;
        }
        else if (poz2 == 6){
             sonuc = ((6 * index) + tow +  (three * 2)) / 9+1;
        }
        else if (poz2 == 5){
             sonuc = ((6 * index) + tow +  (three * 2)) / 9+1;
        }
        else if (poz2 == 4){
             sonuc = ((6 * index) + tow +  (three * 2)) / 9+1;
        }
        else if (poz2 == 3){
             sonuc = ((6 * index) + tow +  (three * 2)) / 9+1;
        }
        else if (poz2 == 2){
             sonuc = ((6 * index) + tow +  (three * 2)) / 9+1;
        }
        else if (poz2 == 1){
             sonuc = ((6 * index) + tow + one + three) / 9 +1;
        }
        else if (poz2 == 0){
             sonuc = ((4 * index) + one + tow) / 9;
        }
    }
    return sonuc;
}
//////
int fun5(int arr[10][10], int num, int poz1, int poz2,int index, int one, int tow, int three){
    int sonuc;
    if (poz1 == 5){
        if (poz2 == 9){
            sonuc = ((4 * index) + one + tow) / 9;
        }
        else if (poz2 == 8){
            sonuc = ((6 * index) + tow + one + three) / 9 +1;
        }
        else if (poz2 == 7){
            sonuc = ((6 * index) + tow +  (three * 2)) / 9+1;
        }
        else if (poz2 == 6){
             sonuc = ((6 * index) + tow +  (three * 2)) / 9+1;
        }
        else if (poz2 == 5){
             sonuc = ((6 * index) + tow +  (three * 2)) / 9+1;
        }
        else if (poz2 == 4){
             sonuc = ((6 * index) + tow +  (three * 2)) / 9+1;
        }
        else if (poz2 == 3){
             sonuc = ((6 * index) + tow +  (three * 2)) / 9+1;
        }
        else if (poz2 == 2){
             sonuc = ((6 * index) + tow +  (three * 2)) / 9+1;
        }
        else if (poz2 == 1){
             sonuc = ((6 * index) + tow + one + three) / 9 +1;
        }
        else if (poz2 == 0){
             sonuc = ((4 * index) + one + tow) / 9;
        }
    }
    return sonuc;
}
//////
int fun7(int arr[10][10], int num, int poz1, int poz2,int index, int one, int tow, int three){
    int sonuc;
    if (poz1 == 3){
        if (poz2 == 9){
            sonuc = ((4 * index) + one + tow) / 9;
        }
        else if (poz2 == 8){
            sonuc = ((6 * index) + tow + one + three) / 9 +1;
        }
        else if (poz2 == 7){
            sonuc = ((6 * index) + tow +  (three * 2)) / 9+1;
        }
        else if (poz2 == 6){
             sonuc = ((6 * index) + tow +  (three * 2)) / 9+1;
        }
        else if (poz2 == 5){
             sonuc = ((6 * index) + tow +  (three * 2)) / 9+1;
        }
        else if (poz2 == 4){
             sonuc = ((6 * index) + tow +  (three * 2)) / 9+1;
        }
        else if (poz2 == 3){
             sonuc = ((6 * index) + tow +  (three * 2)) / 9+1;
        }
        else if (poz2 == 2){
             sonuc = ((6 * index) + tow +  (three * 2)) / 9+1;
        }
        else if (poz2 == 1){
             sonuc = ((6 * index) + tow + one + three) / 9 +1;
        }
        else if (poz2 == 0){
             sonuc = ((4 * index) + one + tow) / 9;
        }
    }
    return sonuc;
}
//////
int fun8(int arr[10][10], int num, int poz1, int poz2,int index, int one, int tow, int three){
    int sonuc;
    if (poz1 == 2){
        if (poz2 == 9){
            sonuc = ((4 * index) + one + tow) / 9;
        }
        else if (poz2 == 8){
            sonuc = ((6 * index) + tow + one + three) / 9 +1;
        }
        else if (poz2 == 7){
            sonuc = ((6 * index) + tow +  (three * 2)) / 9+1;
        }
        else if (poz2 == 6){
             sonuc = ((6 * index) + tow +  (three * 2)) / 9+1;
        }
        else if (poz2 == 5){
             sonuc = ((6 * index) + tow +  (three * 2)) / 9+1;
        }
        else if (poz2 == 4){
             sonuc = ((6 * index) + tow +  (three * 2)) / 9+1;
        }
        else if (poz2 == 3){
             sonuc = ((6 * index) + tow +  (three * 2)) / 9+1;
        }
        else if (poz2 == 2){
             sonuc = ((6 * index) + tow +  (three * 2)) / 9+1;
        }
        else if (poz2 == 1){
             sonuc = ((6 * index) + tow + one + three) / 9 +1;
        }
        else if (poz2 == 0){
             sonuc = ((4 * index) + one + tow) / 9;
        }
    }
    return sonuc;
}
/////
int fun6(int arr[10][10], int num, int poz1, int poz2,int index, int one, int tow, int three){
    int sonuc;
    if (poz1 == 4){
        if (poz2 == 9){
            sonuc = ((4 * index) + one + tow) / 9;
        }
        else if (poz2 == 8){
            sonuc = ((6 * index) + tow + one + three) / 9+1;
        }
        else if (poz2 == 7){
            sonuc = ((6 * index) + tow +  (three * 2)) / 9+1;
        }
        else if (poz2 == 6){
             sonuc = ((6 * index) + tow +  (three * 2)) / 9+1;
        }
        else if (poz2 == 5){
             sonuc = ((6 * index) + tow +  (three * 2)) / 9+1;
        }
        else if (poz2 == 4){
             sonuc = ((6 * index) + tow +  (three * 2)) / 9+1;
        }
        else if (poz2 == 3){
             sonuc = ((6 * index) + tow +  (three * 2)) / 9+1;
        }
        else if (poz2 == 2){
             sonuc = ((6 * index) + tow +  (three * 2)) / 9+1;
        }
        else if (poz2 == 1){
             sonuc = ((6 * index) + tow + one + three) / 9 +1;
        }
        else if (poz2 == 0){
             sonuc = ((4 * index) + one + tow) / 9;
        }
    }
    return sonuc;
}
////////////9
int fun9(int arr[10][10], int num, int poz1, int poz2,int index, int one, int tow, int three){
    int sonuc;
    if (poz1 == 1){
        if (poz2 == 9){
            sonuc = ((4 * index) + one + tow) / 9;
        }
        else if (poz2 == 8){
            sonuc = ((6 * index) + tow + one + three) / 9+1;
        }
        else if (poz2 == 7){
            sonuc = ((6 * index) + tow +  (three * 2)) / 9+1;
        }
        else if (poz2 == 6){
             sonuc = ((6 * index) + tow +  (three * 2)) / 9+1;
        }
        else if (poz2 == 5){
             sonuc = ((6 * index) + tow +  (three * 2)) / 9+1;
        }
        else if (poz2 == 4){
             sonuc = ((6 * index) + tow +  (three * 2)) / 9+1;
        }
        else if (poz2 == 3){
             sonuc = ((6 * index) + tow +  (three * 2)) / 9+1;
        }
        else if (poz2 == 2){
             sonuc = ((6 * index) + tow +  (three * 2)) / 9+1;
        }
        else if (poz2 == 1){
             sonuc = ((6 * index) + tow + one + three) / 9 +1;
        }
        else if (poz2 == 0){
             sonuc = ((4 * index) + one + tow) / 9;
        }
    }
    return sonuc;
}
//////////////10
int fun10(int arr[10][10], int num, int poz1, int poz2,int index, int one, int tow, int three){
    int sonuc;
    if (poz1 == 0){
        if (poz2 == 9){
            sonuc = ((3 * index) + one + tow + three) / 9;
        }
        else if (poz2 == 8){
            sonuc = ((6 * index) + tow + one + three) / 9+1;
        }
        else if (poz2 == 7){
            sonuc = ((6 * index) + tow +  (three * 2)) / 9+1;
        }
        else if (poz2 == 6){
             sonuc = ((6 * index) + tow +  (three * 2)) / 9+1;
        }
        else if (poz2 == 5){
             sonuc = ((6 * index) + tow +  (three * 2)) / 9+1;
        }
        else if (poz2 == 4){
             sonuc = ((6 * index) + tow +  (three * 2)) / 9+1;
        }
        else if (poz2 == 3){
             sonuc = ((6 * index) + tow +  (three * 2)) / 9+1;
        }
        else if (poz2 == 2){
             sonuc = ((6 * index) + tow +  (three * 2)) / 9+1;
        }
        else if (poz2 == 1){
             sonuc = ((6 * index) + tow + one + three) / 9+1 ;
        }
        else if (poz2 == 0){
             sonuc = ((3 * index) + one + tow + three) / 9;
        }
    }
    return sonuc;
}
