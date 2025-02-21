#include <stdio.h>
#include <string.h>

void ordenacao(char S[], int n){ //passagem de vetor string para uma função qualquer: str[].
    int j;
    
    for (int i = 1; i < n; i++){
        j = i;
        while (j > 0 && S[j] < S[j - 1]){
            char aux = S[j];
            S[j] = S[j - 1];
            S[j - 1] = aux;
            j -= 1;
        }
    }
}
 
int main(){
    char S1[] = "roma";
    char S2[] = "arom";
    int n1 = strlen(S1);
    int n2 = strlen(S2);

    if (n1 == n2){
        ordenacao(S1, n1);
        ordenacao(S2, n2);

        int anagrama = 1;
        for (int i = 0; i < n1; i++){
            if (S1[i] != S2[i]){
                anagrama = 0;
                break;
            }
        }

        if (anagrama)
            printf("V\n");
        else
            printf("F\n");
        }
    
    else
        printf("Strings de tamanhos diferentes nao sao anagramas!");

    return 0;
}