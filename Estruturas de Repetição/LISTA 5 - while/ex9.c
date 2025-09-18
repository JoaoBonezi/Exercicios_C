#include <stdio.h>
int main(){
    int matricula;
    
    for(;;){
        printf("\nInforme o numero da sua matricula:\n");
        scanf("%d", &matricula);

        if(matricula == 0){
            break;
        }

        float ValorHr;

        printf("Digite o valor que voce ganha por hr:\n");
        scanf("%f", &ValorHr);

        int i = 1;
        int hrincial,hrfinal,hrdetrbalho;
        float salario = 0; 
        
        while(i <= 22){
            printf("Digite a hora de entrada:\n");
            scanf("%d", &hrincial);

            printf("Digite a hora de saida:\n");
            scanf("%d", &hrfinal);
            
            if(hrfinal < hrincial){
                hrdetrbalho = (hrfinal + 24) - hrincial;
            }else{
                hrdetrbalho = hrfinal - hrincial;
            }
            salario += (float)hrdetrbalho * (float)ValorHr;
            i++;
        }
        printf("Seu salario eh R$%.2f.\n", salario);
    }

    return 0;
}