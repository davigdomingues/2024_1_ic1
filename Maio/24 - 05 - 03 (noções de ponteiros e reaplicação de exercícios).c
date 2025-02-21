#include <stdio.h>

/*int main(){

    int num, *p1, *p2, num1, num2;
    num1 = num2 = 55;
    p1 = &num1; //pega o endereço de num na memoria.
    p2 = &num2;
    p2 = p1;

    printf("\n Valor inicial: %d, %d\n", num1, num2);
    *p1 = 100; //muda o valor de num de uma maneira indireta: o valor apontado por p é alterado na memoria.

    printf("\n Valor final: %d, %d, %d, %d\n", num1, num2, *p1, *p2);
    printf("\n Enderecos: %p, %p\n", p1, p2); //muda em cada execução do programa.

return 0;
}
*/

/*int main(){
    float matrx[5][5];
    float *p;

    p = matrx[0]; //p = &matrx[0][0];

    for (int count1 = 0; count1 < 5; count1++){

        for (int count2 = 0; count2 < 5; count2++){
            *p = count2 + 1;

            if (count1 == 0){
                printf("%f ", *p);
            }

            if (count1 > 0) {
                printf("%f ", *p + 5*count1);
            }
            *p++; //incrementa de maneira sequencial o endereco de memória (incremento de unidade por unidade)
        }
        printf("\n");
    }

return 0;
}
*/

/*void StrCpy (char *destino, char *origem){

    while(*origem){
        *destino = *origem;
        origem++;
        destino++;
    }
    *destino = '\0';
}

void main(){
    char str1[100], str2[100], str3[100];

    printf("Entre com uma string: ");
    fgets(str1, 100, stdin);

    StrCpy(str2, str1);
    StrCpy(str3, "Voce digitou a string: ");

    printf("\n\n%s%s", str3, str2);
}
*/

int main(){

    for (int n = 1000; n < 10000; n++){
    int a, b;

    a = n/100;
    b = n - 100*a;

        if ((a + b)*(a + b) == n){
            printf("Numeros resultantes: %d\n", n);
        }
    }
return 0;
}