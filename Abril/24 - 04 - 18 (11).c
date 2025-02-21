#include <stdio.h>

int main() { //triangulo de Floyd.
int i, j, n;

scanf("%d", &n);

for (i = 1; i <= n; i += 2){
	printf("\n");
	
	for (j = 1; j <= i; j++){
		printf("%d", j);
		
	}
	
}

return 0;

}	