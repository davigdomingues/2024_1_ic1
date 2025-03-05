#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h> // Para usar a função isalpha -> biblioteca utilizada nas questões 3, 4 e e 7!
#include <math.h>
#define MAX 10

void func_1();
void func_2();
void func_3();
void func_4();
void func_5();
void func_7(); //revisar!!!!! (conceito de codigo bom)
void func_8();
void func_8();
void func_9();
void func_10();
void func_11();
void func_12(); //resolução bem avancada..... (--> funções que nunca nem ouvi falar.....)
void func_13();
void func_14();
void func_15(); //(utiliza a estrutura básica da func_14();)
void func_16(); //REVISAR --> conceito muito bom de conversão binária.
void func_17(); //DUVIDA!!
void func_18();
void func_19();
void func_20();
void func_21();
void func_22();
void func_23();
void func_24();

typedef struct { // struct da questao 10.
    char cidade[41];
    int habitantes;
} informacoes;
typedef struct { // struct da questao 13.
    char nome[41];
    int telefone;
} conteudo;
typedef struct { //struct da questao 18.
    char nome[41];
    float preco;
} dados;
typedef struct { //struct da questao 19.
    char nome[40];
    float resultado;
} Notas;
typedef struct { //struct da questao 20.
    char nome[41];
    float nota;
} Resultado;
typedef struct { //struct da questao 21.
    char nome[41];
    float nota;
} Matriculados;
typedef struct { //struct da questao 22.
    char nome[41];
    float nota1, nota2, nota3;
} Alunos;
typedef struct { //struct da questao 23.
    char nome_funcionario[41];
    float anos_servico;
} Funcionarios;
int main(){
    //func_1();
    //func_2();
    //func_3();
    //func_4();
    //func_5();
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
    //func_19();
    //func_20();
    //func_21();
    //func_22();
    //func_23();
    func_24();
    return 0;
}
void func_1(){
    FILE *p;
    p = fopen("arq1.txt", "w");
    char ch;

    if (p == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        exit (1);
    }

    while (ch != '0'){
        ch = getchar();
        if (ch != '0')
            fputc(ch, p);
    }
    fclose(p);

    printf("\n");
    p = fopen("arq.txt", "r");

    while (ch != EOF){
        ch = fgetc(p);
        if (ch != EOF)
            fputc(ch, stdout);
    }
    fclose(p);
}
void func_2(){
    FILE *p;
    p = fopen("arq2.txt", "w");
    char ch;
    int count;

    if (p == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        exit (1);
    }

    printf("Informe o texto a ser lido no arquivo (digite 0 para interromper a leitura de caracteres):\n\n");
    while(ch != '0'){
        ch = getchar();
        if (ch != '0')
            fputc(ch, p);
        if (ch == '\n')
            count++;
    }

    fclose(p);
    printf("\n\nO total de linhas presentes no arquivo de texto informado eh igual a %d", count + 1);
}
void func_3(){
    FILE *p;
    p = fopen("arq3.txt", "w");
    char ch = ' ';
    int count_numero_vogais = 0;

    if (p == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        exit (1);
    }

    printf("Informe o texto que deseja escrever para o arquivo:\n\n");

    while (ch != '0') {
        ch = getchar();
        if (ch != '0') {
            fputc(ch, p);
            if (isalpha(ch)) { // Verifica se o caractere é uma letra
                ch = tolower(ch); // Converte para minúscula para facilitar a verificação
                if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                    count_numero_vogais++;
            }
        }
    }
    fclose(p);

    printf("\n\nO numero de vogais presente no texto informado eh: %d", count_numero_vogais);
}
void func_4(){
    FILE *p;
    p = fopen("arq4.txt", "w");
    if (p == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        exit (1);
    }

    char ch = ' ';
    int count_numero_vogais = 0, count_numero_consoantes = 0;

    printf("Informe o texto que deseja escrever para o arquivo (digite '0' para encerrar):\n\n");

    while (ch != '0') {
        ch = getchar();
        if (ch != '0') {
            fputc(ch, p);
            if (isalpha(ch)) { // Verifica se o caractere é uma letra
                ch = tolower(ch); // Converte para minúscula para facilitar a verificação
                if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                    count_numero_vogais++;
                else
                    count_numero_consoantes++;
            }
        }
    }
    fclose(p);

    printf("\n\nO número de vogais e de consoantes presentes no texto informado é, respectivamente: %d, %d\n", count_numero_vogais, count_numero_consoantes);

}
void func_5(){
    FILE *p;
    p = fopen("arq5.txt", "w");
    char ch = ' ', ch_escolhido;
    int count_ch_escolhido  = 0;

    if (p == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        exit (1);
    }

    printf("Digite um texto qualquer para ser lido em arquivo:\n\n");
    while (ch != '0'){
        ch = getchar();
        if (ch != '0')
            fputc(ch, p);
    }
    fclose(p);

    printf("\n\nQual caracter deseja saber o total de vezes que aparece em seu texto? ");
    scanf(" %c", &ch_escolhido);

    p = fopen("arq5.txt", "r");
    while ((ch = fgetc(p)) != EOF){
        if (ch == ch_escolhido)
            count_ch_escolhido++;
    }

    printf("\n\nO total de vezes que ele aparece eh igual a: %d", count_ch_escolhido);

/*OBS: diferença entre utilizar ch != EOF e ((ch = fgetc(arquivo)) != EOF):
a) ch != EOF:
Nesse caso, você está comparando diretamente o valor de ch com EOF. Isso é seguro, desde que você esteja armazenando o resultado
em uma variável do tipo int.
Como EOF é definido como um valor negativo (geralmente -1), a comparação funciona corretamente.
No entanto, se você estiver usando uma variável do tipo char, pode haver problemas. Por exemplo, se o tipo char for assinado (o que é comum),
o caractere com valor decimal 255 ('\377' ou '\xff' em C) será interpretado erroneamente como EOF, encerrando prematuramente a entrada1.

b) ((ch = fgetc(arquivo)) != EOF):
Aqui, você está lendo um caractere do arquivo usando fgetc(arquivo) e, em seguida, comparando o resultado com EOF.
Essa abordagem é mais segura, pois garante que o valor de EOF não seja confundido com um caractere válido.
O resultado de fgetc é armazenado em uma variável do tipo int, evitando problemas de interpretação errônea.

Em resumo, a segunda abordagem é mais robusta e recomendada, pois evita ambiguidades e problemas de interpretação.
*/
}
void substituir_vogais_por_asteriscos(FILE *arquivo_entrada, FILE *arquivo_saida) {
    char caractere;
    while ((caractere = fgetc(arquivo_entrada)) != EOF) {
        if (isalpha(caractere)) {
            char vogal = tolower(caractere);
            if (vogal == 'a' || vogal == 'e' || vogal == 'i' || vogal == 'o' || vogal == 'u') {
                fputc('*', arquivo_saida);
            } else {
                fputc(caractere, arquivo_saida);
            }
        } else {
            fputc(caractere, arquivo_saida);
        }
    }
}
void func_7(){
    char nome_arquivo_entrada[100];
    char nome_arquivo_saida[100];

    printf("Digite o nome do arquivo de entrada: ");
    scanf("%s", nome_arquivo_entrada);

    FILE *arquivo_entrada = fopen(nome_arquivo_entrada, "r");
    if (arquivo_entrada == NULL) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        exit (1);
    }

    printf("Digite o nome do arquivo de saída: ");
    scanf("%s", nome_arquivo_saida);

    FILE *arquivo_saida = fopen(nome_arquivo_saida, "w");
    if (arquivo_saida == NULL) {
        printf("Erro ao criar o arquivo de saída.\n");
        fclose(arquivo_entrada);
        exit (1);
    }

    substituir_vogais_por_asteriscos(arquivo_entrada, arquivo_saida);

    printf("Arquivo '%s' criado com sucesso!\n", nome_arquivo_saida);

    fclose(arquivo_entrada);
    fclose(arquivo_saida);
}
void func_8(){
    char nome_entrada[100];
    char nome_saida[100];
    char ch;

    printf("Qual o nome do arquivo a ser aberto? ");
    scanf("%s", nome_entrada);

    FILE *parquivo1 = fopen(nome_entrada, "r");
    if (parquivo1 == NULL){
        printf("Erro.");
        exit (1);
    }

    printf("\nQual o nome do arquivo a ser atribuido a operacao? ");
    scanf("%s", nome_saida);
    FILE *parquivo2 = fopen(nome_saida, "w");
    if (parquivo2 == NULL){
        printf("Erro.");
        exit (1);
    }

    while ((ch = fgetc(parquivo1)) != EOF){
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            ch = toupper(ch);
            fputc(ch, parquivo2);
        }
        else
            fputc(ch, parquivo2);
    }

    fclose(parquivo1);
    fclose(parquivo2);

    printf("\n\nOperacao realizada com sucesso!\n");
}
void func_9(){
    char nome_arquivo_1[256], nome_arquivo_2[256], ch;

    printf("Nome do arquivo 1: ");
    scanf("%s", nome_arquivo_1);
    printf("\nNome do arquivo 2: ");
    scanf("%s", nome_arquivo_2);

    FILE *p1 = fopen(nome_arquivo_1, "r");
    FILE *p2 = fopen(nome_arquivo_2, "r");
    FILE *p3 = fopen("arq9.txt", "w");

    while ((ch = fgetc(p1)) != EOF)
        fputc(ch, p3);

    fputc('\n', p3);

    while ((ch = fgetc(p2)) != EOF)
        fputc(ch, p3);

    printf("\n\nArquivo criado com sucesso!");

    fclose(p1);
    fclose(p2);
    fclose(p3);
}
void func_10(){
    char nome_arquivo_1[256], nome_arquivo_2[256];
    int total;

    printf("Deseja comparar quantas cidades? ");
    scanf("%d", &total);
    informacoes dados[total];

    printf("\nNome do arquivo 1: ");
    scanf("%s", nome_arquivo_1);
    printf("\nNome do arquivo 2: ");
    scanf("%s", nome_arquivo_2);

    for (int i = 0; i < total; i++){
        printf("Cidade %d: ", i + 1);
        scanf("%s", dados[i].cidade);
        printf("Total de habitantes: ");
        scanf("%d", &dados[i].habitantes);
        printf("\n");
    }

    FILE *p1 = fopen(nome_arquivo_1, "w");
    int i = 0;

    while (1){
        if (i == total)
            break;
        else{
            fputs(dados[i].cidade, p1);
            fprintf(p1, " %d\n", dados[i].habitantes);
        }
        i++;
    }
    fclose(p1);

    FILE *p2 = fopen(nome_arquivo_1, "r");
    int maiorPopulacao = dados[0].habitantes, j = 0, indice;

    while (fscanf(p2, "%40s %d", dados[j].cidade, &dados[j].habitantes) != EOF) {
        if (dados[j].habitantes > maiorPopulacao) {
            maiorPopulacao = dados[j].habitantes;
            indice = j;
        }
        j++;
    }
    fclose(p2);

    FILE *p3 = fopen(nome_arquivo_2, "w");

    fprintf(p3, "%s %d\n", dados[indice].cidade, maiorPopulacao);
    fclose(p3);

    printf("\n\nCidade mais populosa escrita em %s com sucesso!\n", nome_arquivo_2);
}
void func_11(){
    char nome_arquivo[256], ch, ch_escolhido;
    int count = 0;

    printf("Nome do arquivo: ");
    scanf("%s", nome_arquivo);
    printf("\nLetra: ");
    scanf(" %c", &ch_escolhido); /* Quando você usa scanf("%c", &ch_escolhido);, ele lê o caractere de nova linha (geralmente o Enter)
    que foi deixado no buffer após a leitura anterior. Isso pode causar resultados inesperados.

    Para resolver isso, você pode adicionar um espaço em branco antes do %c na função scanf (scanf(" %c", &ch_escolhido);)
    Dessa forma, o espaço em branco irá consumir o caractere de nova linha pendente, e a leitura da letra escolhida funcionará corretamente.*/

    FILE *p = fopen(nome_arquivo, "r");
    while ((ch = fgetc(p)) != EOF){
        if (ch == ch_escolhido)
            count++;
    }
    fclose(p);

    printf("\nA letra %c aparece %d vezes no arquivo %s\n", ch_escolhido, count, nome_arquivo);
}
//resposta encontrada para a questão 12
/*int contarPalavras(char *linha) {
    int palavras = 0;
    char *delimitadores = " \t\r\n\v\f";
    char *temp = strdup(linha); // Cria uma cópia temporária

    char *token = strtok(temp, delimitadores);
    while (token != NULL) {
        palavras++;
        token = strtok(NULL, delimitadores);
    }

    free(temp); // Libera a cópia temporária
    return palavras;
}
void func_12(char *argv[]) {
    FILE *arquivo;
    size_t tamanho = 0;
    int numLinhas = 0, numPalavras = 0;
    char *linha = NULL;

    arquivo = fopen(argv[1], "r");
    if (arquivo == NULL) {
        printf("Erro na abertura do arquivo.\n");
        exit (1);
    }

    while (getline(&linha, &tamanho, arquivo) != -1) {
        linha[strlen(linha) - 1] = '\0'; // Remove o caractere de nova linha
        numPalavras += contarPalavras(linha);
        numLinhas++;
    }

    printf("Número de Linhas: %d\n", numLinhas);
    printf("Número de Palavras: %d\n", numPalavras);

    if (linha) {
        free(linha);
    }
    fclose(arquivo);
}*/
void func_13(){
    int quantidade;
    printf("Total de usuarios do sistema: ");
    scanf("%d", &quantidade);
    printf("\n");

    conteudo dados[quantidade];
    for (int i = 0; i < quantidade; i++){
        printf("Nome %d: ", i + 1);
        scanf("%s", dados[i].nome);

        printf("Numero de telefone %d: ", i + 1);
        scanf("%d", &dados[i].telefone);

        while (dados[i].telefone/(pow(10, 9)) == 0 || dados[i].telefone % 10 != 0){
            printf("\nO numero deve terminar com zero e ter 9 digitos....\n");
            printf("Numero de telefone %d: ", i + 1);
            scanf("%d", &dados[i].telefone);
        }
    }

    FILE *p = fopen("arq13.txt", "w");
    for (int i = 0; i < quantidade; i++){
        fputs(dados[i].nome, p);
        fprintf(p, " %d\n", dados[i].telefone);
    }
    fclose(p);

    puts("Arquivo criado com sucesso!");
}
void func_14(){
    int dia, mes, ano;
    char nome[41];
    FILE *p = fopen("arq14.txt", "r");
    FILE *p2 = fopen("arq14_1.txt", "w");

    while (fscanf(p, "%s %d %d %d", nome, &dia, &mes, &ano) != EOF){
        int idade = 2024 - ano;
        fprintf(p2, "%s %d\n", nome, idade);
    }
    fclose(p);
    fclose(p2);

    printf("Arquivo criado com sucesso!");
}
void func_15(){
    int dia, mes, ano;
    char nome[41];
    FILE *p = fopen("arq14.txt", "r");
    FILE *p2 = fopen("arq15_1.txt", "w");

    while (fscanf(p, "%s %d %d %d", nome, &dia, &mes, &ano) != EOF){
        int idade = 2024 - ano;
        fprintf(p2, "%s:", nome);
        if (idade < 18)
            fprintf(p2, " menor de idade\n");
        else if (idade == 18)
            fprintf(p2, " entrando na maioridade\n");
        else
            fprintf(p2, " maior de idade\n");
    }
    fclose(p);
    fclose(p2);

    printf("Arquivo criado com sucesso!");
}
void func_16(){
    int array[MAX];
    char vetor_binario[MAX][9]; // Cada posição armazena um número binário de 8 bits
    for (int i = 0; i < MAX; i++){
        printf("Valor %d: ", i + 1);
        scanf("%d", array + i);
    }

    // Converte e armazena os números em binário
    for (int i = 0; i < MAX; i++) {
        for (int j = 7; j >= 0; j--) {
            vetor_binario[i][j] = (array[i] & 1) + '0'; // Obtém o bit menos significativo
            array[i] >>= 1; // Desloca para a direita
        }
        vetor_binario[i][8] = '\0'; // Adiciona o caractere nulo no final
    }

    FILE *p = fopen("arq16.txt", "w");
    if (p == NULL){
        printf("Erro ao abrir o arquivo!");
        exit (1);
    }

    for (int i = 0; i < MAX; i++)
        fprintf(p, "%s\n", vetor_binario[i]);
    printf("Arquivo criado com sucesso!");
    fclose(p);
}
void func_17(){
    FILE *p = fopen("arq17.txt", "r");
    char ch;
    int i = 0, j = 0, matriz[i][j], quantidade;

    while ((ch = getc(p)) != EOF){
        if (ch != ' ' && ch != '\n'){
            matriz[i][j] = ch;
            j++;
        }
        if (ch == '\n')
            i++;
    }

    fclose(p);

    printf("Considerando o arq17.txt existente, quantas posicoes deseja que sejam anuladas da matriz? ");
    scanf("%d", &quantidade);

    int linha[quantidade], coluna[quantidade];
    for (int k = 0; k < quantidade; k++){
        printf("Valor %d --> Linha ", k + 1);
        scanf("%d", &linha[k]);
        printf("Valor %d --> Coluna ", k + 1);
        scanf("%d", &coluna[k]);
        printf("\n");
    }

    for (int k = 0; k < i + 1; k++){ // i + 1, pois o último '\n' é dito como EOF.
        for (int l = 0; l < j; l++){
                for (int a = 0; a < quantidade; a++){
                    if (k == linha[a] - 1 && l == coluna[a] - 1) // -1, pois a contagem cotidiana para matrizes começa no 1, não no 0.
                        matriz[k][l] = 0;
                    else
                        matriz[k][l] = 1;
                }
        }
    }

    FILE *p2 = fopen("arq17_1.txt", "w");
    if (p2 == NULL){
        printf("Erro de abertura de arquivo!");
        exit (1);
    }

     for (int k = 0; k < i + 1; k++){
        for (int l = 0; l < j; l++){
            fprintf(p2, "%d ", matriz[k][l]);
        }
        fprintf(p2, "\n");
     }
     printf("Arquivo criado com sucesso!");

/*rascunho da questao 17:
#include <stdio.h>
#include <stdlib.h>

#define MAX 100 // Tamanho máximo para a matriz

int main() {
    int linhas, colunas, quantidade;
    char arquivo[100]; // Nome do arquivo (ajuste conforme necessário)

    printf("Digite o nome do arquivo: ");
    scanf("%s", arquivo);

    FILE *p = fopen(arquivo, "r");
    if (p == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        exit(1);
    }

    fscanf(p, "%d %d %d", &linhas, &colunas, &quantidade);

    int matriz[MAX][MAX];
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matriz[i][j] = 1; // Preenche com 1 inicialmente
        }
    }

    for (int k = 0; k < quantidade; k++) {
        int linha, coluna;
        fscanf(p, "%d %d", &linha, &coluna);
        matriz[linha - 1][coluna - 1] = 0; // Zera a posição especificada
    }

    fclose(p);

    // Grava a matriz no novo arquivo
    FILE *p2 = fopen("matriz_resultante.txt", "w");
    if (p2 == NULL) {
        printf("Erro ao criar o arquivo de saída!\n");
        exit(1);
    }

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            fprintf(p2, "%d ", matriz[i][j]);
        }
        fprintf(p2, "\n");
    }

    printf("Matriz resultante gravada no arquivo matriz_resultante.txt!\n");
    fclose(p2);

    return 0;
}

rascunho 2:
void ler_matriz(FILE *arquivo, int *linhas, int *colunas, int *qtd_anulacoes, int posicoes_anuladas[][2]) {
    fscanf(arquivo, "%d %d %d", linhas, colunas, qtd_anulacoes);
    for (int i = 0; i < *qtd_anulacoes; i++) {
        fscanf(arquivo, "%d %d", &posicoes_anuladas[i][0], &posicoes_anuladas[i][1]);
    }
}

void criar_matriz(int linhas, int colunas, int qtd_anulacoes, int posicoes_anuladas[][2], int matriz[][colunas]) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matriz[i][j] = 1;
        }
    }
    for (int i = 0; i < qtd_anulacoes; i++) {
        int linha = posicoes_anuladas[i][0];
        int coluna = posicoes_anuladas[i][1];
        matriz[linha][coluna] = 0;
    }
}

void escrever_matriz(FILE *arquivo, int linhas, int colunas, int matriz[][colunas]) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            fprintf(arquivo, "%d ", matriz[i][j]);
        }
        fprintf(arquivo, "\n");
    }
}

int main() {
    FILE *entrada = fopen("arq17.txt", "r");
    FILE *saida = fopen("arq17_1.txt", "w");

    int linhas, colunas, qtd_anulacoes;
    fscanf(entrada, "%d %d %d", &linhas, &colunas, &qtd_anulacoes);

    int posicoes_anuladas[qtd_anulacoes][2];
    for (int i = 0; i < qtd_anulacoes; i++) {
        fscanf(entrada, "%d %d", &posicoes_anuladas[i][0], &posicoes_anuladas[i][1]);
    }

    int matriz[linhas][colunas];
    criar_matriz(linhas, colunas, qtd_anulacoes, posicoes_anuladas, matriz);
    escrever_matriz(saida, linhas, colunas, matriz);

    printf("Matriz resultante foi salva no arquivo 'arq17_1.txt'.\n");

    fclose(entrada);
    fclose(saida);
    return 0;
}
*/
}
void func_18(){
    FILE *p = fopen("arq18.txt", "r");
    dados produtos[MAX];
    int i = 0;
    while (fscanf(p, "%s %f", produtos[i].nome, &produtos[i].preco) == 2)
        i++;

    float media = 0;
    for (int j = 0; j < i; j++)
        media += produtos[j].preco;

    if (i > 0)
        printf("A media dos precos informados no arquivo 'arq18.txt' eh: %f", media/i);
    else
        printf("O arquivo informado nao possui produto algum, media : 0");
    fclose(p);
}
void func_19(){
    FILE *p = fopen("arq19.txt", "r");
    if (p == NULL){
        printf("Erro!");
        exit (1);
    }
    Notas notas[100];
    int i = 0, count = 0;

    while (fscanf(p, "NOME: %s NOTA: %f", notas[i].nome, &notas[i].resultado) == 2){
        i++;
        count++;
    }
    fclose(p);

    float maior = notas[0].resultado;
    int fim = 0;
    for (int j = 0; j < count; j++){
        if (notas[j].resultado > maior){
            maior = notas[j].resultado;
            fim = j;
        }
    }

    printf("NOME: %s NOTA: %f", notas[fim].nome, notas[fim].resultado);

/*Resolução alternativa:
typedef struct {
    char nome[50];
    float nota;
} Aluno;

void func_19(){
    FILE *arquivo = fopen("alunos.txt", "r");
    if (arquivo == NULL) {
        printf("Erro na abertura do arquivo.\n");
        return 1;
    }

    Aluno aluno;
    Aluno melhorAluno;
    float maiorNota = 0.0;

    while (fscanf(arquivo, "NOME: %s NOTA: %f", aluno.nome, &aluno.nota) == 2) {
        if (aluno.nota > maiorNota) {
            maiorNota = aluno.nota;
            melhorAluno = aluno;
        }
    }

    printf("Aluno com a maior nota:\n");
    printf("Nome: %s\nNota: %.1f\n", melhorAluno.nome, maiorNota);

    fclose(arquivo);
} */
}
void func_20(){
    int total;
    printf("Qual o total de alunos presentes na turma? ");
    scanf("%d", &total);

    Resultado *aluno = (Resultado *)malloc(total*sizeof(Resultado));

    for (int i = 0; i < total; i++){
        printf("Nome do aluno %d: ", i + 1);
        scanf(" %40[^\n]", aluno[i].nome); // Parâmetro formal que lê até 40 caracteres (ignora espaços em branco)
        printf("Nota: ");
        scanf("%f", &aluno[i].nota);
        printf("\n");
    }

    FILE *p = fopen("arq20.txt", "w");
    if (p == NULL){
        printf("Erro!");
        exit (1);
    }

    for (int i = 0; i < total; i++)
        fprintf(p, "NOME: %s\tNOTA: %.2f\n", aluno[i].nome, aluno[i].nota);

    fclose(p);
    free(aluno);

    printf("Dados gravados com sucesso no arquivo texto 'arq20.txt'!");
}
void func_21(){
    int total;
    printf("Informe o total de alunos presentes na turma: ");
    scanf("%d", &total);

    Matriculados *alunos = (Matriculados *)malloc(sizeof(Matriculados)*total);
    printf("\n");
    for (int i = 0; i < total; i++){
        printf("Nome do aluno %d: ", i + 1);
        scanf(" %40[^\n]", alunos[i].nome); // Parâmetro formal que lê até 40 caracteres (ignora espaços em branco)
        printf("Nota: ");
        scanf("%f", &alunos[i].nota);
        printf("\n");
    }

    FILE *p = fopen("arq21.bin", "w");
    for (int i = 0; i < total; i++)
        fprintf(p, "Nome: %s\tNota final: %f\n", alunos[i].nome, alunos[i].nota);
    fclose(p);

    FILE *p2 = fopen("arq21.bin", "r");
    float maior = alunos[0].nota;
    int a;

    for (int i = 0; i < total; i++){
        if (alunos[i].nota > maior){
            maior = alunos[i].nota;
            a = i;
        }
    }
    printf("Aluno com maior nota: %s\nNota: %f\n", alunos[a].nome, alunos[a].nota);
    fclose(p2);
}
void func_22(){
    char nome1[41], nome2[41];
    Alunos *alunos = (Alunos *)malloc(sizeof(Alunos)*MAX);

    printf("Nome do arquivo 1: ");
    scanf("%s", nome1);

    printf("Nome do arquivo 2: ");
    scanf("%s", nome2);

    FILE *p1 = fopen(nome1, "r");
    int i = 0;
    while (fscanf(p1, "%s %f %f %f", alunos[i].nome, &alunos[i].nota1, &alunos[i].nota2, &alunos[i].nota3) == 4)
        i++;

    FILE *p2 = fopen(nome2, "w");
    float aux;
    for (int j = 0; j < i; j++){
        float a = alunos[j].nota1, b = alunos[j].nota2, c = alunos[j].nota3;
        if (a > c){
            aux = a;
            a = c;
            c = aux;
        }

        if (a > b){
            aux = a;
            a = b;
            b = aux;
        }

        if (b > c){
            aux = b;
            b = c;
            c = aux;
        }

        fprintf(p2, "%s %f %f %f\n", alunos[i].nome, a, b, c);
    }

    printf("Arquivo criado com sucesso!");
    fclose(p1);
    fclose(p2);
}
void func_23(){
    int limite;
    printf("Quantos funcionarios deseja preencher as informacoes? ");
    scanf("%d", &limite);
    printf("\n");
    Funcionarios *funcionarios = (Funcionarios *)malloc(sizeof(Funcionarios)*limite);

    FILE *p1 = fopen("emp.txt", "w");
    for (int i = 0; i < limite; i++){
        printf("Nome do funcionario %d: ", i + 1);
        scanf("%s", funcionarios[i].nome_funcionario);
        fputs(funcionarios[i].nome_funcionario, p1);
        printf ("Tempo de servico (em anos): ");
        scanf("%f", &funcionarios[i].anos_servico);
        fprintf(p1, " %.2f\n", funcionarios[i].anos_servico);
        printf("\n");
    }
    fclose(p1);
    printf("\nArquivo emp.txt criado com sucesso!\n\n");

    FILE *p2 = fopen("emp.txt", "r");
    int j = 0;
    while (fscanf(p2, "%s %f", funcionarios[j].nome_funcionario, &funcionarios[j].anos_servico) == 2){
        printf("%s %.2f\n", funcionarios[j].nome_funcionario, funcionarios[j].anos_servico);
        j++;
    }
    fclose(p2);
}
void func_24(){

}
