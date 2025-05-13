//Peça ao usuário para digitar três numeros e indique se a soma do segundo pelo terceiro é maior ou menor que o primeiro

#include <stdio.h>
main()
{
	float n1, n2, n3, a, b, c;
	printf("Digite 3 numeros: ");
	scanf("%f %f %f", &n1 ,&n2,&n3);
	b=n2+n3;
	if(n1>b){
		printf("O primeiro é maior que a soma do segundo com o terceiro");
	}
	else if(n1<b){
		printf("O primeiro é menor que a soma do segundo com o terceiro");
	}
	else if (n1=b){
		printf("Os numeros são iguais");
	}
}