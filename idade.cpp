#include <stdio.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int numero;
	
	printf("Programa \n\n");
	
	printf("Número: ");
	scanf("%d", &numero);
	
	if (numero %2 !=0){
		
		printf("\nO número é par :)\n");
	} else if (numero %2){
		
		printf("\nO número não é par :(");
	}
	
	return 0;
}
