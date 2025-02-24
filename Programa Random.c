#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Enum para representar os resultados da moeda
typedef enum {
    CARA, // Se for 0
    COROA // Se for 1
} ResultadoMoeda;

// Função para simular a jogada da moeda
const char* RolaMoeda(void) {
    int r = rand() % 2;
    if (r == CARA) return "cara";
    else return "coroa";
}

int main() {
    // Inicializa o gerador de números aleatórios
    srand(time(NULL));

    // Simula a jogada da moeda e imprime o resultado
    printf("Resultado da jogada: %s\n", RolaMoeda());

    return 0;
}