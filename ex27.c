#include<stdio.h>

int main(){
    float nota, aluno, aprovados, reprovados;

    aluno = 0;
    aprovados = 0;
    reprovados = 0;
    while(aluno < 10){
        printf("Digite a nota do aluno: ");
        scanf("%f", &nota);
        aluno++;
        if(nota >= 7){
            printf("Aluno aprovado!\n");
            aprovados++;
        }else{
            printf("Aluno reprovado!\n");
            reprovados++;
        }
    }
    printf("Número de alunos aprovados: %.0f\n", aprovados);
    printf("Número de alunos reprovados: %.0f\n", reprovados);
    printf("O percentual de aprovação foi de: %.2f%%\n", (aprovados / aluno) * 100);
    
    return 0;
}