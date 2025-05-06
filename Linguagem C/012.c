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