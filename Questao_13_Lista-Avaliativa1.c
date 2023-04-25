#include <stdio.h>
#include <locale.h>
int main() {
    int valores[5];
    int i, maior, menor, pos_maior, pos_menor;
    float media = 0;
    setlocale(LC_ALL,"Portuguese");
    for(i=0; i<5; i++) {
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &valores[i]);

        if(i==0) {
            maior = valores[i];
            menor = valores[i];
            pos_maior = i;
            pos_menor = i;
        } else {
            if(valores[i] > maior) {
                maior = valores[i];
                pos_maior = i;
            }
            if(valores[i] < menor) {
                menor = valores[i];
                pos_menor = i;
            }
        }

        media += valores[i];
    }

    media = media / 5;

    printf("\nValores lidos: ");
    for(i=0; i<5; i++) {
        printf("%d ", valores[i]);
    }

    printf("\nMaior valor: %d (posição %d)", maior, pos_maior);
    printf("\nMenor valor: %d (posição %d)", menor, pos_menor);
    printf("\nMédia dos valores: %.2f", media);

    return 0;
}
