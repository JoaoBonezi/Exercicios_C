#include <stdio.h>
#include <math.h>
int main(){
    int volume,area,mult,num;

    printf("Digite um numero para saber a area e o volume de um cubo: \n");
    scanf("%d", &num);

    //calculo area:
    area = 6 * pow(num, 2);

    //calculo volume:
    volume = pow(num, 3);

    printf("A area do cubo eh %d.\n", area);
    printf("O volume do cubo eh %d.\n", volume);
}