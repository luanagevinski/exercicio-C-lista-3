#include<stdio.h>

int main(){
    char nome[50];
    char opcao[50];
    int quantidade;
    int qtdVendas = 0;
    int totalProdutos = 0;
    float preco, totalVenda;
    float faturamento = 0;
    float maiorVenda = 0;

    do
    {
    printf("=====NOVA VENDA=====");
    printf("Digite o nome do produto: \n");
    scanf("%s", nome);
    printf("Digite a quantidade de produtos: \n");
    scanf("%d", &quantidade);
    printf("Digite o preço unitário: \n");
    scanf("%f", &preco);

    totalVenda = quantidade * preco;

    printf("Total da venda: %.2f\n", totalVenda);

    qtdVendas++;
    totalProdutos = totalProdutos + quantidade;
    faturamento = faturamento + totalVenda;

    if(qtdVendas == 1){
        maiorVenda = totalVenda;
    }else if(totalVenda > maiorVenda){
        maiorVenda = totalVenda;
    }

    printf("\nDeseja registrar outra venda? (S/N): ");
    scanf("%s", opcao);


} while (opcao == 'S' || opcao == 's');

    printf("\n===== RELATORIO DO DIA =====\n");
    printf("Quantidade de vendas: %d\n", qtdVendas);
    printf("Quantidade total de produtos vendidos: %d\n", totalProdutos);
    printf("Faturamento total: R$ %.2f\n", faturamento);
    printf("Maior venda realizada: R$ %.2f\n", maiorVenda);
    
    
    
}