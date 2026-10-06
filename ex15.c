#include<stdio.h>

int main(){
    float n1, n2, n3;

    printf("Digite três números: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    if(n1 >= n2 && n1 >= n3){
        printf("O maior número é %.2f\n", n1);
    }else if(n2 >= n1 && n2 >= n3){
        printf("O maior número é: %.2f\n", n2);
    }else{
        printf("O maior número é: %.2f\n", n3);
    }
    return 0;
}