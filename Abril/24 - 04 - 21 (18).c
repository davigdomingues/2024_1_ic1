#include <stdio.h>
int numero[30];
int n;

int func_1();

int main() {

    int teste;
    
    do {
    printf("Digite o total de valores: ");
    scanf("%d", &n);
    
        if (n < 30){
    
            for (int i = 0; i < n; i++){
                printf("Valor: ");
                scanf("%d", &numero[i]);
            }
			
            func_1();
        
            printf("Digite -1 para parar ou outro valor e digite a tecla 'enter': ");
            scanf("%d", &teste);
			
        } else {
			
			printf("Parece que o total de valores ultrapassou o limite de 30..... tente novamente.\n");
			
			printf("\nDigite -1 para parar ou outro valor e digite a tecla 'enter': ");
			scanf("%d", &teste);
			
		}
    
    } while (teste != -1);
    
return 0;

}

int func_1(){
    for (int j = 0; j < n; j++){
        if (!((numero[j] % 2 == 0) || (numero[j] % 3 == 0) || (numero[j] % 5 == 0) || (numero[j] % 7 == 0))) {
            printf("O numero %d nao eh multiplo de 2, 3, 5 e 7: 0\n", numero[j]);
        }
    }
    
    for (int k = 0; k < n; k++){
        if ((numero[k] % 2 == 0) || (numero[k] % 3 == 0)) {
            printf("O numero %d eh multiplo de 2 e/ou de 3: 1\n", numero[k]);
        }
    }
    
    for (int l = 0; l < n; l++){
        if ((numero[l] % 5 == 0) && (numero[l] % 7 == 0)) {
            printf("O numero %d eh multiplo de 5 e de 7: 2\n", numero[l]);
        }
    }
    
return 0;

}

// forma alternativa:

/*int main(){
    int N;
    int ehMult2, ehMult3, ehMult5, ehMult7;
    int teste;

    do{

      printf("\nNumero: ");
      scanf("%d", &N);

      ehMult2 = !(N%2);
      ehMult3 = !(N%3);
      ehMult5 = !(N%5);
      ehMult7 = !(N%7);

        if (ehMult2 || ehMult3)
            printf("1\n");

        else if (ehMult5 || ehMult7)
            printf("2\n");

        else
            printf("0\n");

    printf("\nDeseja continuar? (sim != -1, nao = -1): ");
    scanf("%d", &teste);

    } while (teste != -1);

return 0;

}
*/