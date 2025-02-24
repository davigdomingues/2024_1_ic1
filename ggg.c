#include <stdio.h>

int func(int *p1, int *p2){
    if (sizeof(p1) == sizeof(p2))
        return 1;
        
    else
        return 0;
}

int main()
{
    int array1[] = {'a', 'b', 'c'},  array2[] = {'d', 'e', 'f'};
    printf("Tamanho do espaço que o array ocupa na memória %d \n", sizeof(array1));
    printf("Tamanho do espaço que cada item do array ocupa na memória %d \n", sizeof(array1[0]));
    printf("número de itens do array %d \n", (sizeof(array1)/sizeof(array1[0])));
    
    return func(array1, array2);

}


/*
#include <stdio.h>

int main()
{
int v[] = {5, 10, 15, 3, 10, 76, 5, 13, 33, 45};
int * pt;
int i;
 
pt = v;
 
for(i = 0; i < 10; i++)
   printf("V[%i] = %i\r\n", i, *pt++);

return 0;
}

*/
