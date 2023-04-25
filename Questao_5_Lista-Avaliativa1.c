#include <stdio.h>
#include <locale.h>
int main() {
    int vetor[10], count = 0;
    setlocale(LC_ALL,"Portuguese");
    for (int i = 0; i < 10; i++) {
        printf("Digite o valor da posição %d: ", i);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (vetor[i] % 2 == 0) {
            count++;
        }
    }

    printf("O vetor possui %d valores pares.\n", count);

    return 0;
}
