#include <stdio.h>
#include <math.h>

int main()
{
    double a = 1, b = 1, raiz, i;
    double n, p;
    
    printf("Numero e indice da raiz: ");
    scanf("%lf %lf", &p, &n);
    
    for (i = 1; a < p; i++){
        a = pow(i, n);
        
        if (pow(i + 1, n) > p){
            break;
        }
    }
	
    b= pow(i,n-1);

    raiz = (p + (n-1)*a);
    raiz /= (n*b);
    
    printf("Resultado: %lf", raiz);

    return 0;
}