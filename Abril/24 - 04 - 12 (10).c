#include<stdio.h>

int main(){ //fatorial, com denominador somente ímpar e numerador somente par. forma: 2n/(2n - 1)!
    int n, m, x;
    float fatorial = 1;
    float soma;

    printf("Numero: ");
    scanf("%d", &x);

    if(x<0){
        printf("Erro!");
    }

    if(x == 0){
        printf("O valor eh 1, por definição.");
    }

    if(x > 0){
        for (m = 1; m <= (2*x - 1); m += 2){
            for (n = 1; n <= m; n++){
                fatorial *= n;

            }
                soma += (float)(2*(m + 1)/2)/fatorial;
                fatorial = 1;
        }
        printf("Resultado: %f", soma);
    }

    return 0;
}