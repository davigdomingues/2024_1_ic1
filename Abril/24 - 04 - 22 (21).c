// solução em caminho "desnecessário".......
#include <stdio.h>

int func_1();
char letra[256];
int numero[256];
int count = 0;
int a, b;

int main() {
    func_1();
return 0;
}

int func_1(){
    printf("Digite dois caracteres: ");
    scanf("%c %c", &letra[0], &letra[1]);
    
    for (int j = 1; letra[j]; j++){
        printf("Valor em ASCII: %d %d\n", letra[j - 1], letra[j]);
        scanf("%d %d", &a, &b);
    }
    
    for (int i = 0; ; i++){
        if (a < b)
            count++;
            
         else 
            break;
    }
        
    printf("O numero de caracteres entre eles eh: %d", count);
    
return 0;
}

// forma alternativa:

/*int main(){
    char a, b;
    int diferenca;

    printf("Digite dois caracteres [de 'a' a 'z'] separados por espaço: ");
    scanf("%c %c", &a, &b);

    diferenca = b - a;

    if (diferenca > 0)
        printf("O numero de caracteres entre eles eh: %d", diferenca - 1);

    else
        printf("ERROOOOOOOO!");
}
*/
