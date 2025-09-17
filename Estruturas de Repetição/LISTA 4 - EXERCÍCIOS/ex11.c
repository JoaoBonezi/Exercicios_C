#include <stdio.h>
int main(){
    int num,i,soma;

    printf("Digite 15 numeros:\n");
    
    for(i=0;i<=14;i++){
        scanf("%d", &num);
        soma = soma + num;
    }
    printf("A soma dos numeros eh %d.", soma);
}