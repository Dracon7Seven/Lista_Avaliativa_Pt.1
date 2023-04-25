#include <stdio.h>
#include <locale.h>
#define ARMAZENA 15

int main() {
    float notas[ARMAZENA];
    float media = 0;
    setlocale(LC_ALL,"Portuguese");

    for (int i = 0; i < ARMAZENA; i++) {
        printf("Digite a nota do aluno %d: ", i+1);
        scanf("%f", &notas[i]);
        media += notas[i];
    }
    media /= ARMAZENA;

    printf("Media geral: %.2f\n", media);

    return 0;
}
