#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
    int i, A[6] = {1,0,5,-2,-5,7};
    int soma;
	soma = A[0] + A[1] + A[5];

    printf("A somas dos valores nas posições [0], [1] e [5] é igual a: %d\n", soma);
    
    for(i=0; i<6; i++){
    	A[4] = 100;
	}
	
	for(i=0; i<6; i++){
		printf("\nOs valores armazenados são: %d\n", A[i]);
	}
	return 0;
}