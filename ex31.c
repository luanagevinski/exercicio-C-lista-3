#include<stdio.h>

int main(){
    float litros, preco, valor_final, desconto, valor_bruto;


    printf("Digite a quantidade de litros abastecidos: ");
    scanf("%f", &litros);
    printf("Digite o preço do litro: ");
    scanf("%f", &preco);

    valor_bruto = litros * preco;
    desconto = 0;


    if(litros < 20){
        printf("Sem desconto");
    }else if(litros >= 20 && litros < 40){
        desconto = valor_bruto * 0.03;
    }else{
        desconto = valor_bruto * 0.05;
    }
     valor_final = valor_bruto - desconto;
        printf("O valor bruto é: %.2f\n ", valor_bruto);
        printf("O desconto é: %.2f\n", desconto);
        printf("O valor final é: %.2f\n", valor_final);
    return 0;
}