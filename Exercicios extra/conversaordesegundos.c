#include <stdio.h>
int main(){
    int seg,min,hr;

    printf("Digite os segundos: \n");
    scanf("%d", &seg);

    hr = seg / 3600;
    seg = seg % 3600;
    min = seg / 60;
    seg = seg % 60;

    printf("Horario: %d hora %d minutos %d segunods\n", hr,min,seg);
}