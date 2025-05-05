#include <iostream>
using namespace std;
main(){
    setlocale(LC_ALL,"portuguese");
    int i,num;
    cout<<"\t\t\t Digite um número e daremos a tabuada de 0 a 10\n\n";
    cin>>num;
    for(i<=0;i<=10;i++){
        cout<<num<<" X "<<i<<" = "<<num*i<<"\n";
    }
}