#include <stdio.h>
#include <math.h>
#include <locale.h>

	//Elabore um algoritmo que imprima todos os n�meros de 1 at� 5.
	main()
	{
		setlocale(LC_ALL, "Portuguese");
		for(int i=1; i<=5; i++)
		{
			printf("\n%d\n", i);
		}
	
	}
