//Faça um algoritmo que gere valores de 1 a 100 e calcule e escreva a
//média aritmética dos valores gerados.

#include <iostream>
using namespace std;
main(){
	setlocale(LC_ALL, "portuguese");
	int i, soma;
	float media;
		for(i=1; i<=100;i++){
			soma+=i;
		}
		media=soma/100;
		cout<<"A media do numero de 1 a 100 é "<<media;
}