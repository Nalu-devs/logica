//Peça ao usuário a duração de um evento e informe as horas, minutos e segundos desse tempo

#include <stdio.h>
main()
{
	int td, r, h, m, s;
	printf("Digite a hora total do evento: ");
	scanf("%d", &td);
	h=td/3600;
	m=h%3600;
	s=m%60;
	printf("A duração do evento é %d horas, %d minutos, %d segundos");
}