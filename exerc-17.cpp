#include <stdio.h>
#include <math.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	int size, i, number, larger=-99999, smaller=99999;
	float sum=0, odd=0;
	printf("Informe a quantidade de n�meros: ");
	scanf("%d", &size);
	for (i=1; i<=size; i++)
	{
		printf("N�mero: "); scanf("%d", &number);
		sum+=number;
		if(number>larger)
		{
			larger=number;
		}
		if(number<smaller)
		{
			smaller=number;
		}
		if(number%2!=0)
		{
			odd++;
		}
		
	}
	printf("A soma �: %.2f\n", sum);
	printf("Quantidade de n�meros: %d\n", size);
	printf("A media e: %.2f\n", sum/size);
	printf("O maior n�mero e: %d\n", larger);
	printf("O menor n�mero e: %d\n", smaller);
	printf("O percentual de �mpares e: %.2f%%\n", odd/size*100);
}
