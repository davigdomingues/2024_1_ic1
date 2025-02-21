#include <stdio.h>

int main(){ // variação 1 triângulo de Floyd.
int n, k = 1;

printf("Linhas: ");
scanf("%d", &n);

for (int i = 1; i <= n; i++){
	for (int j = 1; j <= 2*i - 1; j++){
		printf("%d", k);
		k++;
	}
	printf("\n");
}

return 0;

}