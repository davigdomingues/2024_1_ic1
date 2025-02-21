int main()
{
    int x;
    double soma = 0.0;
    
    
    printf("Digite o numero de termos do somatorio: ");
    scanf("%d", &x);
    
    double  fatorial[50];
    fatorial[0]=1;
    for(int n = 1; n<50; n++) 
        fatorial[n] = fatorial[n-1]*n;

    for(int m = 1; m<=x; m++)
        soma = soma + m/fatorial[m];
        printf("%lf", soma);
   