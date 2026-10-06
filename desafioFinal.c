#include <stdio.h>

int main() {

    float valor;
    float total = 0;
    float media;
    int quantidade = 0;
    char categoria;

    printf("Digite o valor da despesa (0 para encerrar): ");
    scanf("%f", &valor);

    while(valor != 0) {

        while(valor < 0) {
            printf("Valor invalido! Digite um valor positivo: ");
            scanf("%f", &valor);
        }

        if(valor == 0) {
            break;
        }

        printf("Digite a categoria da despesa:\n");
        printf("A - Alimentacao\n");
        printf("T - Transporte\n");
        printf("L - Lazer\n");
        printf("O - Outros\n");
        scanf(" %c", &categoria);

        total += valor;
        quantidade++;

        printf("Digite o valor da proxima despesa (0 para encerrar): ");
        scanf("%f", &valor);
    }

    if(quantidade > 0) {

        media = total / quantidade;

        printf("\nQuantidade de despesas: %d\n", quantidade);
        printf("Total gasto: R$ %.2f\n", total);
        printf("Media das despesas: R$ %.2f\n", media);

        if(total <= 500) {
            printf("Classificacao: Gastos baixos\n");
        }
        else if(total <= 1000) {
            printf("Classificacao: Gastos moderados\n");
        }
        else {
            printf("Classificacao: Gastos altos\n");
        }

    }
    else {
        printf("\nNenhuma despesa foi cadastrada.\n");
    }

    return 0;
}