#include<stdio.h>

int main(){
    float compra, desconto, final;

    printf("Digite o valor da compra: ");
    scanf("%f", &compra);

    if(compra <= 100){
        desconto = 0;
        final = compra;
        printf("O valor da compra %.2f não possui desconto.\n", compra);
    }else if(compra > 100 && compra <= 500){
        desconto = compra * 0.05;
        final = compra - desconto;
        printf("O valor da compra %.2f possui 5%% de desconto.\n", compra);
    }else{
        desconto = compra * 0.1;
        final = compra - desconto;
        printf("O valor da compra %.2f possui 10%% de desconto.\n", compra);
    }
    printf("Valor do desconto: %.2f\n", desconto);
    printf("Valor final da compra: %.2f\n", final);
}