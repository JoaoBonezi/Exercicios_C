#include <stdio.h>
#include <math.h>
int main(){
    float val1,val2,val3,S,area;
    printf("Digite o primeiro valor: \n");
    scanf("%f", &val1);
    printf("Digite o segundo valor: \n");
    scanf("%f", &val2);
    printf("Digite o terceiro valor: \n");
    scanf("%f", &val3);
    
    S = ((val1+val2+val3)/2);
    area = sqrt(fabs(S*(S-val1)*(S-val2)*(S-val3)));

    printf("A area do triangulo eh %.2f\n", area);

}