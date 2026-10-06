#include<stdio.h>

int main(){
    float nota1, nota2, media;

    printf("Digite sua primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite sua segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    if(media >= 7){
        printf("Aprovado com média: %.2f\n", media);
    }else if(media >= 5 && media < 7){
        printf("Recuperação com média: %.2f\n", media);
    }else{
        printf("Reprovado com média: %.2f\n", media);
    }
    return 0;

}