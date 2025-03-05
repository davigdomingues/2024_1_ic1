#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void func_1();
void func_2();
void func_3();
void func_4();
void func_5();
void func_6();
void func_8();
void func_10();//PULEI (resolvido em monitoria)
void func_11();
void func_12();
void func_13();//DIFICULDADE!!
void func_14();
void func_15();//DIFICULDADE!!
void func_16();
void func_17();
void func_18();//Levar para a monitoria....

    typedef struct { //struct da questao 18
    int codigo;
    char nome[16];
    float preco;
    int quantidade;
} Produto;

void func_1(){
    struct data {
        int ano;
        int mes;
        int dia;
    };

    struct horario {
        int hora;
        int minutos;
        int segundos;
    };

    struct compromisso {
        struct horario;
        struct data;
        char descricao_compromisso[256];
    };
}
void func_2(){
    struct dados {
        char nome[50];
        char endereco[20];
        int idade;
    } informacoes;

    printf("Insercao de dados:\n");
    printf("Qual o nome da pessoa? ");
    scanf("%s", informacoes.nome);
    printf("\nQual o endereco em que ela mora? ");
    scanf("%s", informacoes.endereco);
    printf("\nQual a idade dela? ");
    scanf("%d", &informacoes.idade);

    printf("\nDados informados: nome: %s, endereco: %s, idade: %d",
           informacoes.nome,
           informacoes.endereco,
           informacoes.idade);
}
void func_3(){
    struct aluno {
        char nome[50];
        int matricula;
        char curso[20];
    } *informacoes;

    informacoes = (struct aluno*)malloc(sizeof(struct aluno)*5);

    printf("Insercao de dados:\n");
    for (int i = 0; i < 5; i++){
        printf("Nome do aluno %d: ", i + 1);
        scanf("%s", informacoes[i].nome);

        printf("Matricula do aluno %d: ", i + 1);
        scanf("%d", &informacoes[i].matricula);

        printf("Curso do aluno %d: ", i + 1);
        scanf("%s", informacoes[i].curso);
    }

    for (int i = 0; i < 5; i++){
        printf("Aluno %d: nome: %s, matricula: %d, curso: %s", i + 1,
               informacoes[i].nome,
               informacoes[i].matricula,
               informacoes[i].curso);
        printf("\n");
    }

    free(informacoes);
}
void func_4(){
    struct aluno {
        char nome[50];
        int matricula;
        float p1;
        float p2;
        float p3;
    } *informacoes;

    informacoes = (struct aluno*)malloc(sizeof(struct aluno)*5);

    printf("Insercao de dados:\n");
    for (int i = 0; i < 5; i++){
        printf("Nome do aluno %d: ", i + 1);
        scanf("%s", informacoes[i].nome);

        printf("Matricula do aluno %d: ", i + 1);
        scanf("%d", &informacoes[i].matricula);

        printf("Nota da primeira prova do aluno %d: ", i + 1);
        scanf("%f", &informacoes[i].p1);

        printf("Nota da segunda prova do aluno %d: ", i + 1);
        scanf("%f", &informacoes[i].p2);

        printf("Nota da terceira prova do aluno %d: ", i + 1);
        scanf("%f", &informacoes[i].p3);
    }

    float maior_nota_p1 = informacoes[0].p1;
    for (int i = 0; i < 5; i++){
        if (informacoes[i].p1 > maior_nota_p1)
            maior_nota_p1 = informacoes[i].p1;
    }

    float maior_media_geral = (informacoes[0].p1 + informacoes[0].p2 + informacoes[0].p3)/3;
    float menor_media_geral = (informacoes[0].p1 + informacoes[0].p2 + informacoes[0].p3)/3;
    for (int i = 0; i < 5; i++){
        if ((informacoes[i].p1 + informacoes[i].p2 + informacoes[i].p3)/3 > maior_media_geral)
            maior_media_geral = (informacoes[i].p1 + informacoes[i].p2 + informacoes[i].p3)/3;
        if ((informacoes[i].p1 + informacoes[i].p2 + informacoes[i].p3)/3 < menor_media_geral)
            menor_media_geral = (informacoes[i].p1 + informacoes[i].p2 + informacoes[i].p3)/3;
    }

    printf("Dados obtidos organizados a seguir:\n");
    for (int i = 0; i < 5; i++){
        printf("Aluno %d: nome: %s , matricula: %d\n", i + 1, informacoes[i].nome, informacoes[i].matricula);
        printf("Notas: p1: %f , p2: %f , p3: %f\n", informacoes[i].p1, informacoes[i].p2, informacoes[i].p3);

        if ((informacoes[i].p1 + informacoes[i].p2 + informacoes[i].p3)/3 >= 6)
            printf("Status do aluno %d: aprovado\n", i + 1);
        else
            printf("Status do aluno %d: repovado\n", i + 1);
        printf("\n");

        if ((informacoes[i].p1 + informacoes[i].p2 + informacoes[i].p3)/3 == menor_media_geral)
            printf("Aluno %d possui a menor media geral das notas das provas!", i);

        if ((informacoes[i].p1 + informacoes[i].p2 + informacoes[i].p3)/3 == maior_media_geral)
            printf("Aluno %d possui a maior media geral das notas das provas! Parabens!!", i + 1);
    }

    free(informacoes);
}
void func_5(){
    struct vetor {
        int x;
        int y;
        int z;
    } *coordenada;

    coordenada = (struct vetor*)malloc(sizeof(struct vetor)*2);

    for (int i = 0; i < 2; i++){
        printf("Dados do vetor %d: ", i + 1);
        scanf("%d %d %d", &coordenada[i].x, &coordenada[i].y, &coordenada[i].z);
        printf("\n");
    }

    printf("Soma vetorial no R3:\n");
    int x_final = 0, y_final = 0, z_final = 0;
    for (int i = 0; i < 2; i++){
        x_final += coordenada[i].x;
        y_final += coordenada[i].y;
        z_final += coordenada[i].z;
    }
    printf("Vetor resultante: %d %d %d\n", x_final, y_final, z_final);

    free(coordenada);
}
void func_6(){
    struct aluno {
        int matricula;
        char nome[50];
        int codigo_disciplina;
        float nota1;
        float nota2;
    } *informacoes;

    informacoes = (struct aluno*)malloc(sizeof(struct aluno)*10);

    printf("Preenchimento de informacoes:\n\n");
    for (int i = 0; i < 10; i++){
        printf("Aluno %d:\n", i + 1);

        printf("Matricula: ");
        scanf("%d", &informacoes[i].matricula);

        printf("Nome: ");
        scanf("%s", informacoes[i].nome);

        printf("Codigo da disciplina: ");
        scanf("%d", &informacoes[i].codigo_disciplina);

        printf("Nota da primeira prova: ");
        scanf("%f", &informacoes[i].nota1);

        printf("Nota da segunda prova: ");
        scanf("%f", &informacoes[i].nota2);

        printf("\n");
    }

    float media_ponderada = 0;
    printf("Tabela de dados:\n");
    for (int i = 0; i < 10; i++){
        media_ponderada = (informacoes[i].nota1 + informacoes[i].nota2*2)/3;
        printf("Aluno %d: %d, %s, %d, %f\n", i + 1, informacoes[i].matricula, informacoes[i].nome,
               informacoes[i].codigo_disciplina, media_ponderada);
    }

    free(informacoes);
}
void func_8(){
    struct dados {
        char nome[50];
        int idade;
        char sexo[2];
        int CPF;
        char data_nascimento[11];
        int codigo_setor; //0 a 99.
        char cargo[30];
        float salario;
    } *informacoes;

    int limite;
    printf("Deseja inserir os dados de quantos funcionarios? ");
    scanf("%d", &limite);
    printf("\n");

    informacoes = (struct dados*)malloc(sizeof(struct dados)*limite);

    for (int i = 0; i < limite; i++){
    printf("Nome do funcionario %d: ", i +1);
    scanf("%s", informacoes[i].nome);

    printf("Idade do funcionario %d: ", i +1);
    scanf("%d", &informacoes[i].idade);

    printf("Sexo do funcionario %d (M - masculino, F - feminino, NF - nao informado): ", i +1);
    scanf("%s", informacoes[i].sexo);

    printf("CPF do funcionario %d: ", i +1);
    scanf("%d", &informacoes[i].CPF);

    printf("Data de nascimento do funcionario %d (dia/mes/ano): ", i +1);
    scanf("%s", informacoes[i].data_nascimento);

    printf("Codigo do setor de atuacao do funcionario %d (0 - 99): ", i +1);
    scanf("%d", &informacoes[i].codigo_setor);

    printf("Cargo do funcionario %d: ", i +1);
    scanf("%s", informacoes[i].cargo);

    printf("Salario do funcionario %d: ", i +1);
    scanf("%f", &informacoes[i].salario);

    printf("\n");
    }

    printf("\nDados informados:\n");
    for (int i = 0; i < limite; i++)
    printf("Funcionario %d: %s\t%d\t%s\t%d\t%s\t%d\t%s\t%f\n", i + 1, informacoes[i].nome, informacoes[i].idade, informacoes[i].sexo, informacoes[i].CPF,
           informacoes[i].data_nascimento, informacoes[i].codigo_setor, informacoes[i].cargo, informacoes[i].salario);

    free(informacoes);
}
void func_10(){
    int N = 5;

    typedef struct {
        char nome[50];
        char endereco[200];
        char telefone[25];
    } Pessoa;

    Pessoa *pessoas = (Pessoa*)malloc(sizeof(Pessoa)*N); //criação de um ponteiro "pessoas", que criará um vetor do tipo Pessoa, que é uma struct.

    for (int i = 0; i < N; i++){
        printf("Nome da pessoa %d: ", i + 1);
        scanf("%[^\n]", pessoas[i].nome);        //esse comando le strings com espaço
        getchar();
        printf("Endereco da pessoa %d: ", i + 1);
        scanf("%[^\n]", pessoas[i].endereco);
        getchar();
        printf("Telefone da pessoa %d: ", i + 1);
        scanf("%[^\n]", pessoas[i].telefone);
        getchar();
        printf("\n");
    }

    // ==========================================================
    // ORDENACAO DO VETOR DE STRUCTS
    //===========================================================
    Pessoa aux_pessoa;
    for (int i = 0; i < N-1; i++)
        for (int j = i+1; j < N; j++)
            if (strcmp(pessoas[i].nome, pessoas[j].nome) > 0) {
                // copia i para aux
                strcpy(aux_pessoa.nome, pessoas[i].nome);
                strcpy(aux_pessoa.endereco, pessoas[i].endereco);
                strcpy(aux_pessoa.telefone, pessoas[i].telefone);
                // copia j para i
                strcpy(pessoas[i].nome, pessoas[j].nome);
                strcpy(pessoas[i].endereco, pessoas[j].endereco);
                strcpy(pessoas[i].telefone, pessoas[j].telefone);
                // copia aux para j
                strcpy(pessoas[j].nome, aux_pessoa.nome);
                strcpy(pessoas[j].endereco, aux_pessoa.endereco);
                strcpy(pessoas[j].telefone, aux_pessoa.telefone);
            }
    // ===========================================================
    for (int i = 0; i < N; i++) {
        printf("PESSOA %d:\n", i + 1);
        printf("  Nome: %s\n", pessoas[i].nome);
        printf("  Endereco: %s\n", pessoas[i].endereco);
        printf("  Telefone: %s\n\n", pessoas[i].telefone);
    }
}
void func_11(){
    struct Aluno {
        char nome[50];
        int matricula;
        float media_final;
    } alunos[10];

    struct Aluno alunos_aprovados[10];
    struct Aluno alunos_reprovados[10];

    for (int i = 0; i < 10; i++){
        printf("Nome do aluno %d: ", i + 1);
        scanf("%s", alunos[i].nome);

        printf("Matricula do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].matricula);

        printf("Media final do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].media_final);

        printf("\n");
    }

    int num_aprovados = 0, num_reprovados = 0;

    for (int i = 0; i < 10; i++){
        if (alunos[i].media_final >= 5.0){
            strcpy(alunos_aprovados[num_aprovados].nome, alunos[i].nome);
            alunos_aprovados[num_aprovados].matricula = alunos[i].matricula;
            num_aprovados++;
        }
        else{
            strcpy(alunos_reprovados[num_reprovados].nome, alunos[i].nome);
            alunos_reprovados[num_reprovados].matricula = alunos[i].matricula;
            num_reprovados++;
        }
    }

    printf("Aprovados:\n");
    for (int i = 0; i < num_aprovados; i++){
        printf("Nome: %s\t", alunos_aprovados[i].nome);
        printf("Matricula: %d\n", alunos_aprovados[i].matricula);
    }

    printf("\nReprovados:\n");
    for (int i = 0; i < num_reprovados; i++){
        printf("Nome: %s\t", alunos_reprovados[i].nome);
        printf("Matricula: %d\n", alunos_reprovados[i].matricula);
    }
}
bool verificaDataNascimento(const char *data) {
    // Implemente a lógica de verificação aqui (por exemplo, verificando os separadores e os valores)
    // Retorne true se estiver correto, ou false caso contrário
    // Exemplo simples:
    return (strlen(data) == 10 && data[2] == '/' && data[5] == '/');
}
// Função para verificar se o CEP está no formato correto (XXXXX-XXX)
bool verificaCEP(const char *cep) {
    // Implemente a lógica de verificação aqui (por exemplo, verificando os separadores e os valores)
    // Retorne true se estiver correto, ou false caso contrário
    // Exemplo simples:
    return (strlen(cep) == 9 && cep[5] == '-');
}
// Função para verificar se o e-mail faz sentido (verifica apenas o '@')
bool verificaEmail(const char *email) {
    // Implemente a lógica de verificação aqui (por exemplo, verificando a presença do '@')
    // Retorne true se estiver correto, ou false caso contrário
    // Exemplo simples:
    return (strchr(email, '@') != NULL);
}
void func_13(){
    struct informacoes {
        char nome[50];
        char endereco[20];
        char data_nascimento[11];
        char cidade[20];
        char CEP[9];
        char email[40];
    } dados;

    printf("Nome: ");
    scanf("%s", dados.nome);

    printf("Endereco: ");
    scanf("%s", dados.endereco);

    printf("Data de nascimento (dia/mes/ano): ");
    scanf("%s", dados.data_nascimento);

    printf("Cidade: ");
    scanf("%s", dados.cidade);

    printf("CEP: ");
    scanf("%d", &dados.CEP);

    printf("E-mail: ");
    scanf("%s", dados.email);

    bool dataValida = verificaDataNascimento(dados.data_nascimento);
    bool cepValido = verificaCEP(dados.CEP);
    bool emailValido = verificaEmail(dados.email);

    if (dataValida && cepValido && emailValido) {
        printf("\nDados informados:\n");
        printf("Nome: %s\n", dados.nome);
        printf("Endereco: %s\n", dados.endereco);
        printf("Data de Nascimento: %s\n", dados.data_nascimento);
        printf("Cidade: %s\n", dados.cidade);
        printf("CEP: %d\n", dados.CEP);
        printf("E-mail: %s\n", dados.email);
    } else {
        printf("\nAlguma informação estava incorreta. Verifique os dados digitados.\n");
    }
}
void func_14(){
    struct dados {
        char marca[15];
        int ano;
        float preco;
    } carros[5];

    int p, total_carros, verificacao;

    while (1){
        printf("Informe um preco (digite 0 para parar): ");
        scanf("%d", &p);
        printf("\n");

        if (p > 0){
            printf("Quantos carros deseja oferecer informacoes? ");
            scanf("%d", &total_carros);
            printf("\n");

            if (total_carros > 0){
                for (int i = 0; i < total_carros; i++){
                    printf("Marca do carro %d: ", i + 1);
                    scanf("%s", carros[i].marca);

                    printf("Ano de lancamento do carro %d: ", i + 1);
                    scanf("%d", &carros[i].ano);

                    printf("Preco atual do carro %d: ", i + 1);
                    scanf("%f", &carros[i].preco);
                }

            printf("Carros mais baratos do que o preco informado:\n");
                for (int i = 0; i < total_carros; i++){
                    if (carros[i].preco < p)
                        printf("%s\t%d\t%f", carros[i].marca, carros[i].ano, carros[i].preco);
                }

            }
        }

        else{
            printf("Ainda nao ha carros de graca no mercado.....");
            break;
        }
    }
}
void func_15(){
    struct dados {
        char titulo[30];
        char autor[15];
        int ano;
    } livros[5];

    char busca[30];
    int contador_busca = 0, index[5] = {0, 0, 0, 0, 0};

    for (int i = 0; i < 5; i++){
        printf("Nome do livro %d: ", i + 1);
        scanf("%s", livros[i].titulo);
        setbuf(stdin, NULL);

        printf("Autor do livro %d: ", i + 1);
        scanf("%s", livros[i].autor);
        setbuf(stdin, NULL);

        printf("Ano de publicacao do livro %d: ", i + 1);
        scanf("%d", livros[i].ano);
        setbuf(stdin, NULL);

        printf("\n");
    }

    printf("Informe o titulo que deseja buscar: ");
    scanf("%s", busca);
    for (int i = 0; i < 5; i++){
        if (strcmp(livros[i].titulo, busca) == 0){
            index[contador_busca] = i;
            contador_busca++;
        }
    }

    printf("Resultados:\n");
    if (contador_busca != 0){
        for (int i = 0; i < contador_busca; i++){
            printf("Titulo do livro %d: %s", livros[index[i]].titulo);
            printf("Autor do livro %d: %s", livros[index[i]].autor);
            printf("Ano de publicacao do livro %d: %s", livros[index[i]].ano);
        }
    }
    else
        printf("Erro! Nenhum livro encontrado");

}
void func_16(){
    struct Data {
        int dia;
        int mes;
        int ano;
    } data;

    struct dados {
        char compromisso[60];
        struct Data data;
    } compromissos[5];

    int M; //M = mes.

    do{
        for (int i = 0; i < 5; i++){
            printf("Compromisso %d: ", i + 1);
            scanf("%s", compromissos[i].compromisso);

            printf("Ano do compromisso %d: ", i + 1);
            scanf("%d", &compromissos[i].data.ano);

            printf("Mes do compromisso %d (escreva o numero associado ao mes): ", i + 1);
            scanf("%d", &compromissos[i].data.mes);

            printf("Dia do compromisso %d: ", i + 1);
            scanf("%d", &compromissos[i].data.dia);
        }

        printf("Infore o mes(em numeros) - (caso queira parar, digite 0): ");
        scanf("%d", &M);

        for (int i = 0; i < 5; i++){
            if ((M == compromissos[i].data.mes)){
                printf("Compromisso %d: %s\n", i + 1, compromissos[i].compromisso);
                printf("Dia: %d\n", compromissos[i].data.dia);
                printf("Ano: %d\n", compromissos[i].data.ano);
            }

            else
                printf("Compromisso %d nao localizado nesse mes", i + 1);
        }
    } while (M != 0);
}
void func_17(){
    struct eletrodomesticos {
        char nome[15];
        float potencia;
        float horas;
    } energia[5];

    int t;
    float consumo_total = 0;

    for (int i = 0; i < 5; i++){
        printf("Nome do eletrodomestico %d: ", i + 1);
        scanf("%15s", energia[i].nome);

        printf("Potencia do eletrodomestico %d: ", i + 1);
        scanf("%f", &energia[i].potencia);

        printf("Total de horas de funcionamento do eletrodomestico %d: ", i + 1);
        scanf("%f", &energia[i].horas);
    }

    printf("Informe o total de tempo, em dias, que os eletrodomesticos funcionaram: ");
    scanf("%d", &t);

    for (int i = 0; i < 5; i++)
        consumo_total += (energia[i].potencia*energia[i].horas*t);

    printf("Consumo energetico total: %fKw\n", consumo_total);
    for (int i = 0; i < 5; i++)
        printf("Consumo relativo do eletrodomestico %d: %f\n", i + 1, (energia[i].potencia*energia[i].horas*t)/consumo_total);
}
int func_18_1(int codigo_pedido, Produto produtos[]){
    for (int i = 0; i < 5; i++){
        if (codigo_pedido == produtos[i].codigo)
            return i;
    }
    return -1;
}
void func_18(){
    Produto produtos[5];
    int codigo_pedido = -1, quantidade_pedida = -1, i;

    printf("Preenchimento de dados:\n");
    for (int i = 0; i < 5; i++){
        printf("Nome do produto %d: ", i + 1);
        scanf("%s", produtos[i].nome);

        printf("Preco do produto %d: ", i + 1);
        scanf("%f", &produtos[i].preco);

        printf("Codigo do produto %d (nao utilizar 0): ", i + 1);
        scanf("%d", &produtos[i].codigo);

        printf("Quantidade do produto %d: ", i + 1);
        scanf("%d", &produtos[i].quantidade);

        printf("\n");
    }

    do{
        printf("Pedido:\nCodigo (digite 0 para interromper o programa): ");
        scanf("%d", &codigo_pedido);

        if (codigo_pedido == 0)
            break;

        i = func_18_1(codigo_pedido, produtos); //produtos = produtos[0] -> chamada de função!!!!!
        if (i < 0){
            printf("Produto nao encontrado!\n");
            continue;
        }

        else {
                printf("Codigo encontrado!\n");
                printf("\nQuantidade: ");
                scanf("%d", &quantidade_pedida);

                if (quantidade_pedida <= produtos[i].quantidade){
                    printf("Quantidade disponivel!\n");
                    produtos[i].quantidade = produtos[i].quantidade - quantidade_pedida;
                    printf("Armazem atualizado! Quantidade do produto atualizada no estoque!\n");
                }

                else
                    printf("Erro! Quantidade indisponivel\n");

        }
    } while (codigo_pedido != 0);
}

int main(){
    //func_1();
    //func_2();
    //func_3();
    //func_4();
    //func_5();
    //func_6();
    //func_8();
    //func_10();
    //func_11();
    //func_13();
    //func_14();
    //func_15();
    //func_16();
    //func_17();
    func_18();

    return 0;
}
