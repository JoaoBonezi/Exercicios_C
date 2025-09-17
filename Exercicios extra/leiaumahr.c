#include <stdio.h>
int main(){
    int hr;

    printf("Digite a hora:\n");
    scanf("%d", &hr);
    if(hr>=0 && hr<=23){
        if(hr >= 0 && hr<=5){
            printf("Madrugada");
        }
        else if(hr >= 6 && hr<=11){
            printf("Manha!");
        }
        else if(hr >= 12 && hr<=17){
            printf("Tarde!");
        }
        else if(hr >=18 && hr<=23){
            printf("Noite");
        }
    } 
    else{
        printf("Hora errada informada.\n");
    }

    return 0;
}