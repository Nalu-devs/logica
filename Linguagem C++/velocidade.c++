#include <iostream>
using namespace std;
main()
{
    setlocale(LC_ALL, "Portuguese");
	float velomax, velomoto, multa, passou;
	cout<<"Digite a velocidade maxima da pista e a velocidade que você estava dirigindo";
	cin>>velomax,velomoto;
	passou=velomoto-velomax;
	if (0<passou<=10){
		multa=50;
	}
	else if(11<=passou<=30){
		multa=100;
	}
	else if(passou>=31){
		multa=200;
	}
	else{
		multa=0;
	}
	cout<<"O valo da sua multa é igual a: "<<multa;
}