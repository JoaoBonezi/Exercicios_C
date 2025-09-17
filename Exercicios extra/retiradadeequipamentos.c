#include <stdio.h>
int main(){
    int hr1,min1,hr2,min2;
    int cod,qtd;
    int centena1,dezena1;
    int mintotal,mintotal2;
    int diferenca,horafinal=0,minfinal;
    float valorbruto,valordesconto;

    printf("Digite a hora de retirada:\n");
    scanf("%d%d", &hr1,&min1);

    printf("Digite a hora de entrega:\n");
    scanf("%d%d", &hr2,&min2);

    printf("Digite o codigo do equipamento:\n");
    scanf("%d", &cod);

    printf("Digite a quantidade de equipamentos:\n");
    scanf("%d", &qtd);

    //ver horas totais:
    mintotal = (hr1 * 60) + min1;
    mintotal2 = (hr2 * 60) + min2;
    diferenca = mintotal2 - mintotal;
    horafinal = diferenca / 60;
    minfinal = diferenca % 60;

    if(minfinal > 0){
        horafinal++;
    }
    printf("Horas cobradas: %d \n", horafinal);
    if(cod == 1){
        valorbruto = (horafinal * 200) * qtd;
        printf("Valor bruto: %.2f\n", valorbruto);
        if(qtd >=3 && qtd <=5){
            valordesconto = valorbruto * 0.90;
            printf("Valor final com desconto: %.2f", valordesconto);
        }
        else if(qtd >=6 && qtd <=9){
            valordesconto = valorbruto * 0.85;
            printf("Valor final com desconto: %.2f", valordesconto);
        }
        else if(qtd > 10){
            valordesconto = valorbruto * 0.80;
            printf("Valor final com desconto: %.2f", valordesconto);
        }
    }
    else  if(cod == 2){
        valorbruto = (horafinal * 250) * qtd;
        printf("Valor bruto: %d\n", valorbruto);
        if(qtd >=3 && qtd <=5){
            valordesconto = valorbruto * 0.90;
            printf("Valor final com desconto: %.2f", valordesconto);
        }
        else if(qtd >=6 && qtd <=9){
            valordesconto = valorbruto * 0.85;
            printf("Valor final com desconto: %.2f", valordesconto);
        }
        else if(qtd > 10){
            valordesconto = valorbruto * 0.80;
            printf("Valor final com desconto: %.2f", valordesconto);
        }
    }
     if(cod == 3){
        valorbruto = (horafinal * 300) * qtd;
        printf("Valor bruto: %d\n", valorbruto);
        if(qtd >=3 && qtd <=5){
            valordesconto = valorbruto * 0.90;
            printf("Valor final com desconto: %.2f", valordesconto);
        }
        else if(qtd >=6 && qtd <=9){
            valordesconto = valorbruto * 0.85;
            printf("Valor final com desconto: %.2f", valordesconto);
        }
        else if(qtd > 10){
            valordesconto = valorbruto * 0.80;
            printf("Valor final com desconto: %.2f", valordesconto);
        }
    }
    return 0;
}