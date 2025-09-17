#include <stdio.h>
int main(){
    int hr1,min2,min1,hr2,cod,valor,horas=0,minutos;
    float qtd,desconto,valordes,valorbruto;
    printf("Digite a hora e minutos de entrada do equipamento:\n");
    scanf("%d%d", &hr1,&min1);

    printf("Digite o codigo do equipamento:\n");
    scanf("%d", &cod);

    printf("Digite a hora e minutos da devolucao do equipamento:\n");
    scanf("%d%d", &hr2,&min2);

    printf("Digite a quantidade de equipamentos alugados:\n");
    scanf("%f", &qtd);

    if(cod == 1){
        valor = 200;
    }
    else if(cod == 2){
        valor = 250;
    }
    else if(cod == 3){
        valor = 300;
    }

    minutos = (hr2 * 60 + min2) - (hr1 * 60 + min1);
    horas = minutos / 60;
    if(minutos % 60 > 0) horas++;

    if(qtd>=3 && qtd <=5){
        desconto = valor * 0.90;
    }
    else if(qtd>=6 && qtd <=9){
        desconto = valor * 0.85;
    }
    else if(qtd>=10){
        desconto = valor * 0.80;
    }

    valorbruto = valor * qtd * horas;
    valordes = desconto * qtd * horas;
    
    printf("Horas: %d.\n", horas);
    printf("Valor Bruto: %.2f\n", valorbruto);
    printf("Valor com desconto: %.2f\n", valordes);
        
}
