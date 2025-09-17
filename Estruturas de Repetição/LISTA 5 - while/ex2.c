#include <stdio.h>
int main(){
    int candidato=0,votos=0;
    int maior1,maior2,candidato1,candidato2;
    do{
        printf("Digite o numero do candidato:\n");
        scanf("%d", &candidato);

        printf("Digite os votos do candidatos:\n");
        scanf("%d", &votos);

        if(votos > maior1){
            maior2 = maior1;
            maior1 = votos;
            candidato1 = candidato;
            
        }
        if(votos > maior2){
            maior2 = votos;
            candidato2 = candidato;
        }

    } while(votos!=0);

    printf("Candidato: %d |  Votos: %d\n", candidato1,maior1);
    printf("Candidato: %d |  Votos: %d\n", candidato2,maior2);
}