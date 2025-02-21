#include <stdio.h>

int main() {
    int N, volta = 0;
    float melhor, soma = 0.0;
    
    printf("Voltas: ");
    scanf("%d", &N);
    
    float tempo[N];
    
        for (int i = 0; i < N; i++){
            printf("Tempo %d: ", i + 1);
            scanf("%f", &tempo[i]);
        
        }
        
		for (int j = 0; j <= N - 1; j++){
		    if (j == 0){
                melhor = tempo[j];
            }
            
            if (j > 0){
                if (tempo[j] < melhor){
                    melhor = tempo[j];
                    volta = j;
                }
            }
		    
			soma += tempo[j];
		}
			
    printf("Melhor tempo : %f\n", melhor);
    printf("Volta do melhor tempo : %d\n", volta + 1);
    printf("Tempo medio : %f\n", (soma/N));

    return 0;
}
