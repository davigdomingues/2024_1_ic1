#include <stdio.h>
#include <math.h>

int main()
{
    double a = 1, b = 1, raiz;
    int n, p;
    
    printf("Numero e indice da raiz: ");
    scanf("%d %d", &p, &n);
    
    for (int i = 1; a < p; i++){
        a = pow(i, n);
        
        if (pow(i + 1, n) > p){
            break;
        }
    }
    
    b = pow(a, (n-1)/n);
    
    raiz = (double) (p + a*(n-1))/(double) (n*b);
    
    printf("Resultado: %lf", raiz);

    return 0;
}