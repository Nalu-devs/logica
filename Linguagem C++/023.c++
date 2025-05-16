//Escrever um programa que leia uma sequência de valores inteiros, até ser
//lido o valor -99. Quando isso acontecer o programa deverá mostrar a soma e a média dos valores lidos.
#include <iostream>
using namespace std;
main(){
	setlocale(LC_ALL, "portuguese");
	int num;
	float media, cont=0, soma=0;
	do{
		cout<<"Digite um numero ou -99 para sair";
		cin>>num;
		if (num!=-99){
			soma=num+soma;
			cont++;	
		}
		else{
			break;
		}
	}while(num!=-99);

	media=soma/cont;
	cout<<"A media dos numeros digitados foi: "<<media<<" E a soma desses numeros foi: "<<soma;
}