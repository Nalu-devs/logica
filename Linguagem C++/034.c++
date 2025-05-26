//Guardar 20 valores reais em um vetor e mostrar todos os valores guardados
//nas posições pares (2-20). Não se esqueça que o índice começa em zero.

#include <iostream>
using namespace std;
main(){
	setlocale(LC_ALL,"portuguese");
    float x[20];
    int i;
    cout<<"\t\tDigite 20 valores e diremos os valores digitados nas posições pares: \n\n";
    for(i=0;i<=19;i++){
        cin>>x[i];
	}
	cout<<"Numeros nas posições pares de 0 a 20\n";
	for(i=1;i<20;i=i+2){
		cout<<"\nPosição "<<i+1<<" tem número: "<<x[i]<<"\n";
	}
}