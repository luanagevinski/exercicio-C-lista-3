#include<stdio.h>
// do while (faça enquanto) - estrutura de repetição
int main(){
    int opcao;

    do{
        printf("Digite 1, 2 ou 3 para voltar: ");
        scanf("%d", &opcao);
    }while(opcao == 1 || opcao == 2 || opcao == 3);
}