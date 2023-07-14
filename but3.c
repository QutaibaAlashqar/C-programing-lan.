#include<stdio.h>

int en_cok(int A[5][5],int B[5]);

int main(){

	int A[5][5],B[5],enbuyuk;

	for (int i=0; i<5; i++){
    		for (int j=0; j<5;j++){
      			scanf("%d", &A[i][j]);
    		}
	}

	for(int i=0; i<5; i++) {
     		scanf("%d", &B[i]);
  	}

	enbuyuk=en_cok(A,B);

	printf("%d\n",enbuyuk);

}

int en_cok(int A[5][5],int B[5]){

	int C[5];
	int k=0,a;

	for(int i=0;i<5;i++){
		C[i]=(A[0][i]*B[0])+(A[1][i]*B[1])+(A[2][i]*B[2])+(A[3][i]*B[3])+(A[4][i]*B[4]);
	}

	for(int i=0;i<5;i++){
		if(C[i]>k){
			k=C[i];
			a=i+1;
		}
	}

	return a;

}
