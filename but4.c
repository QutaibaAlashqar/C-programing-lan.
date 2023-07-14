#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int function_1(int numbers[8],int index[3]);
int main(){
	int numbers[8], index[3];
	for(int i = 0; i < 8; i++){
        scanf("%i", &numbers[i]);
  	}
  	for(int i = 0; i < 3; i++){
        scanf("%i", &index[i]);
  	}
	function_1(numbers, index);
    return 0;
}
int function_1(int numbers[8], int index[3]){
	int count = 0;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 8; j++){
			if(numbers[j] == index[i]){
				count++;
				continue;
			}
		}
	}
	if(count == 3){
		printf("True");
	}
	else{
		printf("False");
	}
}
