#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 30

void func_valores(int *parray, int *ppares, int *pimpares, int *pcontador_pares, int *pcontador_impares){
    *pcontador_pares = 0;
    *pcontador_impares = 0;

    for (int j = 0; j < MAX; j++){
        if (*(parray + j) % 2 == 0){
            ppares[*pcontador_pares] = *(parray + j);
            (*pcontador_pares)++;
        }
        if (*(parray + j) % 2 == 1){
            pimpares[*pcontador_impares] = *(parray + j);
            (*pcontador_impares)++;
        }
    }
}

int main(){
    int array[30], pares[30], impares[30], contador_pares = 0, contador_impares = 0;

    for (int i = 0; i < MAX; i++){
        printf("Valor %d: ", i + 1);
        scanf("%d", array + i);
    }

    func_valores(array, pares, impares, &contador_pares, &contador_impares);

    printf("\n");
    puts("Valores pares do vetor inteiro declarado anteriormente:");

    for (int k = 0; k < contador_pares; k++){
        printf("%d ", *(pares + k));
    }

    printf("\nValores impares do vetor inteiro declarado anteriormente: \n");

    for (int l = 0; l < contador_impares; l++){
        printf("%d ", *(impares + l));
    }

    return 0;
}
