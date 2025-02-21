#include <stdio.h>

int main()
{
    int n, fat_1 = 1, fat_2 = 1;
    float soma = 0.0;
    int k;
    
    printf("Numero do termo: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++){
        
        for(int j = 1; j <= (2*i - 1); j++){
            fat_2 *= j;
        }
        
        fat_1 *= i;
        
        soma += (float) fat_1/ (float) fat_2;
        fat_1 = 1;
        fat_2 = 1;
    }
    
    printf("Resultado: %f", soma);
    
    return 0;
}
