#include <stdio.h>
main()
{
	float sal, novosal, aumento;
	printf("Escreva seu salario atual: ");
	scanf("%f",&sal);
	printf("Escreva seu aumento: ");
	scanf("%f",&aumento);
	novosal=sal+aumento;
	printf("Seu novo salario é: %2.f", novosal);
}