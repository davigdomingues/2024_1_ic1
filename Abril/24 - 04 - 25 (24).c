#include <stdio.h>

int valor_perfeito(int pvalor){
    int soma = 0;

    for (int i = 1; i < pvalor; i++){
        if (pvalor % i == 0){
            soma += i;
        }
    }

    if (soma == pvalor)
        return 1;

    else
        return 0;

}

int main(){
    int valor;

    printf("Informe o valor de interesse: ");
    scanf("%d", &valor);

    int ehperfeito = valor_perfeito(valor);

    if (ehperfeito)
        printf("O valor eh perfeito!");

    else
        printf("O valor nao eh perfeito!");

return 0;

}

/*outra versão (valores perfeitos até um limite indeterminado dado pelo usuário):

int valor_perfeito(int pvalor){
    int soma = 0;

    for (int i = 1; i < pvalor; i++){
        if (pvalor % i == 0)
            soma += i;
    }

        if (soma == pvalor)
            return 1;

        else
            return 0;
}

int main(){
    int valor, limite;

    printf("Informe o numero maximo: ");
    scanf("%d", &limite);

    printf("Valores perfeitos de 1 a %d: ", limite);

    for (valor = 1; valor < limite; valor++){
        if (valor_perfeito(valor))
           printf("%d ", valor);
    }

return 0;

}

*/
