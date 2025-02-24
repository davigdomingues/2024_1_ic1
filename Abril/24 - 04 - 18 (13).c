#include <stdio.h>

int main(){ // Método de Newton para aproximação de raízes quadradas, solução de Chrstyan Paniago Nantes.

int a, i;

scanf("%d", &a);
float ap = a/2.0;

for (i = 1; i <= a; i++){
	ap = ((1.0/2)*(ap + a/2));
}

printf("O a%d é %f", a, ap);

return 0;

}
