#include <stdio.h>
int main(){
    int hr,segundos;

    printf("Digite a hora:\n");
    scanf("%d", &hr);

    segundos = hr * 3600;

    printf("Conversao de horas para segundos: %d segundos.\n", segundos);

    return 0;
}