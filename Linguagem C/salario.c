#include <stdio.h>
main(){
    float sm, r, ns;
    printf("Escreva seu salário mensal: ");
    scanf("%f",&sm);
    printf("Escreva o valor do seu reajuste: ");
    scanf("%f",&r);
    ns=((sm*r)/100)+sm;
    printf("O valor do seu salario mensal é: %.2f mais o seu reajuste: %.2f é igual a seu novo salario de: %.2f", sm, r, ns);
}
