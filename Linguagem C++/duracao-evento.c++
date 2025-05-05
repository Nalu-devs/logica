#include <iostream>
using namespace std;
main()
{
    setlocale(LC_ALL,"portguese");
	int td, r, h, m, s;
	cout<<"Digite a hora total do evento: ";
	cin>>td;
	h=td/3600;
	m=h%3600;
	s=m%60;
	cout<<"A duração do evento é "<< h << " horas, "<< m << " minutos, "<<s<< "segundos";
}