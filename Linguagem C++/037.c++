//Guardar em um vetor o ano de nascimento de 10 pessoas e gerar em outro
//vetor a idade de cada pessoa. Mostrar como resultado o ano de nascimento
//e a idade calculada das 10 pessoas e mostre qual a média das idades.

#include <iostream>
using namespace std;
main(){
	setlocale(LC_ALL,"portuguese");
    char nome[10] [30];//o 10 é para repetir 10 vezes e o 30 é a quantidade de caracter
    int data_nasc[10], idade[10], i, num_pessoas, ano_atual;
    float media, soma=0;
    cout<<"\t\tPrograma calculo de idade\n\n";
    do{
        cout<<"Digite a quantidade de pessoas que deseja calcular (Max 10):";
        cin>>num_pessoas;
    }while(num_pessoas>10);

    cout<<"Digite o ano atual:\n";
    cin>>ano_atual;
    
    for(i=0; i<num_pessoas; i++){
    	fflush(stdin);
        cout<<"Digite o nome da "<<i+1<<"ª pessoa\n";
        gets(nome[i]);//gets guardar coisas como nome
        cout<<"Digite o ano de nascimento da "<<nome[i]<<"\n";
        cin>>data_nasc[i];
        idade[i]=ano_atual-data_nasc[i];
        soma+=idade[i];
    }
    media=soma/num_pessoas;
    for(i=0; i<num_pessoas;i++){
        cout<<nome[i]<<" nasceu em "<<data_nasc[i]<<" e sua idade é "<<idade[i]<<"\n";
    }
    cout<<"\n\nA media das idades é igual: "<<media;
}