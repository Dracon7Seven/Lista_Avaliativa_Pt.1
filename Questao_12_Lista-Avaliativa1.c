#include <stdio.h>
#include <locale.h>
#define ARMAZENA 5

int main() {
    int numeros[ARMAZENA];
    int maior = numeros[0];
    int menor = numeros[0];
    int soma = 0;
    float media;
    setlocale(LC_ALL,"Portuguese");

    for (int i = 0; i < ARMAZENA; i++) {
        printf("Digite o %dº número: ", i+1);
        scanf("%d", &numeros[i]);

        if (numeros[i] > maior) {
            maior = numeros[i];
        }
        if (numeros[i] < menor) {
            menor = numeros[i];
        }

        soma += numeros[i];
    }

    media = soma / (float)ARMAZENA;

    printf("Valores lidos: ");
    for (int i = 0; i < ARMAZENA; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\nMaior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    printf("Média: %.2f\n", media);

    return 0;
}
