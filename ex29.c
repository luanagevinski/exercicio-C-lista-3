#include<stdio.h>

int main(){
    int senha, tentativas = 0;
    do{
        printf("Digite a senha: ");
        scanf("%d", &senha);
        if(senha != 1234){
            printf("Senha incorreta! Tente novamente.\n");
        }else{
            printf("Senha correta! Acesso permitido.\n");
            break;
        }
      
            tentativas++;
    }while(tentativas < 3);
    return 0;
}