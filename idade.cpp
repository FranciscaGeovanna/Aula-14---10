#include <stdio.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int numero;
	
	printf("Programa \n\n");
	
	printf("N�mero: ");
	scanf("%d", &numero);
	
	if (numero %2 !=0){
		
		printf("\nO n�mero � par :)\n");
	} else if (numero %2){
		
		printf("\nO n�mero n�o � par :(");
	}
	
	return 0;
}
