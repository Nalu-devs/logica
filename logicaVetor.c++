//puxamos um numero dentro de um vetor por meio do seu indice
//int x[10]
//x[indice0;indice1;indice2;indice3;indice4;indice5;indice6;indice7;indice8;indice9]
#include <iostream>
using namespace std;
main(){
	setlocale(LC_ALL,"portuguese");
    int x[20], i, posicao, numero, flag=-1, maxDaLista;
    float acumolo=0, media;
    do{
	cout<<"Digite quantos indices terá na lista, máximo de 20 \n";
    cin>>maxDaLista;
	}while(maxDaLista>20);
    cout<<"Digite uma lista com "<<maxDaLista<<" valores para calcular a media deles\n\n";
    for(i=0;i<maxDaLista;i++){
        cin>>x[i];
    }
    for(i=0;i<maxDaLista;i++){
        acumolo+=x[i];
        cout<<x[i]<<" ";
    }
    media=acumolo/maxDaLista;
    cout<<"\n\nMédia dos valores = "<<media<<"\n";
    cout<<"\n\n Deseja verificar o valor de qual posição da lista:\n";
    cin>>posicao;
    cout<<"O valor escolhido da posicao "<<posicao<<" é o: "<<x[posicao-1]<<"\n";//localiza a posição e subtrai um para obter o indice certo já que começa com o indice 0
    cout<<"Qual numero deseja encontrar na lista:\n";
    cin>>numero;
    for(i=0; i<maxDaLista; i++){
    	if(numero==x[i]){//avalia se o numero está no vetor
    		flag=i;//coloca o flag com o indice do valor por exemplo numero 4 está na posição 3 flag passa a valer 3
    		i=19;//faz o indice ser o útilmo da lista do vetor exemplo o 3 vira 19
		}
	}
	if(flag!=-1){
		cout<<"O valor:"<<numero<<"Se encontra na posição: "<<flag+1<<"\n";//Mostra o valor que o usuario quer, exemplo 4, e mostra sua posição 3+1 por causa do 0
	}
	else{
		cout<<"O valor não se encontra na lista\n\n";
	}
	system("pause");
}