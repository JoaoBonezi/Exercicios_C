#include <stdio.h>
int main(){
    int num,i,valores;

    printf("Digite o numero de valores que deseja informar:\n");
    scanf("%d", &valores);
    for(i=1;i<=valores;i++){
        scanf("%d", &num);
        if(num % 2 == 1){
            printf("%d eh um numero impar: \n", num);
        }
    }
    return 0;
}