#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fun(int array[]);
int fun2(int numbers[], int);
int main()
{
    int array[10];
    for (int i = 0; i < 10; i++){
        scanf("%i", &array[i]);
    }
    fun(array);



    return 0;
}
int fun(int array[]){
    int count = 0;
    int numbers[count];
    for (int i = 0; i < 10; i++){
        int number = array[i];
        if (i > 0 && i < 9){
            if (number > array[i + 1] && number > array[i - 1]){
                numbers[count] = number;
                count++;
            }
        }
    }
    /*
    for (int i = 0; i < count; i++){
        printf("%i ", numbers[i]);
    }
    */
    if (count != 0){

        for(int i = 0; i < count; i++){
            printf("%i ", numbers[i]);
        }
    }
    else{
        printf("YOK");
    }
}
int fun2(int numbers[], int count){
    /*
    for (int i = 0; i < count; i++){
            for (int j = 0; j < count - 1; j++){
                if (numbers[j] > numbers[j + 1]){
                    int hg = numbers[j];
                    numbers[j] = numbers[j + 1];
                    numbers[j + 1] = hg;
                }
            }
        }
        */

}
