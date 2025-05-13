//Calcule a area de um terreno com base na sua altura e largura

#include <stdio.h>
main(){
	float l, c, ar; /*Declaração de variavel do tipo real*/
	char nome[40], op;/*Declaração de variavel do tipo caracter, grande exemplo: nome e um caracter exemplo:op*/
	printf("Digite a largura do terreno: ");
	scanf("%f",&l);
	printf("Digite o comprimento do terreno: ");
	scanf("%f",&c);
	ar=l*c;
	printf("A area do seu terreno de largura: %.2f e comprimento: %.2f é igual a: %.2f",l, c, ar);/*O comando .numero define quantas casas vai ter depois da virgula*/
    system("pause");/*Serve para o aplicativo mostrar o resultado no aplicativo*/
}