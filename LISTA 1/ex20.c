#include <stdio.h>
int main(){
    int hr,minutos;
    
    printf("Digite as horas para converter para minutos:\n");
    scanf("%d", &hr);

    minutos = hr * 60;

    printf("Conversao de horas para minutos: %d minutos. \n", minutos);
}