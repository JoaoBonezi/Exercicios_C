#include <stdio.h>
int main(){
    int num,milhar,centena,dezena,unidade,soma = 0;

    printf("Digite um numero:\n");
    scanf("%d", &num);

    milhar = num /1000;//digito 1
    num = num % 1000;
    centena = num /100;//digito 2
    num = num % 100;
    dezena = num / 10;//digito 3
    unidade = num % 10; //digito 4

    soma = (milhar + centena) + (dezena + unidade);

    printf("A soma dos digitos eh %d ", soma);
}