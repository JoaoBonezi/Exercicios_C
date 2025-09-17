#include <stdio.h>
int main(){
    int hr1,hr2,min1,min2;
    int mintotalhr1,mintotalhr2,diferenca,horasfinais,minfinais;

    printf("Digite a hora inicial (hora e minuto):\n");
    scanf("%d%d", &hr1,&min1);

    printf("Digite a hora inicial (hora e minuto):\n");
    scanf("%d%d", &hr2,&min2);
    //tranformar tudo em minutos depois converter para hr dnv;
    mintotalhr1 = (hr1 * 60) + min1;
    mintotalhr2 = (hr2 * 60) + min2;
    diferenca = mintotalhr2 - mintotalhr1;
    horasfinais = diferenca / 60;
    minfinais = diferenca % 60;


    printf("Horario de saida: %d horas e %d minutos.\n", horasfinais,minfinais);

}