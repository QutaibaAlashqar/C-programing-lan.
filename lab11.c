#include <stdio.h>
#include <stdlib.h>


int main()
{
    int number, size = 0;
    int numbers[20] = {0};
    scanf("%i", &number);
    numbers[size] = number;
    size++;
    int flag;
    while (flag = getchar() != '\n'){
        scanf("%i", &number);
        numbers[size] = number;
        size++;
    }
    int index;
    int f = 0;
    scanf("%i", &index);
    for (int i = 0; i < size; i++){
        for (int j = i + 1; j < size; j++){
            if (numbers[i] == index && f == 0){
                printf("%i\n", numbers[i]);
                f = 1;
            }
            else if((numbers[i] + numbers[j]) == index){
                printf("%i,%i\n", numbers[i], numbers[j]);
                f = 1;

            }
            else if((numbers[i] + numbers[j] + numbers[j + 1]) == index){
                printf("%i,%i,%i\n", numbers[i], numbers[j], numbers[j + 1]);
                f = 1;
            }
            else if((numbers[i] + numbers[j] + numbers[j + 1] + numbers[j + 2]) == index){
                printf("%i,%i,%i,%i\n", numbers[i], numbers[j], numbers[j + 1], numbers[j+2]);
                f = 1;
            }
            else if((numbers[i] + numbers[j] + numbers[j + 1] + numbers[j + 2] + numbers [j + 3]) == index){
                printf("%i,%i,%i,%i,%i\n", numbers[i], numbers[j], numbers[j + 1], numbers[j+2], numbers[j+3]);
                f = 1;
            }
            else if((numbers[i] + numbers[j] + numbers[j + 1] + numbers[j + 2] + numbers [j + 3] + numbers[j + 4]) == index){
                printf("%i,%i,%i,%i,%i,%i\n", numbers[i], numbers[j], numbers[j + 1], numbers[j+2], numbers[j+3]);
                f = 1;
            }

        }
    }
    if (f != 1){
        printf("YOK\n");
    }
    return 0;
}
