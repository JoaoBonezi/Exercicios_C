#include <stdio.h>
int main(){
    int eng=0,comp=0,adm=0,i;
    int cod,id=0;
    int id2 = 0;
    float media1,media2,media3;
    int somaadm=0,somacomp=0,somaeng=0 ;

    for(i=0;i<5;i++){
        printf("Informe o Codigo do Curso:\n");
        scanf("%d", &cod);

        printf("Digite sua idade:\n");
        scanf("%d", &id);

        if(id >= 20 && id <=25){
            id2++;
        }

        else if(cod == 1){
            eng++;
            somaeng = somaeng + id;
            
        }
        else if(cod == 2){
            comp++;
            somacomp = somacomp + id;
            
        }
        else{
            adm++;
            somaadm = somaadm + id;
        }

    }
    media1 = (float)somaeng / (float)eng;
    media2 = (float)somacomp / (float)comp;
    media3 = (float)somaadm /  (float)adm;

    int MediaMenor;
    if(media1 < media2 && media1 < media3){
        MediaMenor = 1;
    }
    else if(media2 < media1 && media2 < media3){
        MediaMenor = 2;
    }
    else{
        MediaMenor = 3;
    }
    
    
    printf("Número de alunos matriculados em engenharia: %d\n", eng);
    printf("Número de alunos matriculados em computacao: %d\n", comp);
    printf("Número de alunos matriculados em administracao: %d\n", adm);
    printf("Número de alunos com idade entre 20 e 25 anos: %d\n", id2);
    printf("Codigo do curso com a menor media:%d\n", MediaMenor);
}