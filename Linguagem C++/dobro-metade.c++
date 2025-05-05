#include <iostream>
using namespace std;
main()
{
    setlocale(LC_ALL, "portuguese");
	float num, metade, dobro;
	cout<<"Digite um número e diremos seu dobro e sua metade";
	cin>>num;
	metade=num/2;
	dobro=num*2;
	cout<<"A metade do número "<< num <<" é igual a "<<metade<<" e seu dobro é "<<dobro;
}