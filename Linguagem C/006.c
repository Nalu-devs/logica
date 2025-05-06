#include <stdio.h>
main()
{
	int anoatual, ano, idade;
	char nome[30];
	printf("Digite seu nome:");
	scanf("%s",&nome);
	printf("Digite o ano do seu nascimento:");
	scanf("%d",&ano);
	printf("Digite o ano atual:");
	scanf("%d",&anoatual);
	idade=anoatual-ano;
	printf("%s sua idade é: %d", nome, idade);
}