#include <stdio.h>
#include <math.h>
#include <locale.h>

	//Elabore um algoritmo que leia um n�mero de entrada n que indicar� a quantidade de n�meros a serem lidos.
	//Em seguida, leia n n�meros (conforme o valor informado anteriormente) e imprima o triplo de cada um.
	
main()
{
	setlocale(LC_ALL, "Portuguese");
	int n;
	printf("Insira a quantidade de n�mero a serem lidos: "); 
	scanf("%d", &n);
	for(int i = 1; i <= n; i++)
	{
		if(i > 1) printf("\n");
		printf("\nO tripo de %d �: %d\n", i, i*3);
	}
	
}
