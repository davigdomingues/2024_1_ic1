#include <stdio.h>

int main(){ // soma dos dois primeiros algarismos de um número entre 1000 e 9999, que ao quadrado equivale ao número em si, solução do Lucas Cabral.

for (int i = 1000; i < 10000; i++){
	int a, b;
	a = i/100;
	b = i - 100*a; // ou b = i%100;
	
	if ((a + b) * (a + b) == i) {
		printf("%d\n", i);
	}
	
}

return 0;

}