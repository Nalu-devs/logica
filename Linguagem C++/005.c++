//Peça ao usuário para digitar três numeros e diga o valor de D sabendo que:
//R=(a+b)/c
//S=(b+c)/a
//D=(r+s)/2

#include <iostream>
using namespace std;
main(){
    setlocale(LC_ALL, "portuguese");
    int a, b, c, d, s, r;
    cout<<"Digite 3 valores e diremos o valor de D com base nos calculos: \n"
    cin<<a<<b<<c;
    r=(a+b)/c;
    s=(b+c)/a;
    d=(r+s)/2;
    cout<<"O valor de D é: "<<d;
}