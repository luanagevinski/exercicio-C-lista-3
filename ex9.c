#include<stdio.h>

int main(){
    float distancia, combustivel;
    printf("Digite a distância percorrida em km: ");
    scanf("%f", &distancia);
    printf("Digite a quantidade de combustível consumido em litros: ");
    scanf("%f", &combustivel);

    float consumo_medio = distancia / combustivel;
    printf("O consumo médio do veículo é: %.2f\n", consumo_medio);
    return 0; 
}