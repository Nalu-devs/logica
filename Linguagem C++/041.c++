// Faça um algoritmo que leia os valores de A, B, C e em seguida imprima na tela a soma entre A e B é mostre se a soma é menor que C.

#include <iostream>
using namespace std;
main(){
    setlocale(LC_ALL,"portuguese");
    float A, B, C, soma;
    cout<<"Digite um valor para A:\n";
    cin>>A;
    cout<<"Digite um valor para B:\n";
    cin>>B;
    cout<<"Digite um valor para B:\n";
    cin>>C;
    soma=A+B;
    if(soma<C){
        cout<<"A soma de "<<A<<" e "<<B<<" é menor que "<<C;
    }
    else{
        cout<<"A soma de "<<A<<" e "<<B<<" é maior que "<<C;
    }
}