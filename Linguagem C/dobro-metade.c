#include <stdio.h>
main()
{
	float num, metade, dobro;
	printf("Digite um número e diremos seu dobro e sua metade");
	scanf("%f",&num);
	metade=num/2;
	dobro=num*2;
	printf("A metade do número %f é igual a %f e seu dobro é %f",num, metade, dobro);
}