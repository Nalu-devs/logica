#include <stdio.h>
main(){
    int a,m,d,dv;
    printf("Digite o ano do seu nascimento: ");
    scanf("%d",&a);
    printf("Digite o mês do seu nascimento: ");
    scanf("%d",&m);
    printf("Digite o dia do seu nascimento: ");
    scanf("%d",&d);
    dv=(a*365)+(m*30)+d;
    printf("Sua idade em dias é: %d",dv);
}