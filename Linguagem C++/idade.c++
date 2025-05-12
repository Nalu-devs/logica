//Solicitar a idade de várias pessoas e imprimir: Quantidade de pessoas
//com menos de 21 anos. Quantidade de pessoas com mais de 50 anos. O
//programa termina quando idade digitada for -99

#include <iostream>
using namespace std;
main(){
	setlocale(LC_ALL, "portuguese");
	int idade, idade21=0, idade50=0;
	do{
		cout<<"Digite a idade: ";
		cin>>idade;
		if (idade<21 && idade>-99){
			idade21++;
		}
		else if(idade>50){
			idade50++;
	}
	}while(idade!=-99);
	cout<<"A quantidade de pessoas com menos de 21 anos é: "<<idade21<<" E a quantidade de pessoas com mais de 50 é: "<<idade50;
}