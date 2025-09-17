#include <stdio.h>
int main(){
    float n1,n2,n3,soma=0;
    char Media;
    printf("Digite suas notas:\n");
    scanf("%f%f%f", &n1,&n2,&n3);
    printf("Digite qual media voce quer calcular:\n");
    scanf(" %c", &Media);

    if(Media == 'a' || Media == 'A'){
        soma = (n1+n2+n3)/3;
        printf("A media Aritmetica eh %.2f.", soma);
    }
    else if(Media == 'h' || Media == 'H'){
        soma = 3 / ((1/n1) + (1/n2) + (1/n3));
        printf("A media Harmonica eh %.2f.", soma);

    }
    return 0;
}