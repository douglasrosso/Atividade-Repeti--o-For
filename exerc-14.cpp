#include <stdio.h>
#include <math.h>
#include <locale.h>

	/* Elabore um algoritmo que leia um n�mero e imprima todos os n�meros de 1 at� o n�mero lido, 
	e tamb�m o seu produto. 
				Exemplo:
	N�mero: 3 - Sa�da: 1 2 3 - Produto: 6 */

	main()
	{
		setlocale(LC_ALL, "Portuguese");
		int number, i, product=0;
		printf("Insira um n�mero inteiro: "); scanf("%d", &number);
		for(i=1; i<=number; i++)
		{
			if(i > 1) printf("\n");
			printf("\n%d\n", i);
			product=product+i;
		}
		printf("\n------------------------------------------\n");
		printf("\nN�mero: %d\n", number);
		printf("Produto de %d �: %d\n", number, product);
		
	}
