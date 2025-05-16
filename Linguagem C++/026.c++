//Fazer um programa no qual o usuário vai entrando sucessivamente com
//valores positivos. Quando o usuário entrar com um valor negativo o
//programa para de pedir valores e calcula a média dos valores já
//fornecidos.

#include <iostream>
using namespace std;
main(){
	setlocale(LC_ALL, "portuguese");
	int num, cont=0, soma=0;
	float media;
	do{
		cout<<"Digite um numero ou algum negativo para sair \n";
		cin>>num;
		if (num>0){
			soma+=num;
			cont++;	
		}
		else{
			break;
		}
	}while(num>0);

	media=soma/cont;
	cout<<"A media dos numeros digitados foi: "<<media;
}