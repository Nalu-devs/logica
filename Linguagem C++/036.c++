//Guardar 10 valores inteiros e positivos em um vetor e gerar outro vetor com
//resultados da seguinte forma: Se o valor guardado for par, multiplica-lo por
//2, se o valor guardado for ímpar, multiplica-lo por -1.


#include <iostream>
using namespace std;
main(){
	setlocale(LC_ALL,"portuguese");
    int vetorA[10],i, num, par, impar;
    cout<<"Digite valores inteiros e positivos: \n\n";
    	for(i=0;i<10;i++){
    		do{
    			cin>>vetorA[i];
			}while(num<0);
		}
		for(i=0;i<10;i++){
			if(vetorA[i]%2==0){
				vetorA[i]*=2;
			}
			else{
				vetorA[i]*=-1;
			}
		}
		for(i=0;i<10;i++){
			cout<<"Valores do vetor: "<<vetorA[i]<<"\n";
		}
}