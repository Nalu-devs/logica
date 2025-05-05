#include <iostream>
using namespace std;
main()
{
    setlocale(LC_ALL, "portuguese");
	int a, m, d, dv, aatual, matual, datual;
	cout<<"Digite seu ano, mes e dia de aniversario e daremos sua idade em dias: ";
	cin>>a>>m>>d;
	cout<<"Digite o ano, mes e dia atual";
	cin>>aatual>>matual>>datual;
	d=datual-d;
	m=matual-m;
	a=aatual-a;
	dv=(a*365)+(m*30)+d;
	cout<<"Sua idade em dias é"<<dv;
}