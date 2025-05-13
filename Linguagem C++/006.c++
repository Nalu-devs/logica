//Peça para o usuário informar seu nome, seu ano de nascimento e o ano atual. Exiba sua idade

#include <iostream>
using namespace std;
main(){
    setlocale(LC_ALL,"portuguese");
    char nome[150];
    int ano_nasc, ano_atual, idade;
    cout<<"Digite seu nome completo";
    cin>>nome;
    cout<<"Digite o ano do seu nascimento:";
    cin>>ano_nasc;
    cout<<"Digite o ano atual:";
    cin>>ano_atual;
    idade=ano_atual-ano_nasc;
    cout<<"Sua idade esse ano é: "<<idade;
}