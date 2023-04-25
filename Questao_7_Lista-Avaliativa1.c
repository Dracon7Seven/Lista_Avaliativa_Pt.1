#include <stdio.h>
#include <locale.h>
#define ARMAZENA 10

int main() {
    int vetor[ARMAZENA], maior, posicao;
    setlocale(LC_ALL,"Portuguese");
    for (int i = 0; i < ARMAZENA; i++) {
        printf("Digite o valor da posição %d: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("Vetor: ");
    for (int i = 0; i < ARMAZENA; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    maior = vetor[0];
    posicao = 0;
    for (int i = 1; i < ARMAZENA; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
            posicao = i;
        }
    }

    printf("Maior elemento: %d\n", maior);
    printf("Posição: %d\n", posicao);

    return 0;
}
