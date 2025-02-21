#include <stdio.h>

int main()
{
    int x;
    double soma = 0.0;
    
    
    printf("Digite o numero de termos do somatorio: ");
    scanf("%d", &x);
    
        for(int m = 1; m<=x; m++){
            double fatorial = 1.0;
            for(int n = 1; n<=m; n++) {
                fatorial = fatorial*n;
            }
            soma = soma + m/fatorial;
            
        }
        printf("%lf", soma);
     
    
    return 0;
}
