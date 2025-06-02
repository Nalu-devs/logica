#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>//biblioteca para as funções isalpha isdigit toupper tolower
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"portuguese");
	char letra, op, num;
	printf("Digite uma letra do alfabeto\n");
	scanf("%c",&letra);
	if (isalpha(letra)){//isalpha verifica se é uma letra do alfabeto
		printf("\nVocê digitou uma letra %c \n\n", letra);
		letra=toupper(letra);//converte em maiusculo
		printf("Maiuscula: %c \n\n", letra);
		letra=tolower(letra);//converte em minuscula
		printf("\nMinuscula: %c \n\n",letra);
	}
	else{
		printf("Você não digitou uma letra!");
	}
	printf("Informe um numero de 0 a 9\n");
 	fflush(stdin);//limpa buffer: mesmo que: c=getche( )
	scanf("%c",&op);
 	if (isdigit(op)){
 	printf("Digito: %c \n\n",op);
 	}
 	else
 	printf("Você não digitou um numero!!!\n\n");
 	
 	if(isalnum(op)){
 		printf("Isso é um caracter alphanumerico: %c\n\n",op);
	 }
 	else
 	printf("Você não digitou um caracter alphanumerico!!!\n\n");
 	
 	if(iscntrl(op)){
 		printf("Isso é um caracter de controle: %c\n\n",op);
	 }
 	else
 	printf("Você não digitou um caracter de controle!!!\n\n");
 	
 	if(isgraph(op)){
 		printf("Isso é um caracter de grafico: %c\n\n",op);
	 }
 	else
 	printf("Você não digitou um caracter de grafico!!!\n\n");
 	
 	if(islower(op)){
 		printf("Isso é um caracter minusculo: %c\n\n",op);
	 }
 	else
 	printf("Você não digitou um caracter minusculo!!!\n\n");
 	
 	if(isprint(op)){
 		printf("Isso é um caracter imprimivel: %c\n\n",op);
	 }
 	else
 	printf("Você não digitou um caracter imprimivel!!!\n\n");
 	
 	if(ispunct(op)){
 		printf("Isso é um ponto: %c\n\n",op);
	 }
 	else
 	printf("Você não digitou um ponto!!!\n\n");
 	
 	if(isspace(op)){
 		printf("Isso é um espaço em branco: %c\n\n",op);
	 }
 	else
 	printf("Você não digitou um espaço em branco!!!\n\n");
 	
 	if(isupper(op)){
 		printf("Isso é uma letra maiuscula: %c\n\n",op);
	 }
 	else
 	printf("Você não digitou uma letra maiuscula!!!\n\n");
 	
 	if(isxdigit(op)){
 		printf("Isso é um caracter hexadecimal: %c\n\n",op);
	 }
 	else
 	printf("Você não digitou um caracter hexadecimal!!!\n\n");
 	system("pause");
 }