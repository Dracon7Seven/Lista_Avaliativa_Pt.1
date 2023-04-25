#include <stdio.h>
#include <locale.h>
#define ARMAZENA 6

int main() {
    int vetor[ARMAZENA];
    setlocale(LC_ALL,"Portuguese");
    for (int i = 0; i < ARMAZENA; i++) {
        printf("Digite o valor da posição %d: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("Vetor na ordem inversa: ");
    for (int i = ARMAZENA - 1; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
