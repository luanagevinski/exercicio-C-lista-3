#include<stdio.h>

int main(){
    int alunos = 0, aprovados = 0, reprovados = 0, recuperacao = 0, i;
    float n1, n2, media, SomaMedia, MaiorMedia, MenorMedia, mediaGeral;
    char nome[50];

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &alunos);

    for (i = 0; i < alunos; i++)
    {
        printf("Digite o nome do aluno\n");
        scanf("%s", nome);
        printf("Digite a primeira nota do aluno: \n");
        scanf("%f", &n1);
        printf("Digite a segunda nota do aluno: \n");
        scanf("%f", &n2);

        media = (n1 + n2) / 2;

         if(media >= 7){
        printf("Aprovado!\n");
        aprovados++ ;
    }else if(media >= 5 && media < 7){
        printf("Recuperação!\n");
        recuperacao++;
    }else{
        printf("Reprovado!\n");
        reprovados++;
    }

    SomaMedia = SomaMedia + media;
    mediaGeral = SomaMedia / alunos;

    if(i == 0){
        MaiorMedia = media;
    }else if(media > MaiorMedia){
        MaiorMedia = media;
    }

    if(i == 0){
        MenorMedia = media;
    }else if(media < MenorMedia){
        MenorMedia = media;
    }

    }

    mediaGeral = SomaMedia / alunos;

printf("\n===== RELATORIO DA TURMA =====\n");
printf("Quantidade de alunos: %d\n", alunos);
printf("Aprovados: %d\n", aprovados);
printf("Recuperacao: %d\n", recuperacao);
printf("Reprovados: %d\n", reprovados);
printf("Media geral da turma: %.2f\n", mediaGeral);
printf("Maior media: %.2f\n", MaiorMedia);
printf("Menor media: %.2f\n", MenorMedia);


    
    
}