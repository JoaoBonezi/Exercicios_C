#include <stdio.h>
int main(){
    char media;
    float n1,n2,n3;
    float soma;

    printf("Digite suas notas:\n");
    scanf("%f%f%f", &n1,&n2,&n3);

    printf("Digite qual media quer calcular Aritmetica ou harmonica:\n");
    scanf(" %c", &media);

    if(media == 'h' || media == 'H'){
        soma = 3/((1/n1)+(1/n2)+(1/n3));
        printf("Media harmonica: %.2f", soma);
    }
    else if(media == 'a'|| media == 'A'){
        soma = (n1+n2+n3)/3;
        printf("Media aritimetica: %.2f", soma);
    }
    return 0;
}
