//Crie um algoritmo que leia um número e alerte quando o 
//mesmo for maior do que 100.

#include <iostream>
using namespace std;
int main(){
    setlocale(LC_ALL, "portuguese");
    float num;
    cout<<"\t\t Alerta quando o numero foi maior que 100\n\n";
    do{
        cout<<"Digite um numero: ";
        cin>>num;
        if (num<100){
        cout<<"Numero menor que 100 \n";
        }
        else if(num==100){
            cout<<"Numero igual a 100\n";
        }
    }while(num<=100);
    cout<<"O numero digitado é maior que 100";
}