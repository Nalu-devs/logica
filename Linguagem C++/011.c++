//Crie uma tabuada do 0 a 10

#include <iostream>
using namespace std;
main(){	
    setlocale(LC_ALL, "portuguese");
    int i, num, res;
    cout<<"\t\t Digite um numero e daremos a tabuada de 0 a 10 \n\n";
    cin>>num;
    for(i>=0;i<=10;i++){
        res=num*i;
        cout<<num<<" X "<<i<<" = "<<res<<" \n";
    }
}