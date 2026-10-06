#include <stdio.h>

// for (para) - estrutura de repetição
int main(){
    int res;
    
    for(int contador1 = 1; contador1 <= 10; contador1++){
        
        for(int contador2 = 1; contador2 <= 10; contador2++){
            res = contador1 * contador2;
            printf("%d x %d = %d\n", contador1, contador2, res);
        }
        printf("-----------------------\n");
    }
}