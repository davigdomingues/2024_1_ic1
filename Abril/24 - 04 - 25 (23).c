#include <stdio.h>
#include <math.h>

void calculo(float pr, float *volume){
    float pi = 3.14;
    *volume = (4* pi * pow(pr, 3) )/3;
}

int main(){
    float raio, volume;

    printf("Informe o valor do raio: ");
    scanf("%f", &raio);

    calculo(raio, &volume);

    printf("Valor do volume da esfera correspondente: %f", volume);

return 0;
}
