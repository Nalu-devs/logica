//Guardar 20 valores reais em um vetor e mostrar todos os valores guardados
//nas posições pares (2-20). Não se esqueça que o índice começa em zero.

#include <iostream>
using namespace std;
main(){
    float x[20];
    int i;
    cout<<"\t\tDigite 20 valores e diremos os valores digitados nas posições pares: \n\n"
    for(i=0;i<20;i++){
        cin>>x[i];
        cout<<x[i]+1<<" ";
    }
}