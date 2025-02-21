#include <stdio.h>
#include <string.h>

int main() {
    
    char nome[] = "SONHO";
    int l;
    
    printf("Linhas: ");
    scanf("%d", &l);
    
    for (int i = 0; i < l; i++){
        
        for (int j = 0; j <= i; j++){
            printf("%s ", nome);
        }
        
        printf("\n");
    }

    return 0;
}

// forma alternativa e generica:

/*int main(){
    char palavra[256];

    printf("Informe uma palavra qualquer: ");
    gets(palavra); // ou scanf("%s", &palavra);

    for (int i = 0; i < strlen(palavra); i++){
        for (int j = 0; j <= i; j++){
            printf("%s ", palavra);
        }
        printf("\n");
    }

    return 0;
}
*/