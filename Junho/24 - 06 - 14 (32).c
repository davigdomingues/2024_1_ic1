#include <stdio.h>

void matriz_final();

void main(){
	int A[4][6], B[6][4], C[4][4]; //C = AxB.
	
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 6; j++)
			scanf("%d", &A[i][j]);
	}
	
	for (int i = 0; i < 6; i++){
		for (int j = 0; j < 4; j++)
			scanf("%d", &B[i][j]);
	}
	
	matriz_final(A, B, C);
	
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 4; j++)
			printf("%d ", C[i][j]);
		printf("\n");
	}
}

void matriz_final(int A[4][6], int B[6][4], int C[4][4]){
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 4; j++){
			for (int k = 0; k < 6; k++)
				C[i][j] += A[i][k] + B[k][j];
		}
	}
}