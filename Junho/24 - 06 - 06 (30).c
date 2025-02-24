#include <stdio.h>
#include <stdlib.h>

/* Codigo alternativo:
int func_soma_elementos_matriz(int **pmatrix, int n){
    int resultado = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++)
            resultado += pmatrix[i][j];
        }

return resultado;
}

int main(){
    int n;

    printf("Quantas linhas deseja que a sua matriz tenha? ");
    scanf("%d", &n);

    int **matriz;
    matriz = (int**)malloc(sizeof(int*)*n); // alocação dinamica para linhas
    for (int i = 0; i < n; i++) // alocação dinamica para colunas
        matriz[i] = (int*)malloc(sizeof(int)*n);

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("Valor da linha %d, coluna %d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
        printf("\n");
    }

    int resultado_final = func_soma_elementos_matriz(matriz, n);

    printf("O valor da soma dos elementos da matriz eh: %d", resultado_final);

    for (int i = 0; i < n; i++) // liberação da memoria ocupada em cada "coluna".
        free(matriz[i]);

    free(matriz); // liberação da memoria ocupada em cada linha.

return 0;
}
*/

void func_soma_elementos_matriz_diagonal_principal_e_secundaria(int **pmatrix, int n, int *psoma_principal, int *psoma_secundaria){ //aij, tal que i == j, e linha i varia, a coluna "decresce"
    for (int i = 0; i < n; i++){
        *psoma_principal += pmatrix[i][i];
        *psoma_secundaria += pmatrix[i][(n - 1)- i];
    }
}

int main(){
    int n, presultado_final_1 = 0, presultado_final_2 = 0;

    printf("Quantas linhas deseja que a sua matriz tenha? ");
    scanf("%d", &n);

    int **matriz; //double pointer declarado para percorrer tanto as linhas quanto as colunas da matriz a ser preenchida
    matriz = (int**)malloc(sizeof(int*)*n); // alocação dinamica para linhas
    for (int i = 0; i < n; i++) // alocação dinamica para colunas
        matriz[i] = (int*)malloc(sizeof(int)*n);

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("Valor da linha %d, coluna %d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
        printf("\n");
    }

    func_soma_elementos_matriz_diagonal_principal_e_secundaria(matriz, n, &presultado_final_1, &presultado_final_2);

    printf("O valor da soma dos elementos da diagonal principal mais o da diagonal secundaria da matriz eh igual a: %d", presultado_final_1 + presultado_final_2);

    for (int i = 0; i < n; i++) // liberação da memoria ocupada em cada "coluna".
        free(matriz[i]);

    free(matriz); // liberação da memoria ocupada em cada "linha".

return 0;
}
