#include <stdio.h>

int main() {
    int N, volta = 0;
    float melhor, soma = 0.0;
    
    printf("Voltas: ");
    scanf("%d", &N);
    
    float tempo[N];
    
    if (N > 0){
    
        for (int i = 0; i < N; i++){
            printf("Tempo da volta %d: ", i + 1);
            scanf("%f", &tempo[i]);
        
            if (i == 0){
                melhor = tempo[i];
            } 
        
            if (i > 0){
                if (tempo[i] < melhor){
                    melhor = tempo[i];
                    volta = i;
                }
            }
        
			for (int j = 0; j < i; j++){
				soma += tempo[j];
			}
			
		printf("Melhor tempo : %f\n", melhor);
		printf("Volta do melhor tempo : %d\n", volta + 1);
		printf("Tempo medio : %f\n", (soma/(float)N));
    }
    
    } else {
        printf("Erro!\n");
    }
    


    return 0;
    
}
