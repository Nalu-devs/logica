//Gerar e mostra os valores múltiplos de 3 até 300

#include <iostream>
using namespace std;
main(){
    setlocale(LC_ALL, "portuguese");
    int i;
    cout<<"\t\t Multiplos de 3 a 300";
    for (i=3;i<=300;i=i+3){
        cout<<i<<" ";
    }
}