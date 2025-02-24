#include <stdio.h>

int numero[30];
int n, fatorial = 1, soma = 0;

int func_1();

int main() {
    int teste;
    
    do {
        printf("Digite o total de valores: ");
        scanf("%d", &n);
    
            if (n < 30){
                for (int i = 0; i < n; i++){
                    printf("Valor %d: ", i + 1);
                    scanf("%d", &numero[i]);
            }
                
                func_1();
        
                printf("Digite -1 para parar ou outro valor e digite a tecla 'enter'.");
                scanf("%d", &teste);
            }
    } while (teste != -1);
    
return 0;
}

int func_1(){
    for (int j = 0; j < n; j++){
        if (numero[j] < 7) {
            for (int m = 1; m <= numero[j]; m++){
                fatorial *= m;
            }
            printf("O valor de %d em fatorial eh: %d\n", numero[j], fatorial);
            fatorial = 1;
        }
    }
    
    for (int k = 0; k < n; k++){
        if (numero[k] >= 7) {
            for (int l = 0; l <= numero[k]; l++){
                soma += l;
            }
            printf("O valor de %d em pa de razao 1 eh: %d\n", numero[k], soma);
            soma = 0;
        }
    }
    
return 0;
}
