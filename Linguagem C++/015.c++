//Gerar e mostrar os valores ímpares até 500

#include <iostream>
using namespace std;
main(){
    setlocale(LC_ALL, "portuguese");
    int i;
    cout<<"\t\t Números impares até 500";
    for(i=1;i<500;i=i+2){
        cout<<"\n"<<i;
    }
}