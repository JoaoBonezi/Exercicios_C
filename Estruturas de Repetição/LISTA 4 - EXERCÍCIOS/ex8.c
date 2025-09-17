#include <stdio.h>
int main(){
    int num;
    //FOR INFINITO:
    printf("Digite diversos numeros para saber se sao par (num negativo para sair):\n");
    for( ; ;){
        scanf("%d", &num);

        if(num % 2 == 0){
            printf("%d eh um numero par.\n\n", num);
            if(num < 0){
                printf("\n");
                break;
            }
        }
    }
    return 0;
}