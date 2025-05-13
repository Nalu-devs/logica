//Peça ao usuário um numero diga o dobro e a metade deste numero

#include <iostream>
using namespace std;
main(){
    setlocale(LC_ALL, "portuguese");
    float dobro, metade, num;
    cout<<"Digite um numero: \n";
    cin<<num;
    dobro=num*2;
    metade=num/2;
    cout<<"O dobro do numero: "<<num<<" é igual a: "<<dobro<<" e sua metade é: "<<metade;
}