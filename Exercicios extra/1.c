#include <stdio.h>
int main(){
    int celcius;
    float far;
    printf("Digite a temperatura em celcius:\n");
    scanf("%d", &celcius);

    if(celcius < 0){
        printf("Congelando!\n");
    }
    else if(celcius > 35){
        printf("Quente!\n");
    }
    else if(celcius >= 0 && celcius <= 35){
        printf("Normal!\n");
    }

    far = ((celcius * 9) /5 )+32;

    printf("Em Fahrenheit: %.2f.\n", far);

    return 0;
}