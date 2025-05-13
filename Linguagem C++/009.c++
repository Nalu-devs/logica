//Peça ao usuário para digitar três numeros e indique se a soma do segundo pelo terceiro é maior ou menor que o primeiro

#include <iostream>
using namespace std;
main()
{
    setlocale(LC_ALL, "portuguese");
	float n1, n2, n3, a, b, c;
	cout<<"Digite 3 numeros: ";
    cin>>n1>>n2>>n3;
    b=n2+n3;
	if(n1>b){
		cout<<"O primeiro é maior que a soma do segundo com o terceiro";
	}
	else if(n1<b){
		cout<<"O primeiro é menor que a soma do segundo com o terceiro";
	}
	else if (n1=b){
		cout<<"Os numeros são iguais";
	}
}