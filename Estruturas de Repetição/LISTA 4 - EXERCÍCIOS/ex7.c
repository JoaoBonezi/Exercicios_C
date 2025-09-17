#include <stdio.h>
int main(){
    int num;

    printf("Informe diversos numeros para vereficar se sao par (0 para sair):\n");

    while(1){
        scanf("%d", &num);
        if(num % 2 == 0){
            printf("%d eh um numero par.\n\n", num);
            if(num == 0){
                break;
            }
        }
    }
    return 0;
}