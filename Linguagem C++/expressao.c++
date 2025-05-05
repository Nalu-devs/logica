#include <iostream>
using namespace std;
main()
{
    setlocale(LC_ALL,"portuguese");
	int a,b,c, r,s,d;
	cout<<"Digite três números inteiros: ";
	cin>>a>>b>>c;
	r=(a+b)/c;
	s=(b+c)/a;
	d=(r+s)/2;
	cout<<"O valor de D é igual a "<< d;
}