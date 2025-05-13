//Calcular o fatorial de um valor lido pelo usuário. Exemplo: fatorial de 5.
//Para o cálculo: 5! = 5 x 4x 3 x 2 x 1
//Mostrar o resultado

#include <iostream>
using namespace std;
main(){
	setlocale(LC_ALL, "portuguese");
	int num, fatorial=1; //faz o fatorial começar em 1
		cout<<"Digite um numero e diremos o fatorial dele";
		cin>>num;
        if(num<0){
            cout<<"Não é possivel calcular fatorial de negativo";
        }
        else if(num==0){
            cout<<"O fatorial de 0 é 1";
        }
        else{
		    for (int i=1; i<=num;i++){ //cria uma variavel (i) que começa em 1 e vai até o numero digitado e vai acrescentando mais
			    fatorial*=i;//multiplica o fatorial do numero pelo proximo 
		    }
        }
		cout<<"Fatorial de"<<num<<" é igual a: "<<fatorial;
}