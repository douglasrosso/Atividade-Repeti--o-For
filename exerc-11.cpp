#include <stdio.h>
#include <math.h>
#include <locale.h>

	//Elabore um algoritmo que leia 5 n�meros, e imprima quantos s�o pares e quantos s�o �mpares.

	main()
	{
		setlocale(LC_ALL, "Portuguese");
		int par=0, impar=0, number;
		for(int i=1; i<=5; i++)
		{
			if(i > 1) printf("\n");
				printf("\n>Insira um n�mero: "); 
				scanf("%d", &number);
			if (number%2 == 0)
			{
				par=par+1;
			}
			else
			{
				impar=impar+1;
			}	
		}
		printf("\n------------------------------------------\n");
		printf("Quantidade de n�meros pares: %d\n", par);
		printf("Quantidade de n�meros impares: %d\n", impar);
	}
