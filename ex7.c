#include<stdio.h>

int main(){
    float temperatura;
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &temperatura);

    float fahrenheit = (temperatura * 9/5) + 32;
    printf("A temperatura em Fahrenheit é: %.2f\n", fahrenheit);
    return 0;
}