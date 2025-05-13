//Indique o valor do salário e do aumento e calcule o valor do reajuste

#include <iostream>
using namespace std;
main()
{
    setlocale(LC_ALL, "portuguese");
	float sal, novosal, aumento;
	cout<<"Escreva seu salario atual: ";
	cin>>sal;
	cout<<"Escreva seu aumento: ";
	cin>>aumento;
	novosal=sal+aumento;
	cout<<"Seu novo salario é: "<<novosal;
}