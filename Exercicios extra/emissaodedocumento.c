#include <stdio.h>
int main(){
    int dia,mes=0,ano=0,validade,ult;

    printf("Dia de emissao:\n");
    scanf("%d", &dia);

    printf("Mes da emissao:\n");
    scanf("%d", &mes);

    printf("Ano da emissao:\n");
    scanf("%d", &ano);

    printf("Digite a data de validade:\n");
    scanf("%d", &validade);

    dia = dia + validade;

    if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
        ult = 31;
    }
    else if(mes ==4 || mes == 6 || mes == 9 || mes == 11){
        ult = 30;
    }
    else if(mes == 2 ){
        ult = 28;
    }

    if(dia > ult){
        dia = dia - ult;
        mes++;
        if(mes > 12){
            mes = 1;
            ano++;
        }
    }
    printf("Data de validade: %d/%d/%d", dia,mes,ano);
}