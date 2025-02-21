#include <stdio.h> //soma dos elementos da linha 5 com a coluna 3 de uma matriz 7x6

int func_soma();

void main(){
	int matriz[7][6];
	
	for (int i = 0; i < 7; i++){
		for (int j = 0; j < 6; j++){
			scanf("%d", &matriz[i][j]);
		}
	}
	
	int resultado = func_soma(matriz);
	
	printf("%d", resultado);
}

int func_soma(int matriz[7][6]){
	int valor1 = 0, valor2 = 0;
	
	for (int i = 0; i < 6; i++)
		valor1 += matriz[4][i];
		
	for (int i = 0; i < 7; i++)
		valor2 += matriz[i][2];
		
	return ((valor1 + valor2) - matriz[4][2]);
}