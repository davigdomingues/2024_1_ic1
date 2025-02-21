#include <stdio.h>

int main()
{
    char inicial, final, diferenca;
    
    printf("Digite o caractere inicial e o caractere final: ");
    scanf("%c %c", &inicial, &final);
    
    diferenca = final - inicial;
	
	if (diferenca >= 0){
    
    printf("O numero de caracteres entre eles eh: %d", diferenca - 1);
	
	} else {
		printf("Erro!");
	}

    return 0;
}
