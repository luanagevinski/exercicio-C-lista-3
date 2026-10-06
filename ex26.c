#include<stdio.h>

int main(){
    int aluno;
    float nota, media;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &aluno);
    for (int i = 0; i < aluno; i++)
    {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &nota);
        media += nota;
    }
    media /= aluno;
    printf("Média da turma: %.2f\n", media);
    return 0;
}