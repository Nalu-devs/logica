#include <stdio.h>
main(){
    int i, num, res;
    printf("\t\t Digite um numero e daremos a tabuada de 0 a 10 \n\n");
    scanf("%d",&num);
    for(i>=0;i<=10;i++){
        res=num*i;
        printf("%d X %d = %d \n",num,i,res);
    }
}