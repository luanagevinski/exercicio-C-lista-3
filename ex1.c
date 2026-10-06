#include <stdio.h>

int main (){
    char nome[50];

    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Olá, %s! Seja bem vindo(a) à disciplina de lógica de programação!\n", nome);
    return 0;
}