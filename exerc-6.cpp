#include <stdio.h>
#include <math.h>
#include <locale.h>

	//Elabore um algoritmo que imprima todos os n�meros de 100 at� 1.
	main()
	{
		setlocale(LC_ALL, "Portuguese");
		for(int i=100; i>=1; i--)
		{
			printf("\n%d\n", i);
		}
	
	}
