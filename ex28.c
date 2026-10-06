#include<stdio.h>

int main(){
    int numero, maior, i;

    for(i = 1; i <= 10; i++){
        printf("Digite o %d° número: ", i);
        scanf("%d", &numero);

        if(i == 1){
            maior = numero;
        }else if (numero > maior){
            maior = numero;
        }
    }

    printf("O maior número informado é: %d\n", maior);
    return 0;
}