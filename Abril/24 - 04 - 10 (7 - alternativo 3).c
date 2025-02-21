#include<stdio.h>

void main()
[
int N, i, a = 1;
float b;

scanf("%d", &N);

for (i = 1; i <= N; i++) {
	a *= i;
	b += ((float)i/a);
}

printf("Resultado:\t %f", b);

}