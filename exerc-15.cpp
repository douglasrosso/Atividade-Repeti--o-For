#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL, "Portuguese");
	//Elabore um algoritmo que leia um n�mero e imprima o fatorial desse n�mero. Suponha que o n�mero lido ser� 
	//maior ou igual a zero.
	int fat, n;
	printf("Insira um valor para o qual deseja calcular seu fatorial: ");
	scanf("%d", &n);

	for(fat = 1; n > 1; n--)
	fat = fat * n;

printf("\nFatorial calculado: %d", fat);
	
}
