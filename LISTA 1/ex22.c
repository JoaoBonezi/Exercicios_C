#include <stdio.h>
int main(){
    int minutos,hr;

    printf("Digite os minutos para ver as horas:\n");
    scanf("%d", &minutos);

    hr = minutos / 60;

    printf("Conversao de minutos para horas: %d horas.\n", hr);

    return 0;
}