#include <iostream>
using namespace std;
main()
{
    setlocale(LC_ALL,"portguese");
	float sal, novosal, reajuste;
	cout<<"escreva o valor do seu salario e o reajuste: ";
	cin>>sal>>reajuste;
	novosal=reajuste/100*sal+sal;
	cout<<"O valor do seu novo salario é: "<<novosal;
}