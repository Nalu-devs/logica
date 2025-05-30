//Escrever um programa que receba vários números inteiros no teclado. E
//no final imprimir a média dos números múltiplos de 3. Para sair digitar 0
//(zero)

#include <iostream>
using namespace std;
main(){
	setlocale(LC_ALL, "portuguese");
	int soma, num, cont=0;
	float media;
	do{
		cout<<"Digite um numero ou 0 para sair \n";
		cin>>num;
		if(num%3==0 && num!=0){
			cont++;
			soma +=num;
	}
	}while(num!=0);
	
	media=soma/cont;
	cout<<"A quantidade de numeros digitados: "<<cont<<" E a media é: "<<media;
}