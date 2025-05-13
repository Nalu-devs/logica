//Faça um programa que mostre o nome do produto quanto vai ser seu custo (multiplicando a quantidade pelo valor) 
//e como vai ser sua forma de pagamento

#include <iostream>
using namespace std;
main(){
	setlocale(LC_ALL, "portuguese");
	char produto[30], forma_pag, op;
	float preco, valorF, num_parcela, parcelaF, desconto;
	int quantidade;
	do{
	cont<<"Digite o nome do produto: \n";
	cin>>produto;//o s serve para declarar que é mais de um carcter
	cont<<"Digite o preço do produto: \n";
	cin>>preco;
	cont<<"Digite a quantidade de produtos: \n";
	cin>>quantidade;
	fflush(stdin); //serve para n deixar o enter virar um caracter
	cont<<"Digite a forma de pagamento (v para avista, 5 para 5 vezes ou x para mais de 5 vezes): \n");
	cin>>forma_pag;//o c serve para declarar apenas um caracter
	if (forma_pag=='v'){
		desconto=(preco*quantidade)*15/100;
		valorF=(preco*quantidade)-desconto;
	}
	else if (forma_pag=='5'){
		cout<<"Digite em quantas vezes (ate 5) deseja parcelar sua compra";
		cin>>num_parcela;
		valorF=(preco*quantidade);
		parcelaF=(preco*quantidade)/num_parcela;
	}
	else if (forma_pag=='x'){
		do{
		cout<<"Digite em quantas vezes deseja parcelar sua compra (ate 10X)";
		cin>>num_parcela;
		desconto=(preco*quantidade)*10/100;
		valorF=(preco*quantidade)+desconto;
		parcelaF=(valorF)/num_parcela;
		}while(num_parcela>10 || num_parcela<5);
	}
	else{
		cout<<"Forma de pagemento inaceitavel digite v para avista, 5 para 5 vezes ou x para mais de 5 vezes";
	}
	cout<<"O produto"<<produto<<" vai custar "<<valorF<<" e sua parcela é de "<<parcelaF<<" \n";
	fflush(stdin); //serve para n deixar o enter virar um caracter
	cout<<"Para fazer novo calculo digite 1 ou  2 para encerar \n";
	cin>>op;
	}while(op=='1');
	cout<<"Fim de programa";
}