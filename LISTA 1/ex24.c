#include <stdio.h>
int main(){
    int hr=0,seg,min;

    printf("Digite os segundos para saber as horas e minutos:\n");
    scanf("%d", &seg);

    hr = seg / 3600;
    min = (seg%3600) / 60;
    

    printf("%d horas %d minutos.\n", hr,min);

    return 0;
}