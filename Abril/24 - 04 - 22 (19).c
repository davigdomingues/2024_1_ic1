#include <stdio.h>
#include <string.h>
char nome[256];

int main() {
    
    printf("Informe um nome qualquer: ");
    gets(nome);
    
	printf("Vogais no nome: \n");
	
    for (int i = 0; i < strlen(nome); i++){
        if ((nome[i] == 'a') || (nome[i] == 'e') || (nome[i] == 'i') || (nome[i] == 'o') || (nome[i] == 'u')) {
            printf("%c ", nome[i]);
        }
    }

    return 0;
}
