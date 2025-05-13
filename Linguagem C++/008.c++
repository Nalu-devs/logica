//Indique o valor do salário e o percentual de aumento, calcule o valor do reajuste

#include <isotream>
using namespace std;
main(){
    setlocale(LC_ALL, "portuguese");
    float sm, r, ns;
    cout<<"Escreva seu salário mensal: ";
    cin>>sm;
    cout<<"Escreva o valor do seu reajuste: ";
    cin>>r;
    ns=((sm*r)/100)+sm;
    cout<<"O valor do seu salario mensal é:" <<sm<<" mais o seu reajuste: "<<r<<" é igual a seu novo salario de: "<<ns;
}
