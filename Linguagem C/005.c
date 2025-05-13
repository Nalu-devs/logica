//Peça ao usuário para digitar três numeros e diga o valor de D sabendo que:
//R=(a+b)/c
//S=(b+c)/a
//D=(r+s)/2

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