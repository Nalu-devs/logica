//Ler os valores para nome, peso e altura de uma pessoa e calcule o seu IMC (índice de massa corpórea), pela fórmula:
//IMC = peso/(altura2) Escrever o nome da pessoa, seu imc e sua classificação de acordo com a tabela:
//Se o resultado do IMC for até 18, escrever “baixo peso” 
//Se for maior que 18 e menor igual a 24, escrever “normal”
//Se for maior que 24, escrever ‘Obeso’.

#include <iostream>
using namespace std;
main(){
    setlocale(LC_ALL,"portuguese");
    char nome[40], situ[20];
    float peso, altura, imc;
    cout<<"Digite seu nome: \n";
    cin>>nome;
    cout<<"Digite seu peso: \n";
    cin>>peso;
    cout<<"Digite sua altura: \n";
    cin>>altura;
    imc=peso/(altura^^2);
    if (imc<=18){
        situ="Baixo peso";
    }
    else if(imc>18 && imc<=24){
        situ="Normal";
    }
    else{
        situ="Obeso";
    }
    cout<<nome<<" sua situação é: "<<situ;
}
