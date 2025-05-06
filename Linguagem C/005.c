#include <stdio.h>
main()
{
	int a,b,c, r,s,d;
	printf("Digite três números inteiros: ");
	scanf("%d %d %d",&a,&b,&c);
	r=(a+b)/c;
	s=(b+c)/a;
	d=(r+s)/2;
	printf("O valor de D é igual a %d",d);
}