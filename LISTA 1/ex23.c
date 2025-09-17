#include <stdio.h>
int main(){
    int seg,hr;

    printf("Digite os segundos:\n");
    scanf("%d", &seg);

    hr = seg / 3600;

    printf("Conversao de segundos para horas: %d horas.\n", hr);

    return 0;
}