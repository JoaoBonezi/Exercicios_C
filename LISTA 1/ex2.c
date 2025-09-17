#include <stdio.h>
int main(){
    int soma,num1,num2;
    printf("Digite dois numeros: \n");
    scanf("%d%d", &num1,&num2);
    soma=num1-num2;
    printf("A soma dos numeros %d - %d = %d .\n", num1,num2,soma);
}