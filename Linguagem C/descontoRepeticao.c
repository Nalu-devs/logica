#include <stdio.h>
#include <locale.h>
main(){
	setlocale(LC_All, "portuguese");
	char produto[30], forma_pag, op;
	float preco, valorF, num_parcela, parcelaF, desconto;
	int quantidade;
	do{
	printf("Digite o nome do produto: \n");
	scanf("%s",&produto);//o s serve para declarar que é mais de um carcter
	printf("Digite o preço do produto: \n");
	scanf("%f",&preco);
	printf("Digite a quantidade de produtos: \n");
	scanf("%d",&quantidade);
	fflush(stdin); //serve para n deixar o enter virar um caracter
	do{
	printf("Digite a forma de pagamento (v para avista, 5 para 5 vezes ou x para mais de 5 vezes): \n");
	scanf("%c",&forma_pag);//o c serve para declarar apenas um caracter
	if (forma_pag=='v'){
		desconto=(preco*quantidade)*15/100;
		valorF=(preco*quantidade)-desconto;
	}
	else if (forma_pag=='5'){
		printf("Digite em quantas vezes (ate 5) deseja parcelar sua compra");
		scanf("%f",&num_parcela);
		valorF=(preco*quantidade);
		parcelaF=(preco*quantidade)/num_parcela;
	}
	else if (forma_pag=='x'){
		do{
		printf("Digite em quantas vezes deseja parcelar sua compra (ate 10X)");
		scanf("%f",&num_parcela);
		desconto=(preco*quantidade)*10/100;
		valorF=(preco*quantidade)+desconto;
		parcelaF=(valorF)/num_parcela;
		}while(num_parcela>10 || num_parcela<5);
	}
	else{
		printf("Forma de pagemento inaceitavel digite v para avista, 5 para 5 vezes ou x para mais de 5 vezes");
	}
	}while(forma_pag!='v' || forma_pag!='5' || forma_pag!='x');
	printf("O produto %s vai custar %.2f e sua parcela é de %.2f \n", produto, valorF, parcelaF);
	fflush(stdin); //serve para n deixar o enter virar um caracter
	printf("Para fazer novo calculo digite 1 ou  2 para encerar \n");
	scanf("%c",&op);
	}while(op=='1');
	printf("Fim de programa");
}