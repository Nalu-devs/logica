//Uma loja está levantando o valor total de todas as mercadorias em
//estoque. Escreva um algoritmo que permita a entrada das seguintes
//informações:
//a. o número total de mercadorias no estoque;
//b. o valor de cada mercadoria
//Ao final imprimir o valor total em estoque e a média de valor das
//mercadorias.

#include <iostream>
using namespace std;
main(){
    setlocale(LC_ALL, "portuguese");
    char nome[40], finaliza;
    int numeroMercadoria, soma=0, media=0, cont=0, valor=0;
    float valorMercadoria;
    do{
        cout<<"Digite o nome da mercadoria que você deseja: \n";
        cin>>nome;
		cout<<"Digite a quantidade de mercadorias "<<nome<<":\n";
		cin>>numeroMercadoria;
        cout<<"Digite o valor do "<<nome<<":\n";
        cin>>valorMercadoria;
		if(numeroMercadoria>0){
			cont++;
			soma += numeroMercadoria ; 
			valor = valorMercadoria*numeroMercadoria;
	}
    	cout<<"Digite f para finalizar ou c para continuar\n";
        cin>>finaliza;
	}while(finaliza!='f');
	media=soma/cont;
	cout<<"O valor total dos produtos é: "<<valor<<" E a media é: "<<media;
}