//Gerar os valores em ordem decrescente de 500 a 0

#include <iostream>
using namespace std;
main(){
    setlocale(LC_ALL, "portuguese");
    int i;
    cout<<"\t\t Numeros de 500 a 0";
    for(i=500;i<=0;i=i-1)
    {
    cout<<"\n"<<i;
    }
}