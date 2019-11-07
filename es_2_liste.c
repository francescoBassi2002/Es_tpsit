#include  <stdio.h>
#include  <stdlib.h>
#define DIM 5
void creaVett(int n, int vett[]);
void stampaVett(int n, int vett[], int k);
int  main(){
    int c = -1;
    int v[DIM];
    creaVett(DIM, v);
    stampaVett(DIM, v , c);
}
void creaVett(int n, int vett[]){
    for(int i = 0; i < n; i++){
        printf("inserire l'elemento[%d]" , i);
        scanf("%d" , &vett[i]);
    }

}
void stampaVett(int n, int vett[], int k){
    k++;
    if(k != n){
    printf("%d" , vett[k]);
    stampaVett(DIM, vett, k);
    }
}