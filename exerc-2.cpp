#include <stdio.h>
#include <math.h>
#include <locale.h>

main()
{
	//Elabore um algoritmo que leia quatro n�meros, e ao final, imprima a m�dia desses n�meros.
	setlocale(LC_ALL, "Portuguese");
	float number, media;
	int i, max = 4;
	for(i = 1; i <= max; i++)
	{
		if(i > 1) printf("\n");
		printf("Insira um n�mero: "); 
		scanf("%f", &number);
		media=media+number;
	}
	printf("\nM�dia: %.2f\n", media / max);
}
