#include <stdio.h>
int main(){
    int num1,num2,num3;
    int milhar1,centena1,dezena1,unidade1;
    int milhar2,centena2,dezena2,unidade2;
    int milhar3,centena3,dezena3,unidade3;
    int soman1,soman2,soman3;

    printf("Digite um numero inteiro de 4 digitos:\n");
    scanf("%d", &num1);

    printf("Digite o segundo numero inteiro de 4 digitos: \n");
    scanf("%d", &num2);

    printf("Digite o terceiro numero inteiro de 4 digitos: \n");
    scanf("%d", &num3);

    int original = num1;
    int original2 = num2;
    int original3 = num3;

    //separação de digitos num1:
    milhar1 = num1 / 1000; // digito 1
    num1 = num1 % 1000;
    centena1 = num1 / 100; 
    num1 = num1 % 100;
    dezena1 = num1 /10; //digito 3

    soman1 = milhar1 + dezena1;

    //separação de digitos num2
    milhar2 = num2 / 1000;
    num2 = num2 % 100;
    centena2 = num2 /100;
    num2 = num2 % 100;
    dezena2 = num2 /10;

    soman2 = milhar2 + dezena2;

    //separação de digitos num3: 
    milhar3 = num3 / 1000;
    num3 = num3 % 1000;
    centena3 = num3 / 100;
    num3 = num3 % 100;
    dezena3 = num3 / 10;

    soman3 = milhar3 + dezena3;

    //Maior soma n1:
    if(soman1 > soman2 && soman1 > soman3){
        printf("%d possui a maior soma dos digitos: %d + %d = %d", original,milhar1,dezena1,soman1);
    }
    else if(soman2 > soman1 && soman2 > soman3){
        printf("%d possui a maior soma dos digitos: %d + %d = %d", original2,milhar2,dezena2,soman2);
    }
    else if(soman3 > soman2 && soman3 > soman1){
        printf("%d possui a maior soma dos digitos: %d + %d = %d", original3,milhar3,dezena3,soman3);
    }

    return 0;
}