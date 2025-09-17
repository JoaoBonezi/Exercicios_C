#include <stdio.h>
int main(){
    int num1,num2,soma=0;
        printf("Digite dois numeros. \n");
        scanf("%d%d", &num1,&num2);
        soma=num1+num2;
        printf("O resultado da soma eh %d + %d = %d \n", num1,num2,soma);
}