#include <stdio.h>
int main(){
    float div,n1,n2,mult,soma,sub;
    printf("Digite dois numeros: \n");
    scanf("%f%f", &n1,&n2);
    soma = n1+n2;
    sub = n1-n2;
    mult = n1*n2;
    div = n1/n2;
    printf("Numeros Digitados: %.2f e %.2f\n", n1,n2);
    printf("Soma = %.2f\n", soma);
    printf("Subracao: %.2f\n", sub);
    printf("Multiplicacao: %.2f\n", mult);
    printf("Divisao: %.2f\n", div);


}