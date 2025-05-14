//Ler o nome, o salário fixo e o valor das vendas efetuadas pelo vendedor de uma loja. Sabendo-se que:
//Recebe uma comissão de 3% sobre o total das vendas até R$ 2.000,00
//Recebe 5% sobre vendas acima de R$ 2.000,00 e R$ 5.000,00 e
//Recebe 10% para vendas acima de R$ 5000,00
//Calcular e escrever o seu nome e o salário com abono.

#include <iostream>
using namespace std;
main(){
    char nome[40];
    float salFixo, valorV, comi, salFinal;
    cout<<"Digite seu nome: \n";
    cin>>nome;
    cout<<"Digite seu salario fixo: \n";
    cin>>salFixo;
    cout<<"Digite o valor de suas vendas no mes: \n";
    cin>>valorV;
    if (valorV<=2000){
        comi=valorV*0.03;
    }
    else if(valorV>2000 && valorV<=5000){
        comi=valorV*0.05;
    }
    else{
        comi=valorV*0.1;
    }
    salFinal=salFixo+comi;
    cou<<nome<<" irá receber "<<salFinal;
}