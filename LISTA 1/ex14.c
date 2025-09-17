#include <stdio.h>
int main(){
    float val1,val2,val3,area;
    printf("Digite o primeiro valor: \n");
    scanf("%f", &val1);
    printf("Digite o segundo valor: \n");
    scanf("%f", &val2);
    printf("Digite o terceiro valor: \n");
    scanf("%f", &val3);
    
    area = ((val1+val2)/2)*val3;

    printf("A area do triangulo eh %.2f\n", area);

}