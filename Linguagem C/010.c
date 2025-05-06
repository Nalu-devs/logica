#include <stdio.h>
main()
{
	float num, ant, suc;
	printf("Digite um número e diremos seu antecessor e seu sucessor");
	scanf("%f",&num);
	ant=num-1;
	suc=num+1;
	printf("O sucessor do número %2.f é igual a %2.f e seu antecessor é %2.f",num, suc, ant);
}