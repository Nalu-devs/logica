#include <stdio.h>
main(){
	char produto[30], forma_pag;
	float preco, valorF, num_parcela, parcelaF, desconto;
	int quantidade;
	printf("Digite o nome do produto: \n");
	scanf("%s",&produto);
	printf("Digite o preço do produto: \n");
	scanf("%f",&preco);
	printf("Digite a quantidade de produtos: \n");
	scanf("%d",&quantidade);
	fflush(stdin); //serve para n deixar o enter virar um caracter
	printf("Digite a forma de pagamento (v para avista, 5 para 5 vezes ou x para mais de 5 vezes): \n");
	scanf("%c",&forma_pag);
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
		printf("Digite em quantas vezes deseja parcelar sua compra");
		scanf("%f",&num_parcela);
		desconto=(preco*quantidade)*10/100;
		valorF=(preco*quantidade)+desconto;
		parcelaF=(preco*quantidade)/num_parcela;
	}
	else{
		printf("Forma de pagemento inaceitavel digite v para avista, 5 para 5 vezes ou x para mais de 5 vezes");
	}
	printf("O produto %s vai custar %.2f e sua parcela é de %.2f", produto, valorF, parcelaF);
}