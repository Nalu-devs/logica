//Programa que calcule a divisão de um numero pelo outro, sabendo que o quociente tem que ser diferente de 0

#include <iostream>
using namespace std;/*Para formatação de numeros float*/
main(){
    setlocale(LC_ALL, "portuguese");
	float num1, num2, res;
	cout<<"Digite o numero que será dividido (dividendo)\n";/*Cout == printf*/
	cin>>num1;/*Cin == scanf*/
	do{
	cout<<"Digite o numero que dividira (divisor) diferente de zero\n";
	cin>>num2;
	}while(num2==0);
	res=num1/num2;
	cout<<"O resultado da divisão de "<< num1 <<" por "<< num2 <<" é igual a "<<res<<"\n";
	system("pause");
}