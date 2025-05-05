#include <iostream>
using namespace std;
main()
{
    setlocale(LC_ALL,"portuguese");
	int anoatual, ano, idade;
	char nome[30];
	cout<<"Digite seu nome:";
	cin>>nome;
	cout<<"Digite o ano do seu nascimento:";
	cin>>ano;
	cout<<"Digite o ano atual:";
	cin>>anoatual;
	idade=anoatual-ano;
	cout<< nome <<" sua idade é: "<< idade;
}