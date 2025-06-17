// Faça um algoritmo que leia dois valores inteiros A e B, se os valores de A e B forem iguais, deverá somar os dois valores, 
// caso contrário devera multiplicar A por B. Ao final de qualquer um dos cálculos deve-se atribuir o resultado a uma variável C e
// imprimir seu valor na tela.

#include <iostream>
using namespace std;
main(){
    setlocale(LC_ALL,"portuguese");
    int A, B, C;
    cout<<"Digite o valor de A:\n";
    cin>>A;
    cout<<"Digite o valor de B:\n";
    cin>>B;
    if(A==B){
        C=A+B;
        cout<<"A soma dos valores é: "<<C;
    }
    else{
        C=A*B;
        cout<<"A multiplicação dos valores é: "<<C;
    }
}