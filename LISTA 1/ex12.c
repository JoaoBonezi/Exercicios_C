#include <stdio.h>
#include <math.h>
int main(){
    int raio,areaCircun;
    
    printf("Digite o raio da circunferencia:\n");
    scanf("%d", &raio);

    areaCircun = 3.14159 * pow(raio, 2);

    printf("A area da circunferencia eh %d. ", areaCircun);
}