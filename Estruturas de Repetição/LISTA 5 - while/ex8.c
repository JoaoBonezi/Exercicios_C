#include <stdio.h>
int main(){
    int ValorHr,HrEntrada,Hrsaida,i=1;
    int hrstrabalhadas;
    float soma = 0;
    printf("Digite quanto voce ganha por hora:\n");
    scanf("%d", &ValorHr);

    printf("Digite a hora de entrada e saida de todos os dias:\n");
    while(i <= 22){
        printf("Hora de entrada:\n");
        scanf("%d", &HrEntrada);

        printf("Digite a hora de saida: \n");
        scanf("%d", &Hrsaida);

        if(Hrsaida < HrEntrada){
            hrstrabalhadas = (Hrsaida + 24) - HrEntrada;
        }else{
        hrstrabalhadas = Hrsaida - HrEntrada;
        }
        if(hrstrabalhadas <= 23){
            soma += (float)ValorHr * (float)hrstrabalhadas;
        }
        i++;
    }

    printf("Seu sálario eh R$ %.2f \n", soma);
}