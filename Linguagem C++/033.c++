//Criar um vetor, preenchê-lo com valores fornecidos pelo usuário e depois imprimi-los.
#include <iostream>
using namespace std;
main(){
	setlocale(LC_ALL,"portuguese");
	int i, vetor[100], elementos;
	do{
		cout<<"Digite quantos elementos vão estar na lista (menor que 100)";
		cin>>elementos;
	}while(elementos>100);
	cout<<"Digite uma lista com "<<elementos<<" elementos:\n\n";
	for(i=0;i<elementos;i++){
		cin>>vetor[i];
	}
	for (i=0;i<elementos;i++){
		cout<<vetor[i]<<" ";
	}
}