#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char b;
    int maxsize = 1000;
    b = ' ';
    int k = 0;
    char *string;
    string = malloc(sizeof(int) * maxsize);
    printf("inserire la stringa: ");
    gets(string);
    while(b != '\0'){
        b = *(string+k);
        k++;
    }
    printf("%d" , k-1);
    

}
    