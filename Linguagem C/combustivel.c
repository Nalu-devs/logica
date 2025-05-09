#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "portuguese");
	char op, combustivel, formaPag;
	float numLitros, precoCombustivel, valorF, desconto;
	printf("\t\t Calculo de valor de combustivel por litro\n\n ");
	do {
		do {
			printf("Digite o tipo de combustivel (A-álcool ou G-gasolina): \n");
			scanf("%c", &combustivel);
		} while (combustivel != 'A' && combustivel != 'a' && combustivel != 'g' && combustivel != 'G');
		do {
			printf("Digite a forma de pagamento (A-Avista ou C-Cartão): \n");
			scanf("%c", &formaPag);
		} while (formaPag != 'A' && formaPag != 'a' && formaPag != 'c' && formaPag != 'C');
		if (combustivel == 'a' || combustivel == 'A') {
			printf("Digite a quantidade de litros vendidos: \n");
			scanf("%f", &numLitros);
			printf("Digite o valor do álcool hoje: ");
			scanf("%f", &precoCombustivel);
			if ((formaPag == 'a' || formaPag == 'A') && numLitros <= 20) {
				desconto = 0.03 * (precoCombustivel * numLitros);
				valorF = precoCombustivel * numLitros - desconto;
				printf("O valor a ser pago pelo cliente é: %.2f \n", valorF);
			} else if ((formaPag == 'a' || formaPag == 'A') && numLitros > 20) {
				desconto = 0.05 * (precoCombustivel * numLitros);
				valorF = precoCombustivel * numLitros - desconto;
				printf("O valor a ser pago pelo cliente é: %.2f \n", valorF);
			} else {
				valorF = precoCombustivel * numLitros;
				printf("O valor a ser pago pelo cliente é: %.2f \n", valorF);
			}
		} else if (combustivel == 'g' || combustivel == 'G') {
			printf("Digite a quantidade de litros vendidos: \n");
			scanf("%f", &numLitros);
			printf("Digite o valor da gasolina hoje: ");
			scanf("%f", &precoCombustivel);
			if ((formaPag == 'a' || formaPag == 'A') && numLitros <= 20) {
				desconto = 0.04 * (precoCombustivel * numLitros);
				valorF = precoCombustivel * numLitros - desconto;
				printf("O valor a ser pago pelo cliente é: %.2f \n", valorF);
			} else if ((formaPag == 'a' || formaPag == 'A') && numLitros > 20) {
				desconto = 0.06 * (precoCombustivel * numLitros);
				valorF = precoCombustivel * numLitros - desconto;
				printf("O valor a ser pago pelo cliente é: %.2f \n", valorF);
			} else {
				valorF = precoCombustivel * numLitros;
				printf("O valor a ser pago pelo cliente é: %.2f \n", valorF);
			}
		}
		fflush(stdin);
		printf("Digite ! para novo calculo: ");
		scanf("%c", &op);
	} while (op == '!');
}
