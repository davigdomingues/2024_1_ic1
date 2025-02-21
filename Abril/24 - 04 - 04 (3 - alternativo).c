#include <stdio.h>

int main()
{
    int i, soma;
    
    printf("Numero: ");
    scanf("%d", &i);
    
    for (int j=0; j<=i; j++){
        soma = soma + (j%2==1?j:-j);
    }
        printf("%d\n", soma);
        
    return soma;
}