#include <stdio.h>
#include <locale.h>
#define ARMAZENA 10

int main() {
    float numeros[ARMAZENA];
    int quantidadeNegativos = 0;
    float somaPositivos = 0;
    setlocale(LC_ALL,"Portuguese");
    for (int i = 0; i < ARMAZENA; i++) {
        printf("Digite o %dº número: ", i+1);
        scanf("%f", &numeros[i]);
    }

    for (int i = 0; i < ARMAZENA; i++) {
        if (numeros[i] < 0) {
            quantidadeNegativos++;
        } else {
            somaPositivos += numeros[i];
        }
    }

    printf("Quantidade de números negativos: %d\n", quantidadeNegativos);
    printf("Soma dos números positivos: %.2f\n", somaPositivos);

    return 0;
}
