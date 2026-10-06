#include<stdio.h>

int main(){
    float hora_entrada, hora_saida, total, horas;

    printf("Digite a hora de entrada do veículo: \n");
    scanf("%f", &hora_entrada);
    printf("Digite a hora de saída do veículo: \n");
    scanf("%f", &hora_saida);

    horas = hora_saida - hora_entrada;

    if(horas <= 1){
        total = 10.0;
    }else{
        total = 10.0 + (horas - 1) * 5.0;
    }

    printf("\nTempo de permanencia: %f horas\n", horas);
    printf("Valor total a pagar: R$ %.2f\n", total);

    return 0;



}