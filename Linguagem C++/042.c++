// Faça um algoritmo para receber um número qualquer e imprimir na tela se o número é par ou ímpar, positivo ou negativo.

#include <iostream>
using namespace std;
main(){
    setlocale(LC_ALL,"portuguese");
    int num;
    cout<<"Digite um número e diremos sua categoria:\n";
    cin>>num;
    if(num%2==0){
        if(num>=0){
            cout<<"O número "<<num<<" é par e positivo";
        }
        else{
            cout<<"O número "<<num<<" é par e negativo";
        }
    }
    else{
        if(num>=0){
            cout<<"O número "<<num<<" é impar e positivo";
        }
        else{
            cout<<"O número "<<num<<" é impar e negativo";
        }
    }
}