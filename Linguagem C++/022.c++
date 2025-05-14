//Faça um Programa que leia um número e exiba o dia correspondente da semana. 
//(1-Domingo, 2- Segunda, etc.), se digitar outro valor deve aparecer valor inválido.

#include <iostream>
using namespace std;
int main(){
    int num;
    do{
        cout<<"Digite um numero (1 a 7) e diremos o dia da semana para você \n";
        cin>>num;
        cout<<"Valor inválido \n";
    }while(num>7);
    if (num==1){
        cout<<"O dia da semana é: Domingo";
    }
    else if (num==2){
        cout<<"O dia da semana é: Segunda";
    }
    else if(num==3){
        cout<<"O dia da semana é: Terça";
    }
    else if(num==4){
        cout<<"O dia da semana é: Quarta";
    }
    else if(num==5){
        cout<<"O dia da semana é: Quinta";
    }
    else if(num==6){
        cout<<"O dia da semana é: Sexta";
    }
    else if(num==7){
        cout<<"O dia da semana é: Sábado";
    }
}