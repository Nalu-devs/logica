//Guardar 20 valores inteiros em um vetor e mostrar como resultado: Se o
//valor for positivo, seu dobro, se o valor negativo, seu positivo
//correspondente.


#include <iostream>
using namespace std;
main(){
	setlocale(LC_ALL,"portuguese");
    int vetorA[20],i, dobro, num,  vetorB[5];
    cout<<"\t\tDigite 20 valores para o vetor: \n\n";
    for(i=0;i<20;i++){
    	cin>>vetorA[i];
	}
	for(i=0;i<20;i++){
		if (vetorA[i]>0){
			vetorA[i]*=2;
		}
		else{
			vetorA[i]*=(-1);
		}
	}
	for(i=0;i<20;i++){
		cout<<"\n\nO vetor agora está assim: "<<vetorA[i]<<"\n";
	}
}