#include <stdio.h>
main()
{
	float sal, novosal, reajuste;
	printf("escreva o valor do seu salario e o reajuste: ");
	scanf("%f %f",&sal,&reajuste);
	novosal=reajuste/100*sal+sal;
	printf("O valor do seu novo salario é: %f",novosal);
}