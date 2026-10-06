#include<stdio.h>

int main(){
    int n1, n2, soma, subtracao, multiplicacao, divisao, opcao;

    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    printf("Digite o segundo número: ");
    scanf("%d", &n2);
    printf("Escolha a operação desejada: \n");
    printf("1 - Soma\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");
    scanf("%d", &opcao);

    if(opcao == 1){
        soma = n1 + n2;
        printf("%d + %d = %d\n", n1, n2, soma);
    }else if(opcao == 2){
        subtracao = n1 - n2;
        printf("%d - %d = %d\n", n1, n2, subtracao);
    }else if(opcao == 3){
        multiplicacao = n1 * n2;
        printf("%d * %d = %d\n", n1, n2, multiplicacao);
    }else if(opcao == 4){
        if(n2 != 0){
            divisao = n1 / n2;
            printf("%d / %d = %d\n", n1, n2, divisao);
        }else{
            printf("Erro: Divisão por zero não é permitida.\n");
        }
    }else{
        printf("Opção inválida.\n");
    }
    return 0; 

}