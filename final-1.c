#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char fun(char string[10][15]);
int main()
{
    char string[10][15];
    for (int i = 0; i < 10; i++){
        scanf("%s", &string[i]);
    }
    ///
    fun(string);

    /*
    for (int i = 0; i < 10; i++){
        int size = strlen(string[i]);
        for (int j = 0; j < 15; j++){
            if (string[i][j] != '\0'){
                int count = 0;
                //for (int k = j; k < size; k++){
                if (string[i][j] != string[i][k]){
                    printf("%c", );
                }
                //if (string[i][j] != string[i][j + 1]){
                //    printf("%c", string[i][j]);
                //}
            }
            else{
                break;
            }

        }
        printf("\n");
    }
    */

    return 0;
}
char fun(char string[10][15]){

    for (int i = 0; i < 10; i++){
            char string_4[15];
            int f = 0;
                for (int j = 0; j < 10; j++){
                    string_4[f] = string[i][j];
                    f++;
                }
                for (int w = 0; w < 15; w++){
                    for (int o = w + 1; string_4[o] != '\0'; o++){
                            if (string_4[w] == string_4[o]){
                                for (int r = 0; string_4[r] != '\0'; r++){
                                    string_4[r] = string_4[r + 1];
                                }
                            }
                    }
                }
                printf("%s\n", string_4);
        }
}
