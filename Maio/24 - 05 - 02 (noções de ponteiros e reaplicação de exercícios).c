#include <stdio.h>
#include <string.h>
#include <ctype.h>
//#include <zhao.h>

/*int main(){
    int teste, n;

    printf("Quantos numeros deseja colocar? ");
    scanf("%d", &n);

    int num[n];

    do {
        for (int i = 0; i < n; i++){
            printf("Valor %d: ", i + 1);
            scanf("%d", &num[i]);
        }

        for (int j = 0; j < n; j++){
        if (!((num[j] % 2 == 0) || (num[j] % 3 == 0) || (num[j] % 5 == 0) || (num[j] % 7 == 0))){
            printf("0\n");
            }
        }

        for (int k = 0; k < n; k++){
        if ((num[k] % 2 == 0) || (num[k] % 3 == 0)){
            printf("1\n");
            }
        }

        for (int m = 0; m < n; m++){
            if ((num[m] % 5 == 0) && (num[m] % 7 == 0)){
                printf("2\n");
            }

        }

        for (int p = 0; p < n; p++){
            if ((num[p] % 2 == 0) || ((num[p] % 5 == 0) && (num[p] % 7 == 0))){
                printf("Numero divisivel por 2, ou por 5, mas tambem por 7.");
            }
        }

        printf("\n\nDeseja continuar? (sim = valor diferente de -1/ nao = -1): ");
        scanf("%d", &teste);

    } while (teste =! -1);

return 0;

}
*/

/*int main(){
    char nome[1000];

    printf("Informe qualquer nome: ");
    gets(nome);

    printf("Vogais no nome informado: \n");

    for (int i = 0; i < strlen(nome); i++){
        if ((tolower(nome[i]) == 'a') || ((tolower(nome[i]) == 'e') || (tolower(nome[i]) == 'i') || (tolower(nome[i]) == 'o') || (tolower(nome[i]) == 'u'))){
            printf("%c ", nome[i]);
        }

    }

return 0;
}
*/

/* ou usar a solução da taisa
void main(){

char frase[1000];
char vogais[] = "aeiouAEIOU";
int tam = 0; tamvogais = 0;

scanf("%[^\n]", frase); //captura todos os valores que nao sejam o '\n'.
tam = strlen(frase);
tamvogais = strlen(vogais);

for (int i = 0; i < tam; i++){
    for (int j = 0; j < tamvogais; j++){
        if (frase[i] == vogais[j]){
            printf("%c\n", frase[i]);
        }
    }
}
*/

/*int main(){
    char maior, menor;
    int valor;

    printf("Digite duas letras do alfabeto: ");
    scanf("%d %d", &menor, &maior);

    valor = maior - menor;

    if (valor > 0){
        printf("O numero de caracteres entre eles eh: %d", valor - 1);
    } else {
        printf("Parametro incompativel para se analisar.");
    }

return 0;
}
*/

int main(){
    char letras[] = "abcdefghijklmnopqrstuvwxyz";
    char maior, menor;
    int a, b;

    printf("Digite duas letras do alfabeto: ");
    scanf("%c %c", &menor, &maior);

    for (int i = 0; i < strlen(letras); i++){

        if (letras[i] == menor){
            menor = letras[i];
            a = i;
        }

        if (letras[i] == maior){
            maior = letras[i];
            b = i;
        }
    }

    printf("O total de letras entre as informadas eh: %d", b - a);

return 0;
}

/* solução do LUCAS CABRAL
int f (char a, char b){
    int x = a - b;
    if (a > b) return x - 1;
    if (a == b) return x;
    return -x - 1;
}

int main(){
    char a,b;
    scanf("%c %c", &a, &b);
    printf("%d"); f(a,b);
    }
*/