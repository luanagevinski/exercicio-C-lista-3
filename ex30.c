#include<stdio.h>

int main(){
    float saldo = 1000.00;
    float valor;
    int opcao;

    do
    {
        printf("Saldo atual: %.2f\n", saldo);
        printf("Escolha uma opção: \n");
        printf("1 - Consultar saldo\n");
        printf("2- Depositar\n");
        printf("3 - Sacar\n");
        printf("4 - Sair\n");
        scanf("%d", &opcao);

        switch (opcao){
            case 1:
                printf("Saldo atual: %.2f\n", saldo);
                break;
                case 2:
                printf("Digite o valor para o depósito: ");
                scanf("%f", &valor);
                saldo = saldo + valor;
                printf("Depósito realizado com sucesso! Novo saldo: %.2f\n", saldo);
                break;
                case 3:
                printf("Digite o valor para o saque: ");
                scanf("%f", &valor);
                if(valor <= saldo){
                    saldo = saldo - valor;
                    printf("Saque realizado com sucesso! Novo saldo: %.2f\n", saldo);
                }else{
                    printf("Saldo insuficiente para o saque!\n");
                }
                break;
                case 4: 
                printf("Saindo do programa...\n");
                break;
            default:
            printf("Opção inválida! Tente novamente.\n");
        }
        
    } while (opcao != 4);
    
} 