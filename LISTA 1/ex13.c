#include <stdio.h>
#include <math.h>
int main(){
    float soma,base,altura;
    printf("Digite a base e altura do triangulo: \n");
    scanf("%f%f", &base,&altura);
    soma=((float)base*(float)altura)/2;
    printf("A area do triangulo eh %.2f", soma);
}