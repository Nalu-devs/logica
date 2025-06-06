//Dados dois números naturais m e n e duas sequências ordenadas com m e
//n números inteiros, obter uma única sequência ordenada contendo todos
//os elementos das sequências originais sem repetição

#include <iostream>
using namespace std;
main(){
    setlocale(LC_ALL,"portuguese");
    int i, soma=0 m[100], n[100], vetorF[200], elementosM, elementosN;
    do{
    cout<<"Digite a quantidade de elementos do vetor M:\n";
    cin>>elementosM;
    }while(elementosM>100);
    do{
    cout<<"Digite a quantidade de elementos do vetor N:\n";
    cin>>elementosN;
    }while(elementosN>100);

    cout<<"Digite os numeros do vetor M:\n";
    for(i=0;i<elementosM;i++){
		cin>>m[i];
	}
    cout<<"Digite os numeros do vetor N:\n";
    for(i=0;i<elementosN;i++){
		cin>>n[i];
	}
    
    soma = elementosM + elementosN;
    for(i=0; i<=soma;i++){
        if (soma)
    }

}