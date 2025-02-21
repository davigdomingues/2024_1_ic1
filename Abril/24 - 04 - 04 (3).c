#include <stdio.h>

int main()
{
    int n,i,soma;
    
    printf("Hello my friend! Que numero voce quer somar alternadamente? ESCOLHA: ");
    scanf("%d", &n);
    
    if(n>=0){
            for(i=0; i<=n; i++)
                if(i%2 == 1)
                    soma+= i;
                else 
                soma-= i;
    }
    return soma;
}