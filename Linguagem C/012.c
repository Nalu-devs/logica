//Peça ao usuário para digitar a velocidade maxima permitida em uma pista e a velocidade que ele estava dirigindo:
//Se o motorista passou até 10 paga multa de 50
//Se passou de 11 a 30 multa de 100
//Se passou acima de 30 multa de 200
//Se não sem multa

#include <stdio.h>
main()
{
	float velomax, velomoto, multa, passou;
	printf("Digite a velocidade maxima da pista e a velocidade que você estava dirigindo");
	scanf("%f %f", &velomax, &velomoto);
	passou=velomoto-velomax;
	if (passou > 0 && passou <= 10) {
        multa = 50;
    } else if (passou >= 11 && passou <= 30) {
        multa = 100;
    } else if (passou >= 31) {
        multa = 200;
    } else {
        multa = 0;
    }
	printf("O valor da sua multa é igual a: %2.f",multa);
}