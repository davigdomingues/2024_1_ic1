#include<stdio.h>

int main()
{
int n, fat = 1, cont = 1;
float soma;

scanf("%i", &n);

for (i = 0; i < (2*n - 1); i++) {
	fat = fat*(i+1);
	
	if (i%2 == 0) {
		soma = (float)cont/(float)fat;
		cont++;
		}
	}

if (n < 0) {
		printf("Fatorial nao calculavel.");
	} else {
		printf("A soma eh: %i", soma);
		
    return 0;
}