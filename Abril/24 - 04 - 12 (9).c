int main(){ //fatorial, com denominador somente ímpar e numerador somente par, além de sinal variável. forma: = +-2n/(2n - 1)!

    // somatoria = 2/1! - 4/3! + 6/5! ... +- 2N/(2N-1)!

    int numerador, denominador;
    int N;             // numero inteiro a ser entrado pelo usuario
    int indice = 0;    // indica qual é o indice do termo atual da somatorial
    int fatorial;      // guarda o resultado do fatorial do denominador
    float termo;       // termo atual {x/(x-1)!} a ser somando ou subtraido da somatoria geral
    float soma = 0;    // resultado final da somatoria geral

    printf("Numero: ");
    scanf("%d", &N);

    if(N<=0){
        printf("Erro!");
    }

    else{

        for (denominador = 1; denominador<=(2*N - 1); denominador+=2){

            // calculo do fatorial do denominador
            fatorial = 1;
            for (int i = 1; i<=denominador; i++)
                fatorial*=i;

            numerador = denominador + 1;

            termo = (float)numerador / (float)fatorial;

            // verifica o sinal da operacao de soma
            // (acumulacao do resultado final)
            if (indice%2 == 1) soma -= termo;  // subtracao do termo seguinte ( x/(x-1)! )
            else soma += termo;                // adicao do termo seguinte

            indice++;
        }

        printf("Resultado: %.20f\n", soma);

    } // fim do else

    return 0;

} // fim da funcao main