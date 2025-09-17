#include <stdio.h>
int main(){
    int num,i,soma;

    printf("Digite 15 numeros para ver a soma dos numeros pares:\n");
    
    for(i=0;i<=14;i++){
        scanf("%d", &num);
        if(num % 2 ==0){
            soma = soma + num;
        }
    }
    printf("A soma dos numeros pares eh %d", soma);
}