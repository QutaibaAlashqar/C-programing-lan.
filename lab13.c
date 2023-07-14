#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int fun0(int array[10][10], int, int);
int main()
{
    int array_2[10][10];
    for (int i = 0 ; i < 10; i++){
        for (int j = 0 ; j < 10; j++){
            scanf("%i", &array_2[i][j]);
        }
    }
    int index;
    int staticc = index;
    int arr[10];
    arr[0] = staticc;
    int counr2 = 1;
    scanf("%i", &index);
    printf("%i ", index);
    for (int i = 0 ; i < 9; i++){
        int result = fun0(array_2, index - 1, staticc);
        arr[counr2] = result;
        counr2++;
        int count = counr2;
        int flag = 1;
        while (count >= 0){
            if (result != arr[count]){
                flag = -1;
            }
            count--;
        }
        if (flag == -1){
            index = result;
        }
        else{
            index = result + 1;
        }
    }


    return 0;
}
int fun0(int array[10][10], int index, int staticc){
    int minn = 999999;
    int pozzz = 0;
    for (int i = 0; i < 10; i++){
        if ((minn > array[index][i]) && (array[index][i] != 0)){
            minn = array[index][i];
            pozzz = i;
        }
    }
    int count = 1;
    int newarray[10];
    newarray [0] = staticc;
    newarray[count] = pozzz;
    count++;
    printf("%i ", pozzz + 1);
    return pozzz + 1;

}
