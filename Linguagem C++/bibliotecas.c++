#include <iostream>
using namespace std;
#include <conio.h> //para uso da função getch()
#include <locale.h>
main()
{
setlocale (LC_ALL,"Portuguese");
int numero;
float saldo, deb,cr;
char nome[20],op;
do
{
 system("cls"); // limpa a tela
 system(“color 1F”); //coloca tela com fundo azul em letra branca
 cout << "Digite nº da conta: ";
 cin >> numero;
 fflush(stdin); //limpar buffer para entrada string
 cout << "Digite o nome do cliente: ";
 gets(nome); //cin.get(nome,20);
 cout << "Digite seu saldo R$ ";
 cin >> saldo;
 cout << "Digite valor do débito R$ ";
 cin >> deb;
 cout << "Digite valor do crédito R$ ";
 cin >> cr;
 saldo = saldo - deb + cr;
 if (saldo >0)
 {
std::cout.precision(2); // para colocar zeros depois da vírgula
std::cout<< std::fixed << "\n\n\t\t"<<nome << " tem saldo positivo de
R$ "<<saldo <<"\n";
 }
 else if (saldo < 0)
 {
 std::cout.precision(2);//fala a precisão das casas decimais (nesse caso como 2)
std::cout<< std::fixed << "\n\n\t\t"<<nome << " tem saldo
negativo de R$ "<<saldo <<"\n";//demonstra que a linha do cout vai ser std, e o std::fixed diz que os numeros que forem decimais vão se aplicar a regra
 }
 else
{
 std::cout.precision(2);
std::cout<< std::fixed << "\n\n\t\t"<<nome << " tem saldo
zerado. Cuidado!!! \n";
}
cout << "\n\n\tTecle <enter> para novo cálculo: ";
op=getch();//Deixa o caracter digitado sem aparecer
 }while (op==13);//o 13 é o enter na tabela asc
}
