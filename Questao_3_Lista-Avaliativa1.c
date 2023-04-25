#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(){
    int i, Reais[10], Pots[10];
    setlocale(LC_ALL,"portuguese");
    for(i=0; i<10; i++){
        printf("Insira um número do conjunto dos reais: ");
        scanf("%d", &Reais[i]);
    }
    
    printf("Conjunto dos reais inseridos");
    for(i=0; i<10; i++){
        printf("\n%d", Reais[i]);
    }

    printf("\nPotência ao quadrado do conjunto dos números reais inseridos");
    for(i=0; i<10; i++){
    	Pots[i] = pow (2,Reais[i]);
    	printf("\n%d", Pots[i]);
	}
}