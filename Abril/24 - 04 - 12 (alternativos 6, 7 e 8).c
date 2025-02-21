#include <stdio.h>
#include<math.h>
/*
double fatorial(int num) {
    if (num == 0 || num == 1)
        return 1;
    else
        return num * fatorial(num - 1);
}

int main() {
    int n;
    double soma = 0;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        soma += 1.0 / fatorial(i);
    }

    printf("O valor da soma da série até %d termos é: %lf\n", n, soma);

    return 0;
}
*/
/*
int main(){
    int n, m, x;
    float soma;
    float fatorial = 1;

    printf("Coloque um numero: ");
    scanf("%d", &x);

    if (x<0){
        printf("Erro!");
    }

    if(x == 0){
        printf("A soma é igual a 1, por definição");
    }

    if (x>0) {
    for (m = 1; m<=x; m++) {
        for (n = 1; n<=m; n++){
            fatorial*= n;
        }
        soma+= m/fatorial;
        fatorial = 1;
    }
    printf("O valor final da soma pedida antes eh: %f", soma);
    }

    return 0;
}
*/
/*
int main(){ //fatorial, com denominador somente ímpar. forma: n/(2n - 1)!
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

    if(x>0){
        for (m = 1; m<=(2*x - 1); m+=2){
            for (n = 1; n<=m; n++){
                fatorial*=n;

            }
                soma+=(float)((m +1)/2)/fatorial;
                fatorial = 1;
        }
        printf("Resultado: %f", soma);
    }

    return 0;
}
*/
/*
void main(){
    int n, i;
    float x = 1, resultado = 1;

    printf("Digite n:\t");
    scanf("%d", &n);

    for (i = 2; i<=n; i++){
        x = x*(2*i-2)*(2*i-1);
        resultado+=(i/x);
    }
    printf("%f", resultado);
}
*/
/*
