#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void bubblesort(int number[], int,int,int);
int main()
{
    int size;
    scanf("%i", &size);
    int number[size];
    for (int i = 0; i < size; i++){
        scanf("%i", &number[i]);
    }
    int min=99999;
    int max = 0;
    for (int i = 0; i < size; i++){
        if (min > number[i]){
            min = number[i];
        }
    }
    for (int i = 0; i < size; i++){
        if (max < number[i]){
            max = number[i];
        }
    }
    bubblesort(number, size, min, max);
    return 0;
}
void bubblesort(int number[], int size, int min, int max){
    for (int i = 1; i < size; i++){
        for (int j = 0; j < size - 1; j++){
            if (number[j] > number[j + 1]){
                int hold  = number[j];
                number[j] = number[j + 1];
                number[j + 1] = hold;
            }
        }
    }
    int count = 1;
    int result;
    for (int i = 0; i < size; i++){
        if (count != number[i]){
            result = count;
            break;
        }
        count+=1;
    }
    printf("%i", result);
}




