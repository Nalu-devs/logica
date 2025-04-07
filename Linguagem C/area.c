#include <stdio.h>
main(){
	float l, c, ar; /*Declaração de variavel do tipo real*/
	char nome[40], op;/*Declaração de variavel do tipo caracter, grande exemplo: nome e um caracter exemplo:op*/
	printf("Digite a largura do terreno: ");
	scanf("%f",&l);
	printf("Digite o comprimento do terreno: ");
	scanf("%f",&c);
	ar=l*c;
	printf("A area do seu terreno de largura: %f e comprimento: %f é igual a: %f",l, c, ar);
}