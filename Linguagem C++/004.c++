//Peça ao usuário a duração de um evento e informe as horas, minutos e segundos desse tempo

#include <iostream>
using namespace std;
main(){
    setlocale(LC_ALL, "portuguese");
    int de, h, m, s;
    cout<<"Digite a duração de um evento";
    cin>>de;
    h=de/3600;
    m=h%3600;
    s=m%60;
    cout<<"O evento tem: "<<h<<" horas, "<<m<<" minutos e"<<s<<" segundos";
}