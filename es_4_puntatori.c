#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct a{
    int anni;
    int voto;
}Alunno;
int main(){
    Alunno *vett;
    int dim;
    printf("inserire la dimensione: ");
    scanf("%d" , &dim);
    vett = malloc(dim * sizeof(Alunno));
    for(int k = 0; k < dim; k++){
        printf("vettore posizione [%d]= %d\n" , k , vett+k);
    }
    free(vett);
}
