#include <stdio.h>
main()
{
	int a, m, d, dv, aatual, matual, datual;
	printf("Digite seu ano, mes e dia de aniversario e daremos sua idade em dias: ");
	scanf("%d %d %d",&a,&m,&d);
	printf("Digite o ano, mes e dia atual");
	scanf("%d %d %d",&aatual,&matual,&datual);
	d=datual-d;
	m=matual-m;
	a=aatual-a;
	dv=(a*365)+(m*30)+d;
	printf("Sua idade em dias é %d",dv);
}