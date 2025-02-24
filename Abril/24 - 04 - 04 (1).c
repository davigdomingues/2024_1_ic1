int main() //(Soma dos numeros de PA razão 1, com An = n)
{
    int i,n,soma;
    printf("Digite um número: ");
    scanf("%d", &n);
    for(i=0; i<n; i++){
        soma = soma + (i+1);
    }
    printf("A soma dele com seus antecessores em cadeia eh: %d", soma);
    return 0;
}
