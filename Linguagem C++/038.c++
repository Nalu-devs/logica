//Ler os valores de um vetor inteiro de tamanho 10, e mostre o resultado da
//soma dos números ímpares presentes neste vetor.

#include <iostream>
using namespace std;
main(){
	setlocale(LC_ALL,"portuguese");
    int vetorA[10],i, num, soma=0, impar;
    cout<<"Digite valores: \n\n";
    	for(i=0;i<10;i++){
    		cin>>vetorA[i];
		}
		for(i=0;i<10;i++){
			if(vetorA[i]%2!=0){
				soma+=vetorA[i];
			}
		}
			cout<<"A soma do vetor é: "<<soma<<"\n";
}