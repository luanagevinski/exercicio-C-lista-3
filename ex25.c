#include<stdio.h>

int main(){
    int n, soma = 0;
    printf("Digite um número: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        soma = soma + i;

        printf("%d\n", i);
    }
    printf("Soma: %d\n", soma);
    return 0;
}