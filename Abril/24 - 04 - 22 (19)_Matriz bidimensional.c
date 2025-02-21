#include <stdio.h>
#include <string.h>
char nome[2][256];


int main() {
    
    printf("Informe um nome qualquer: ");
    gets(nome[0]);
    printf("Informe um sobrenome qualquer: ");
    gets(nome[1]);
    
	printf(" Vogais no nome: "); 
    for (int i = 0; i < strlen(nome[0]); i++){
        if ((nome[0][i] == 'a') || (nome[0][i] == 'e') || (nome[0][i] == 'i') || (nome[0][i] == 'o') || (nome[0][i] == 'u')) {
            printf("%c ", nome[0][i]);
        }
    }
	
	printf("\n\n Vogais no sobrenome: "); 
    for (int i = 0; i < strlen(nome[1]); i++){
        if ((nome[1][i] == 'a') || (nome[1][i] == 'e') || (nome[1][i] == 'i') || (nome[1][i] == 'o') || (nome[1][i] == 'u')) {
            printf("%c ", nome[1][i]);
        }
    }

    return 0;
}
