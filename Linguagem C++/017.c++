//Gerar a tabuada de um valor solicitado pelo usuário e verificar se ele deseja novo cálculo de tabuada

#include <iostream>
using namespace std;
main(){
    setlocale(LC_ALL, "portuguese");
    int num,i,res;
    char op;
    do{
        cout<<"\t\t Digite o número para a tabuada";
        cin>>num;    
        for(i=0;i<=10;i++){
            res=num*i;
            cout<<num<<" X "<<i<< " = "<<res<<"\n";
        }
        cout<<"Digite ! para nova tabuada";
        cin>>op;
    }while(op=='!');
}