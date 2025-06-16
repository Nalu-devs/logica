// Faça um programa para ler 10 números DIFERENTES a serem armazenados
// em um vetor. Os dados deverão ser armazenados no vetor na ordem que forem
// sendo lidos, sendo que caso o usuário digite um número que já tenha sido
// digitado anteriormente, o programa deverá pedir para ele digitar outro número.
// Note que cada valor digitado pelo usuário deve ser pesquisado no vetor,
// verificando se ele existe entre os números que já tenham sido fornecidos. Exibir
// na tela o vetor final que foi digitado

#include <iostream>
using namespace std;
main(){
 	setlocale(LC_ALL, "portuguese");
 	int i=0, a;
 	int vetor[10], n;
 	bool repete;
 	cout<<"\t\tLista de vetor\n\n";
 	while(i<10){
 		repete=0;
 		cout<<"Digite um número:\n";
 		cin>>n;
 		for(a=0;a<i;a++){
 			if(vetor[a]==n){
 				 cout<<"Número já foi digitado,digite outro número\n\n";
 				 repete=true;
				}
			}
			if (repete==false) {
        	    vetor[i]=n;
        	    i++;
       	 	}
	}
	cout<<"Vetor final:";
    for (int vetorF=0; vetorF<10; vetorF++) {
        cout<<vetor[vetorF]<<" ";
    }
 	system("pause");
 }