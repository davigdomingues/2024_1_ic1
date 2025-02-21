#include <stdio.h>

int main(){
    int n, k, count, soma = 0;

    printf("Informe um numero inteiro e o numero de multiplos: ");
    scanf("%d %d", &k, &n);

    for (int i = 1; i <= k*n; i++){
        if (i%k == 0){
            soma += i;
            count++;

            if (count == n){
                break;
            }
        }
    }

    printf("A soma dos valores delimitado eh: %d", soma);

return 0;

}
