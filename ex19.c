#include<stdio.h>

int main(){
    float peso, altura;

    printf("Digite seu peso: ");
    scanf("%f", &peso);
    printf("Digite sua altura: ");
    scanf("%f", &altura);

    float imc = peso / (altura * altura);

    if(imc < 18.5){
        printf("Abaixo do peso\n");
    }else if(imc >= 18.5 && imc <= 24.9){
        printf("Peso adequado\n");
    }else if(imc >= 25 && imc <= 29.9){
        printf("Sobrepeso\n");
    }else{
        printf("Obesidade\n");
    }
    return 0;
}