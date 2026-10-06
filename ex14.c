#include<stdio.h>

int main(){
    int numero1, numero2;
    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);
    printf("Digite o segundo número: ");
    scanf("%d", &numero2);

    if(numero1 > numero2){
        printf("O número %d é maior que o número %d\n", numero1, numero2);
    }else{
        printf("O número %d é maior que o número %d\n", numero2, numero1);
    }
    return 0;
}