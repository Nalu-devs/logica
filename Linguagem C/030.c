//Uma loja está levantando o valor total de todas as mercadorias em
//estoque. Escreva um algoritmo que permita a entrada das seguintes
//informações:
//a. o número total de mercadorias no estoque;
//b. o valor de cada mercadoria
//Ao final imprimir o valor total em estoque e a média de valor das
//mercadorias.

#include <stream.h>
#include <locale.h>
main(){
    setlocale(LC_ALL, "portuguese");
    char nome[40], finaliza;
    int numeroMercadoria, soma=0, media=0, cont=0, valor=0;
    float valorMercadoria;
    do{
        printf("Digite o nome da mercadoria que você deseja: \n");
        scanf("%c",&nome);
		printf("Digite a quantidade de mercadorias %c \n",nome);
		scanf("%d",&numeroMercadoria);
        printf("Digite o valor do %c",nome);
        scanf("%f",&valorMercadoria);
		if(numeroMercadoria>0){
			cont++;
			soma += numeroMercadoria ; 
			valor = valorMercadoria*numeroMercadoria;
	}
    	printf("Digite f para finalizar ou c para continuar\n");
        scanf("%c",finaliza);
	}while(finaliza!='f');
	media=soma/cont;
	printf("O valor total dos produtos é: %d E a media é: %d ",valor, media);
}