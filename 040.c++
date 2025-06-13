// Faça um programa em que troque todas as ocorrências de uma letra L1 pela
// letra L2 em uma frase. A frase e as letras L1 e L2 devem ser fornecidas pelo
// usuário.
// Profª. Ma. Roberta Padoan
// Exemplo: Frase: A onça foi beber água
// Usuário: escolha a letra da frase que será trocada: e (L1)
// Por qual letra: x (L2)
// Saída: A onça foi bxbxr água

#include <iostream>
using namespace std;
#include <locale.h>
#include <string.h>
main(){
	setlocale(LC_ALL,"portuguese");
	char frase[100],l1,l2;
	int i, tam;
	cout<<"Digite a frase: \n";
	gets(frase);
	cout<<"Digite a letra a ser trocada na frase: \n";
	cin>>l1;
	cout<<"Digie a letra que substituira"<<l1<<"\n";
	cin>>l2;
	tam = strlen(frase);
	for(i=0; i<tam; i++){
		if(frase[i]==l1){
			frase[i]=l2;
		}
	}
	cout<<frase<<"\n";
	system("pause");
}