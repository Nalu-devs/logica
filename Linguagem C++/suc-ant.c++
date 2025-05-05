#include <iostream>
using namespace std;
main()
{
    setlocale(LC_ALL, "portuguese");
	float num, ant, suc;
	cout<<"Digite um número e diremos seu antecessor e seu sucessor \n";
	cin>>num;
	ant=num-1;
	suc=num+1;
	cout<<"O sucessor do número "<< num <<" é igual a "<< suc <<" e seu antecessor é "<< ant;
}