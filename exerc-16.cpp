#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL, "Portuguese");
	// Elabore um algoritmo que leia 5 n�meros e imprima ao final, imprima o maior, menor, e a m�dia dos n�meros 
	//digitados.
	int i;
	float average, number, larger=-99999, smaller=99999;
	for (i=1; i<=5; i++)
	{
		printf("Digite um n�mero: "); scanf("%f", &number);
		average=average+number;
		if(number>larger)
		{
			larger=number;
		}
		if(number<smaller)
		{
			smaller=number;
		}
		
	}
	average=average/5;
	printf("\nO n�mero menor �: %.1f", smaller);
	printf("\nO n�mero maior �: %.1f", larger);
	printf("\nA m�dia dos n�meros �: %.1f\n", average);
	
	
}
