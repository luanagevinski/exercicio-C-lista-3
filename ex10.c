#include <stdio.h>

int main(){
    char nome[50];
    int quantidade;
    float preco;

    printf("Digite o nome do produto: ");
    scanf("%s", &nome);
    printf("Digite a quantidade do produto: ");
    scanf("%d", &quantidade);
    printf("Digite o preço do produto: ");
    scanf("%f", &preco);

    float total = quantidade * preco;
    printf("O total a pagar pelo produto %s é: %.2f\n", nome, total);
    return 0;
}