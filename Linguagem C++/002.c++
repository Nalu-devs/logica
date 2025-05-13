//Peça ao usuário que digite o ano, o mes e o dia que nasceu e calcule a idade dele apenas em dias

#include <iostream>
using namespace std;
main(){
    setlocale(LC_ALL, "portuguese");
    int a,m,d,dv;
    cout<<"Digite o ano do seu nascimento: ";
    cin>>a;
    cuot<<"Digite o mês do seu nascimento: ";
    cin>>m;
    cout<<"Digite o dia do seu nascimento: ";
    cin>>d;
    dv=(a*365)+(m*30)+d;
    cout<<"Sua idade em dias é:"<<dv;
}