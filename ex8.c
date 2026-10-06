#include<stdio.h>

int main(){
    float horas_trabalhadas, valor_hora, salario;

    printf("Digite o número de horas trabalhadas: ");
    scanf("%f", &horas_trabalhadas);
    printf("Digite o valor da hora trabalhada: ");
    scanf("%f", &valor_hora);

    salario = horas_trabalhadas * valor_hora;
    
    printf("O salário do funcionário é: %.2f\n", salario);
    return 0;
}