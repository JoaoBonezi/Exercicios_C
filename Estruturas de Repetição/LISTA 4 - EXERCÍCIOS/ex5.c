#include <stdio.h>
int main(){
    int num,i;

    printf("Digite 10 valores diferentes:\n");

    for(i=0;i <= 9; i++){
        scanf("%d", &num);
        if(num % 2 == 0){
            printf(\nn"%d eh um numero par.\n", num);
        }else{
            printf("\nValor digitado: %d\n", num);
        }
    }
}