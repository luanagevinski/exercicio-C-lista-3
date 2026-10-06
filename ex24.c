#include<stdio.h>

int main(){
    int numero, res;

      printf("Digite um número: ");
        scanf("%d", &numero);

    for (int i = 1; i <= 10; i++)
    {
        res = numero * i;
        printf("%d x %d = %d\n", numero, i, res);
    }
    
    return 0;
}