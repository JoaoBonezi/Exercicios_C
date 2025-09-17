#include <stdio.h>
int main(){
    int seg,min,hr,segundos;

    printf("Digite o horario (hr,min,seg):\n");
    scanf("%d%d%d", &hr,&min,&seg);

    segundos = (min * 60) + (hr * 3600) + seg;

    printf("A hora informada em segundos eh %d segundos. \n", segundos);

    return 0;
}