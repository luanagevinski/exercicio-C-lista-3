#include<stdio.h>

int main(){
    float nota1, nota2, nota3, media;

    printf("Digite suas três notas: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("Sua média final é: %.2f\n", media);
    return 0;
}