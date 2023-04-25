#include <stdio.h>
#include <locale.h>
int main() {
    int vetor[8], x, y;
    setlocale(LC_ALL,"Portuguese");
    for (int i = 0; i < 8; i++) {
        printf("Digite o valor da posição %d: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de y: ");
    scanf("%d", &y);

    if (x < 0 || x >= 8 || y < 0 || y >= 8) {
        printf("Posições inválidas!\n");
        return 1;
    }

    printf("Soma dos valores nas posições %d e %d é igual a: %d\n", x, y, vetor[x] + vetor[y]);

    return 0;
}
