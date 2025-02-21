#include <stdio.h>

int main() {
    int n;
    
    printf("Colunas: ");
    scanf("%d", &n);
    
    for (int i = 0; i < ((n + 1)/2); i++){
        
        for (int j = 0; j < n; j++) {
        
            if ((j >= ((n/2) + 1) - i) && (j <= ((n/2) + 1) + i)) {
            
            printf("*");
            
            } else {
                printf(" ");
            }
            
        }
        
        if (i == (((n + 1)/2) - 1)) {
            printf("*");
        }
        printf("\n");
        
    }
    
    return 0;
}
