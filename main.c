#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	float altura, peso, imc;
	
	printf ("Digite a altura: ");
	scanf ("%f", &altura);
	
	printf ("Digite o peso: ");
	scanf ("%f", &peso);
	
	imc = (peso / (altura * altura));
	
	if (imc > 30) {
		printf("Obesidade");
	} else {
		printf("Normal");
	}
	
	printf ("\nA media eh %.2f", imc);
	
	return 0;

}
