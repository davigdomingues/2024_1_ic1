Obs: a nota da prova tem como critério, também, a qualidade do programa, de tal forma que deve ser considerado um bom projeto, ou seja, sintético, correto e direto.

#include <stdio.h>
#include <math.h>

void calculo(float pr, float *volume){
    float pi = 3.14;

    *volume = (4* pi * pow(pr, 3) )/3;

}
int main(){
    float raio, volume;

    printf("Informe o valor do raio: ");
    scanf("%f", &raio);

    calculo(raio, &volume);

    printf("Valor do volume da esfera correspondente: %f", volume);

return 0;
}


/*int valor_perfeito(int pvalor){
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
*/
//outra versão (valores perfeitos até um limite indeterminado dado pelo usuário):

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

//

void elementos(int *vetor, int *vetorA, int *vetorB){

    for (int j = 0; j < 30; j++){
        if (vetor[j] % 2 == 0){
            printf("%d ", *(vetor + j));
            vetorA++;
        }

        else {
            printf("%d ", *(vetor + j));
            vetorB++;
        }
    }

}

int main(){
    int vetor[30] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30};
    int vetorA[15], vetorB[15];

    elementos(&vetor, &vetorA, &vetorB);
}