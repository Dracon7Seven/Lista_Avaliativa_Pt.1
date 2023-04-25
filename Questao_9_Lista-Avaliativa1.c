#include <stdio.h>
#include <locale.h>
#define ARMAZENA 6

int main() {
    int vetor[ARMAZENA];

    for (int i = 0; i < ARMAZENA; i++) {
        do {
            printf("Digite um valor par para a posição %d: ", i);
            scanf("%d", &vetor[i]);
        } while (vetor[i] % 2 != 0);
    }

    printf("Vetor na ordem inversa: ");
    for (int i = ARMAZENA - 1; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
