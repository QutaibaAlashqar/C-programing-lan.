#include <stdio.h>
#include <stdlib.h>
#include <math.h>

char function_2(char ch1, char ch2);
char function_1(char string[50], char index[5]);
int main()
{
    char string[50];
    scanf("%s", &string);
    char index[5];
    scanf("%s", &index);

    function_1(string, index);

    return 0;
}
char function_1(char string[50], char index[5]){
    for (int i = 0; i < 50; i++){
        if (string[i] == '\0'){
            break;
        }
        else{
            int count = 0;
            for (int j = 0; j < 3; j++){
                if (string[i] == index[j]){
                    char ch1 = string[i];
                    char ch2 = index[j];
                    function_2(ch1, ch2);
                    break;
                }
                else{
                    printf("%c", string[i]);
                    break;
                }
                count++;
            }
        }
    }
}
char function_2(char ch1, char ch2){
    if ((int)ch1 == 65){
        printf("Z");
    }
    else if ((int)ch1 == 66){
        printf("Y");
    }
    else if ((int)ch1 == 67){
        printf("X");
    }
    else if ((int)ch1 == 68){
        printf("W");
    }
    else if ((int)ch1 == 69){
        printf("V");
    }
    else if ((int)ch1 == 70){
        printf("U");
    }
    else if ((int)ch1 == 71){
        printf("T");
    }
    else if ((int)ch1 == 72){
        printf("S");
    }
    else if ((int)ch1 == 73){
        printf("R");
    }
    else if ((int)ch1 == 74){
        printf("Q");
    }
    else if ((int)ch1 == 75){
        printf("P");
    }
}
