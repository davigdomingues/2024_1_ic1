#include <stdio.h>

int main()
{
    int x;
    double soma = 0.0;
    printf("Digite o numero de termos do somatorio: ");
    scanf("%d", &x);
        double fatorial = 1.0;
        for(int m = 1; m<=x; m++){
            fatorial = fatorial*m;
            soma = soma + m/fatorial;
        }
        printf("%lf", soma);
    return 0;
}