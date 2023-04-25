#include <stdio.h>
#include <locale.h>
int main() {
    int vetor[10], maior, menor;
    setlocale(LC_ALL,"Portuguese");
    for (int i = 0; i < 10; i++) {
        printf("Digite o valor da posição %d: ", i);
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];
    menor = vetor[0];

    for (int i = 1; i < 10; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }

    printf("Maior elemento: %d\n", maior);
    printf("Menor elemento: %d\n", menor);

    return 0;
}
