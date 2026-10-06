#include <stdio.h>

int main() {
    int voto;
    int candidato1 = 0;
    int candidato2 = 0;
    int candidato3 = 0;
    int total;

    do {
        printf("\nDigite seu voto:\n");
        printf("1 - Candidato 1\n");
        printf("2 - Candidato 2\n");
        printf("3 - Candidato 3\n");
        printf("0 - Encerrar votacao\n");
        printf("Voto: ");
        scanf("%d", &voto);

        if (voto == 1) {
            candidato1++;
        }
        else if (voto == 2) {
            candidato2++;
        }
        else if (voto == 3) {
            candidato3++;
        }
        else if (voto != 0) {
            printf("Voto invalido!\n");
        }

    } while (voto != 0);

    total = candidato1 + candidato2 + candidato3;

    printf("\n===== RESULTADO =====\n");
    printf("Candidato 1: %d votos\n", candidato1);
    printf("Candidato 2: %d votos\n", candidato2);
    printf("Candidato 3: %d votos\n", candidato3);
    printf("Total de votos: %d\n", total);

    if (candidato1 > candidato2 && candidato1 > candidato3) {
        printf("Vencedor: Candidato 1\n");
    }
    else if (candidato2 > candidato1 && candidato2 > candidato3) {
        printf("Vencedor: Candidato 2\n");
    }
    else if (candidato3 > candidato1 && candidato3 > candidato2) {
        printf("Vencedor: Candidato 3\n");
    }
    else {
        printf("Houve empate!\n");
    }

    return 0;
}