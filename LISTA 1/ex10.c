#include <stdio.h>
int main(){
    float n1,n2,area;

    printf("Escreva os valores dos lados do retangulo.\n");
    scanf("%f%f", &n1,&n2);

    area=n1*n2;

    printf("A area do retangulo eh %.2f.", area);
}