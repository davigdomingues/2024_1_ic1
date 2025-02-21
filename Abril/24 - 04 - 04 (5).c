*/
/*int main() (Cálculo da combinação entre dois números quaisquer n e k)
{
    int i,n,k,fatorial= 1;
    int fatorial1 = 1;
    int fatorial2 = 1;
    int fatorial3 = 1;

    printf("Digite os números da combinacao de interesse: ");
    scanf("%d %d", &n, &k);

    if((n == 0) && (k == 0)) {
        printf("O valor da combinacao eh 1, por definicao.\n");
        return 0;
    }

    if(((n>0) && (k>0)) && (n > k)){
        for(i = 1; i<n; i++){
            fatorial1 = fatorial1*(i+1);
        }
        for(i = 1; i<k; i++){
            fatorial2 = 1/fatorial2*(i+1);
        }
        for(i = 1; i<(n-k); i++){
            fatorial3 = 1/fatorial3*(i+1);
        }
        fatorial = fatorial1/(fatorial2*fatorial3);
        printf("O seu valor em fatorial eh: %d", fatorial);
    }

    else {
        printf("Erro!");
}

return 0;
}
*/