#include <stdio.h>
#include <locale.h>

int main(){
    int i, Valores[6];
    setlocale(LC_ALL,"Portuguese");
    for(i=0; i<6; i++){
        printf("Insira um valor: ");
        scanf("%d", &Valores[i]);
        }
    for(i=0; i<6; i++){
        printf("Valores: %d\n", Valores[i]);
        }
    return 0;
}