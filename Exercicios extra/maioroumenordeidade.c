#include <stdio.h>
int main(){
    int id;

    printf("Digite sua idade:\n ");
    scanf("%d", &id);

    if(id >= 18){
        printf("Pessoa maior de idade!\n");
    }
    else if(id<18){
        printf("Pessoa menor de idade!\n");
    }

    return 0;
}