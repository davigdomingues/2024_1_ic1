#include <stdio.h>
#include <stdlib.h>

void func_1();
void func_2();
void func_3();
void func_4();//tive mais dificuldade!!! (REVISAR!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!)
void func_5();
void func_6();//ESSE É BOM
void func_7();
void func_8();
void func_9();//tive mais dificuldade!!! (REVISAR!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!)
void func_10();
void func_11();
void func_12();
void func_13();//ESSE É BOM!! ("DOUBLE POINTER") - > (REVISAR!!!!!!!!!!!!!!!!!!!!!!!)
void func_14();
void func_15();//Revisar a parte de comparação!!
void func_16();
void func_17();//Dificuldade... Revisar!!!
void func_18();
void func_21();

void func_1(){
    int *parray;
    parray = (int*)malloc(sizeof(int)*5);
    //não é necessário parray = &array[0], pois já se foi inicializado parray na alocação dinâmica, pela função malloc.

    if (parray == NULL){
        puts("Erro ao alocar memoria!");
        exit (1);
    }

    puts("Informe quais numeros deseja inserir:");

    for (int i = 0; i < 5; i++){
        printf("Valor %d: ", i + 1);
        scanf("%d", parray + i);
    }

    for (int i = 0; i < 5; i++){
        printf("%d ", *(parray + i));
    }

    free(parray);
}
void func_2(){
    int n, *parray;

    printf("Informe o tamanho do vetor de interesse: ");
    scanf("%d", &n);
    parray = (int*)malloc(sizeof(int)*n);

    if(parray == NULL){
        puts("Erro ao alocar dinamicamente a memoria!");
        exit (1);
    }

    putchar('\n');
    for(int i = 0; i < n; i++){
        printf("Valor %d: ", i + 1);
        scanf("%d", parray + i);
    }

    printf("\nValores: ");
    for(int i = 0; i < n; i++){
        printf("%d ", *(parray + i));
    }

    free(parray);
}
void func_3(){
    int n, *parray, contador_par, contador_impar;

    printf("Informe o tamanho do vetor de interesse: ");
    scanf("%d", &n);
    parray = (int*)malloc(sizeof(int)*n);

    if(parray = NULL){
        puts("Erro ao alocar dinamicamente a memoria!");
        exit (1);
    }

    putchar('\n');
    for(int i = 0; i < n; i++){
        printf("Valor %d: ", i + 1);
        scanf("%d", parray + i);

        if(*(parray + i) % 2 == 0)
            contador_par++;
        else
            contador_impar++;
    }

    printf("\nTotal de valores pares: %d\nTotal de valores impares: %d", contador_par, contador_impar);

    free(parray);
}
int func_4_1(char ch) { // a função verifica se o caractere é uma vogal.
    return (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U');
}
void func_4(){
    int tamanho;
    printf("Informe o tamanho da string desejada: ");
    scanf("%d", &tamanho);

    // Alocando memória dinamicamente para a string
    char *minhaString = (char *)malloc((tamanho + 1) * sizeof(char)); //tamanho + 1 desconsidera o '\0'.

    if (minhaString == NULL) {
        printf("Erro ao alocar memória.\n");
        exit (1);
    }

    printf("Digite a string (com no máximo %d caracteres): ", tamanho);
    scanf("%s", minhaString);

    // Removendo as vogais da string
    int i, j;
    for (i = 0, j = 0; minhaString[i] != '\0'; i++) {
        if (!func_4_1(minhaString[i])) {
            minhaString[j] = minhaString[i];
            j++;
        }
    }
    minhaString[j] = '\0'; // Adicionando o caractere nulo de término, considerando que j será a "última" posição do caractere da string.

    printf("String sem vogais: %s\n", minhaString);

    // Liberando a memória alocada
    free(minhaString);
}
void func_5(){
    int N, X, contador_multiplos = 0;

    printf("Qual o tamanho do vetor de inteiros? ");
    scanf("%d", &N);

    int *vetor = (int*)malloc(sizeof(int)*N);

    if (vetor == NULL){
        printf("Erro na alocacao dinamica!");
        exit (1);
    }

    for (int i = 0; i < N; i++){
        printf("Valor %d: ", i + 1);
        scanf("%d", vetor + i);
    }

    printf("Informe um numero qualquer: ");
    scanf("%d", &X);

    printf("Valores do vetor que sao multiplos do numero qualquer: ");
    for (int i = 0; i < N; i++){
        if(*(vetor + i) % X == 0){
            printf("%d ", *(vetor + i));
            contador_multiplos++;
        }
    }

    printf("\nTotal de numeros multiplos do numero qualquer: %d", contador_multiplos);

    free(vetor);
}
void func_6(){
    int numero_posicoes_memoria, *pbytes, parar = 0, decisao, posicao, valor;

    printf("Deseja alocar quantas posicoes de memoria de tamanho int? ");
    scanf("%d", &numero_posicoes_memoria);

    pbytes = (int*)calloc(numero_posicoes_memoria, sizeof(int)); //faz a mesma coisa que malloc, diferenca: inicializa os valores com 0.

    if (pbytes == NULL)
        printf("Erro ao alocar memoria!");

    printf(" -> Beleza!!! Foram alocados %d Bytes\n\n", numero_posicoes_memoria*(int)sizeof(int));

    while(1) {
        printf("Deseja inserir um valor ou ver o que ha armazenado (1 ou 2)? ");
        scanf("%d", &decisao);

        if (decisao == 1){

            do {
                printf("\nEm qual posicao deseja alterar o valor (lembre - se, a primeira posicao eh 0)? ");
                scanf("%d", &posicao);
                if ((posicao < 0) || (posicao > numero_posicoes_memoria))
                    printf(" -> ERRO: VALOR INVALIDO, IMBECIL!!!\n\n");
            } while ((posicao < 0) || (posicao > numero_posicoes_memoria));


            printf("\nQual valor deseja inserir? ");
            scanf("%d", &valor);

            pbytes[posicao] = valor;

            printf("\nValores de cada posicao na memoria:\n");
            for (int i = 0; i < numero_posicoes_memoria; i++)
                printf("%d ", *(pbytes + i));

            printf("\nDeseja parar (sim = 1, nao = 0)? ");
            scanf("%d", &parar);

            if (parar) {
                free(pbytes);
                return;
            }

        } //fim do if

        if (decisao == 2){
            printf("Em qual posicao deseja saber o valor, exatamente? ");
            scanf("%d", &posicao);

            printf("Eis o valor: %d", *(pbytes + posicao));
        }

        printf("\nDeseja parar (sim = 1, nao = 0)? ");
        scanf("%d", &parar);

        if (parar) {
            free(pbytes);
            return;
        }

    } // fim do while (1)
}
void func_7(){
    int loteria[6], individual[6], *ploteria, contador = 0;

    printf("Valores gerados pela loteria:\n");
    for (int i = 0; i < 6; i++){
        printf("Valor %d: ", i + 1);
        scanf("%d", &loteria[i]);
    }

    printf("\nValores do seu bilhete de loteria:\n");
    for (int i = 0; i < 6; i++){
        printf("Valor %d: ", i + 1);
        scanf("%d", &individual[i]);
    }

    ploteria = (int*)malloc(sizeof(int)*6);
    for (int i = 0; i < 6; i++){
        for (int j = 0, k = 0; j < 6; j++){
            if (loteria[i] == individual[j]){
                *(ploteria + k) = individual[j];
                contador++;
                k++;
            }
        }
    }

    printf("\nValores iguais:\n");
    for (int i = 0; i < contador; i++){
        printf("%d ", *(ploteria + i));
    }

    free(ploteria);
}
void func_8(){
    int *p;

    p = (int*)calloc(1500, sizeof(int));

    for (int i = 0; i < 1500; i++){
        if (*(p + i) != 0){
            printf("Valor diferente de zero encontrado!");
            break;
        }
        else{
            if (i == 1499)
                printf("Todos os valores sao zero!");
        }
    }

    for (int i = 0; i < 1500; i++){
        *(p + i) = i;

        if (((*(p + i) >= 0) && (*(p + i) <= 9)) || ((*(p + i) >= 1490) && (*(p + i) <= 1499)))
            printf("%d ", *(p + i));
    }

    free(p);
}
void func_9(){
    int *p = NULL; //ponteiro para o vetor.
    int numero, tamanho = 0; //tamanho diz o tamanho atual do vetor.

    printf("Informe valores numericos (se for negativo, o loop eh interrompido):\n");

    while (1){
        scanf("%d", &numero);

        if (numero < 0)
            break;

        tamanho++;

        p = (int*)realloc(p, sizeof(int)*tamanho);

        p[tamanho - 1] = numero;
    }

    printf("Vetor lido:\n");
    for (int i = 0; i < tamanho;i++){
        printf("%d ", p[i]);
    }

    free(p);
}
void func_10(){
    int total, *p;

    while (total < 10){
        printf("Quantos valores deseja armazenar em um vetor do tipo double (deve ser maior ou igual a 10)? ");
        scanf("%d", &total);
        printf("\n");
    }

    p = (double*)malloc(sizeof(double)*total);

    printf("\nValores a serem atribuidos as 10 primeiras posicoes do vetor dinamico:\n");
    for (int i = 0; i < 10; i++){
        printf("Valor %d: ", i + 1);
        scanf("%d", p + i);
    }

    printf("\nVetor gerado:\n");
    for (int i = 0; i < 10; i++)
        printf("%d ", p[i]);
    free(p);
}
void func_11(){
    int total_alunos;

    struct aluno{
        int matricula;
        char sobrenome[10];
        int ano_de_nascimento;
    }*escola;

    printf("Qual o total de alunos a serem informados? ");
    scanf("%d", &total_alunos);

    escola = (struct aluno*)malloc(sizeof(struct aluno)*total_alunos);

    printf("\nEntre com as informacoes dos alunos:\n\n");

    for (int i = 0; i < total_alunos; i++){
        printf("Numero da matricula do aluno %d: ", i + 1);
        scanf("%d", &escola[i].matricula);

        printf("Sobrenome do aluno %d: ", i + 1);
        scanf("%s", escola[i].sobrenome);

        printf("Ano de nascimento do aluno %d: ", i + 1);
        scanf("%d", &escola[i].ano_de_nascimento);

        printf("\n");
    }

    printf("\nMatriculas:\n");
    for (int i = 0; i < total_alunos; i++)
        printf("%d ", escola[i].matricula);

    printf("\n\nSobrenomes:\n");
    for (int i = 0; i < total_alunos; i++)
        printf("%s ", escola[i].sobrenome);

    printf("\n\nAnos de nascimento:\n");
    for (int i = 0; i < total_alunos; i++)
        printf("%d ", escola[i].ano_de_nascimento);

    printf("\n");

    free(escola);
}
void func_12(){
    struct produto {
        int codigo;
        char produto[50];
        int quantidade;
        float preco;
    } *atributos;

    int N, a, b;

    printf("Informe o total de produtos: ");
    scanf("%d", &N);

    int  maior1[N], maior2[N];

    printf("\n");
    for (int i = 0; i < N; i++){
        printf("Produto %d\n", i + 1);

        printf("Codigo: ");
        scanf("%d", &atributos[i].codigo);

        printf("Nome do produto: ");
        scanf("%s", &atributos[i].produto);

        printf("Quantidade de produtos disponiveis: ");
        scanf("%d", &atributos[i].quantidade);

        printf("Preco de venda do produto: ");
        scanf("%f", &atributos[i].preco);

        printf("\n");
    }

    maior1[0] = atributos[0].preco;
    maior2[0] = atributos[0].quantidade;
    for (int i = 0, k = 0, l = 0; i < N; i++){
        if (atributos[i].preco > maior1[0]){
            maior1[0] = atributos[i].preco;
            k++;
            a = k;
        }
        if (atributos[i].quantidade > maior2[0]){
            maior2[0] = atributos[i].quantidade;
            l++;
            b = l;
        }
    }

    printf("Produto com o maior preco de venda: %s\nProduto com a maior quantidade disponivel no estoque: %s\n", atributos[a].produto, atributos[b].produto);
}
int func_13_1(int Linhas, int Colunas, int **Matriz, int valor){
    for (int i = 0; i < Linhas; i++){
        for (int j = 0; j < Colunas; j++){
            if (Matriz[i][j] == valor)
                return 1;
        }
    }
    return 0;
}
void func_13(){
    int Linhas, Colunas, valor;

    printf("Informe o total de linhas e de colunas da matriz desejada: ");
    scanf("%d %d", &Linhas, &Colunas);

    int **Matriz = (int **)malloc(Linhas*sizeof(int*));
    for (int i = 0; i < Linhas; i++)
        Matriz[i] = (int*)malloc(Colunas*sizeof(int));

    printf("\nPreenchimento da matriz:\n");
    for (int i = 0; i < Linhas; i++){
        for (int j = 0; j < Colunas; j++){
            printf("Valor da linha %d, coluna %d: ", i + 1, j + 1);
            scanf("%d", &Matriz[i][j]);
        }
    }

    printf("\nQual valor deseja saber se esta dentro da matriz criada? ");
    scanf("%d", &valor);
    int verificacao = func_13_1(Linhas, Colunas, Matriz, valor);

    printf("\n");
    if (verificacao)
        printf("O valor esta presente na matriz!");
    else
        printf("O valor nao se encontra presente....");

    for (int i = 0; i < Linhas; i++)
        free(Matriz[i]);//Colunas

    free(Matriz); //Linhas
}
void func_14(){
    int Linhas, Colunas;

    printf("Informe o total de linhas e de colunas da matriz desejada: ");
    scanf("%d %d", &Linhas, &Colunas);

    float **Matriz = (float**)malloc(sizeof(float*)*Linhas);
    for (int i = 0; i < Linhas; i++)
        Matriz[i] = (float*)malloc(Colunas*sizeof(float));

    printf("Preenchimento dos valores da matriz:\n");
    for (int i = 0; i < Linhas; i++){
        for (int j = 0; j < Colunas; j++){
            printf("Valor da linha %d, coluna %d: ", i + 1, j + 1);
            scanf("%f", &Matriz[i][j]);
        }
    }

    printf("\nMatriz gerada:\n");
    for (int i = 0; i < Linhas; i++){
        for (int j = 0; j < Colunas; j++)
            printf("%f ", Matriz[i][j]);
        printf("\n");
    }

    for (int i = 0; i < Linhas; i++)
        free(Matriz[i]);

    free(Matriz);
}
void func_15(){
    int N, M;

    printf("Informe o numero de linhas e de colunas da matriz: ");
    scanf("%d %d", &N, &M);

    float **matriz = (float**)malloc(sizeof(float*)*N);

    for (int i = 0; i < N; i++)
        matriz[i] = (float*)malloc(sizeof(float)*M);

    printf("Preenchimento dos valores da matriz:\n");
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            printf("Valor da linha %d, coluna %d: ", i + 1, j + 1);
            scanf("%f", &matriz[i][j]);
        }
    }

    float maior1 = matriz[0][0], maior2 = matriz[0][0], maior3 = matriz[0][0];
    int linha1, coluna1, linha2, coluna2, linha3, coluna3;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (matriz[i][j] > maior1) {
                // Atualiza os três maiores valores
                maior3 = maior2;
                coluna3 = coluna2;
                linha3 = linha2;

                maior2 = maior1;
                coluna2 = coluna1;
                linha2 = linha1;

                maior1 = matriz[i][j];
                coluna1 = j;
                linha1 = i;
            } else if (matriz[i][j] > maior2 && matriz[i][j] < maior1) {
                // Atualiza o segundo e terceiro maiores valores
                maior3 = maior2;
                coluna3 = coluna2;
                linha3 = linha2;

                maior2 = matriz[i][j];
                coluna2 = j;
                linha2 = i;
            } else if (matriz[i][j] > maior3 && matriz[i][j] < maior2) {
                // Atualiza apenas o terceiro maior valor
                maior3 = matriz[i][j];
                coluna3 = j;
                linha3 = i;
            }
        }
    }

    printf("\nOs tres maiores numeros da matriz sao:\n");
    printf("1 maior: %f (linha %d, coluna %d)\n", maior1, linha1 + 1, coluna1 + 1);
    printf("2 maior: %f (linha %d, coluna %d)\n", maior2, linha2 + 1, coluna2 + 1);
    printf("3 maior: %f (linha %d, coluna %d)\n", maior3, linha3 + 1, coluna3 + 1);

    for (int i = 0; i < N; i++) {
        free(matriz[i]);
    }
    free(matriz);
}
void func_16(){
    int N, M;

    printf("Informe o numero de linhas e de colunas da matriz: ");
    scanf("%d %d", &N, &M);

    float **matriz1 = (float**)malloc(sizeof(float*)*N);

    for (int i = 0; i < N; i++)
        matriz1[i] = (float*)malloc(sizeof(float)*M);

    printf("Preenchimento dos valores da matriz:\n");
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            printf("Valor da linha %d, coluna %d: ", i + 1, j + 1);
            scanf("%f", &matriz1[i][j]);
        }
    }

    printf("\nMatriz gerada:\n");
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++)
            printf("%f ", matriz1[i][j]);
        printf("\n");
        }

     float **matriz2 = (float**)malloc(sizeof(float*)*M);

    for (int i = 0; i < M; i++)
        matriz2[i] = (float*)malloc(sizeof(float)*N);

    for (int i = 0; i < M; i++){
        for (int j = 0; j < N; j++)
            matriz2[i][j] = matriz1[j][i];
    }

     printf("\n\nMatriz tranposta gerada:\n");
     for (int i = 0; i < M; i++){
        for (int j = 0; j < N; j++)
            printf("%f ", matriz2[i][j]);
        printf("\n");
     }

    for (int i = 0; i < N; i++){
        free(matriz1[i]);
    }
    free(matriz1);

    for (int i = 0; i < M; i++){
        free(matriz2[i]);
    }
    free(matriz2);
}
void func_17(){
    int tamanhoInicial = 10; // Tamanho inicial do vetor
    int *vetor = (int *)malloc(tamanhoInicial * sizeof(int)); // Alocação inicial

    if (vetor == NULL) {
        printf("Erro ao alocar memória.\n");
        exit (1);
    }

    int contador = 0; // Contador de elementos inseridos
    int numero;

    printf("Digite os numeros (digite 0 para encerrar):\n");

    do {
        printf("Numero %d: ", contador + 1);
        scanf("%d", &numero);

        if (numero != 0) {
            vetor[contador] = numero;
            contador++;

            // Verifica se o vetor está cheio
            if (contador == tamanhoInicial) {
                // Aloca novo vetor com espaço para mais 10 valores
                tamanhoInicial += 10;
                int *novoVetor = (int *)malloc(tamanhoInicial * sizeof(int));

                if (novoVetor == NULL) {
                    printf("Erro ao alocar memória.\n");
                    free(vetor); // Libera memória do vetor original
                    exit (1);
                }

                // Copia os valores do vetor original para o novo vetor
                for (int i = 0; i < contador; i++) {
                    novoVetor[i] = vetor[i];
                }

                // Libera memória do vetor original
                free(vetor);

                // Atualiza o ponteiro para apontar para o novo vetor
                vetor = novoVetor;
            }
        }
    } while (numero != 0);

    printf("\nValores digitados:\n");
    for (int i = 0; i < contador; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Libera memória do vetor final
    free(vetor);
}
void func_18(){
    char *vetor = (char*)malloc(sizeof(char)*1024);
    free(vetor);

    int **matriz = (int**)malloc(sizeof(int*)*10);
    for (int i = 0; i < 10; i++)
        matriz[i] = (int*)malloc(sizeof(int)*10);

    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            printf("Valor da linha %d, coluna %d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++)
            printf("%d ", matriz[i][j]);
        printf("\n");
    }

    for (int i = 0; i < 10; i++)
        free(matriz[i]); //liberação da linha.

    free(matriz); //liberação do ponteiro de ponteiro.

    struct Registro {
        char nome_produto[50];
        int codigo_produto;
        float preco;
    } *registros;

    registros = (struct Registro*)malloc(sizeof(struct Registro)*50);

    if (registros == NULL) {
        printf("Erro ao alocar memória para os registros.\n");
        exit (1);
    }

    free(registros);

    char **matrix = (char**)malloc(sizeof(char)*100);
    for (int i = 0; i < 100; i++)
        matrix[i] = (char*)malloc(sizeof(char)*80);

    for (int i = 0; i < 100; i++)
        free(matrix[i]);
    free(matrix);
}
void func_21(){
    int a, b, c, d;

    printf("Linhas e colunas da matriz 1: ");
    scanf("%d %d", &a, &b);
    printf("Linhas e colunas da matriz 2: ");
    scanf("%d %d", &c, &d);

    if (b != c)
        printf("Erro! Produto impossivel.");

    else {
        int **matriz1 = (int**)malloc(sizeof(int*)*a);
        for (int i = 0; i < a; i++)
            matriz1[i] = (int*)malloc(sizeof(int)*b);

        int **matriz2 = (int**)malloc(sizeof(int*)*c);
        for (int i = 0; i < c; i++)
            matriz2[i] = (int*)malloc(sizeof(int)*d);

        int **matriz3 = (int**)malloc(sizeof(int*)*a);
        for (int i = 0; i < a; i++)
            matriz3[i] = (int*)malloc(sizeof(int)*d);

        printf("Matriz 1:\n");
        for (int i = 0; i < a; i++){
            for (int j = 0; j < b; j++){
                printf("Valor da linha %d, coluna %d: ", i + 1, j + 1);
                scanf("%d", &matriz1[i][j]);
            }
        }

        printf("Matriz 2:\n");
        for (int i = 0; i < c; i++){
            for (int j = 0; j < d; j++){
                printf("Valor da linha %d, coluna %d: ", i + 1, j + 1);
                scanf("%d", &matriz2[i][j]);
            }
        }

        //produto matricial!
        for (int i = 0; i < a; i++){
            for (int j = 0; j < d; j++){
                matriz3[i][j] = 0;
                for (int k = 0; k < b; k++) //b = c, nesse caso.
                    matriz3[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }

        printf("Resultado do produto matricial:\n");
        for (int i = 0; i < a; i++){
            for (int j = 0; j < d; j++)
                printf("%d ", matriz3[i][j]);
        }
        printf("\n");

        for (int i = 0; i < a; i++)
            free(matriz1[i]);
        free(matriz1);

        for (int i = 0; i < c; i++)
            free(matriz2[i]);
        free(matriz2);

        for (int i = 0; i < a; i++)
            free(matriz3[i]);
        free(matriz3);
    }
}

int main(){
    //func_1();
    //func_2();
    //func_3();
    //func_4();
    //func_5();
    func_6();
    //func_7();
    //func_8();
    //func_9();
    //func_10();
    //func_11();
    //func_12();
    //func_13();
    //func_14();
    //func_15();
    //func_16();
    //func_17();
    //func_18();
    //func_21();

    return 0;
}
