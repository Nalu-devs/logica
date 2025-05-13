//Ler o nome, a quantidade adquirida e o preço unitário. Calcular e escrever o total a pagar. Onde:
//Total = quantidade adquirida * preço unitáritotal
//Pagar = total – desconto
//O desconto será calculado, sabendo-se que:
//- Se quantidade <= 20 o desconto será de 2%
//- Se quantidade > 20 o desconto será de 5%
//OBS: quantidade máxima permitida é 50 (não aceitar valores superiores).

#include <iostream>
using namespace std;
main(){
    setlocale(LC_ALL,"portuguese");
    char nome[40];
    int quant;
    float preco, totalPag, pagFinal, desconto;
    cout<<"Digite o nome do produto";
    cin>>nome;
    cout<<"Digite o valor unitario do produto";
    cin>>preco;
    do{
        cout<<"Digite a quantidade adquirida";
        cin>>quant;
    }while(quant>50);
    totalPag=quant*preco;
    if (quant<=20){
        desconto=totalPag*0.02;
    }
    else if (quant>20){
        desconto=totalPag*0.05;
    }
    pagFinal=total-desconto;
    cout<<"O produto"<<nome<<"tem preco unitario de:"<<totalPag<<"e a quantidade adiquirida foi"<<quant<<"o valor final sera de"<<pagFinal;
}