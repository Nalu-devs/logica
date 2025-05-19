//A prefeitura de uma cidade deseja fazer uma pesquisa entre as famílias.
//Faça um algoritmo para coletar dados sobre o salário e número de filhos
//de cada família e após as leituras, escrever:
//a. Média de salário das famílias
//b. Média do número de filhos
//c. Maior salário da família
//d. Percentual de famílias com salário menor que R$ 1000,00
//Obs.: O final da leitura dos dados se dará com a entrada de um “salário
//negativo”.

#include <iostream>
using namespace std;
main(){
    float sal;
    int numFilho, mediaSal=0, mediaFilho=0, mediaPercentual=0, somaP=0, somaF=0, somaS=0, cont=0, percentual;
    cout<<"\t\t Calculo de familia\n\n"
    do{
        cout<<"Digite a quantidade de filhos que o casal tem: \n";
        cin>>numFilho;
        cout<<"Digite o valor do seu salário (caso o valor seja abaixo de 0 o programa encerá): \n";
        cin>>sal;
        if(sal>0){
            cont++;
            somaF+=numFilho;
            somaS+=sal;
        }
    }while(sal>0);
    mediaFilho=somaF/numFilho;
    mediaSal=somaS/sal;
    mediaPercentual=somaP/percentual;
    cout<<"A média do salario das familia é de: "<<mediaSal<<"\nA média do numero de filhos é de: "<<mediaFilho;
}