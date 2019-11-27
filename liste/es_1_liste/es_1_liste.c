/*crea  una  lista e la  stampa*/
#include  <stdio.h>
#include  <stdlib.h>
struct  El 
{
    int  valore;
    struct  El* next;
};
int  main()
{
    int n;
    struct  El* lista;
    struct  El* l;
    lista=NULL; /*  il puntatore è vuoto */ 
    
    do
    {
        printf("Inserisci  un  naturale o  -1 per  terminare\n");
        scanf("%d",&n);
        if (n>=0) 
        {
            if (lista==NULL) /*  se il puntatore al vettore è vuoto  */ 
            {
                /*  alloca in memoria lo spazio necessario per la tabella di tipo El */ 
                lista = (struct  El*)  malloc(sizeof(struct  El));
                l = lista;
            }
            else /*  se punta ad una cella di memoria  */ 
            {
                
                 l->next = (struct  El*)  malloc(sizeof(struct  El));
                l = l->next;
            }
            *(l).valore = n; 
            *(l).next = NULL;  
        }
    } while (n>=0);
    
    l=lista;  
    prrfintf("numeri  inseriti: \n");
    while (l!=NULL)
    {
        free()
    }
    printf("\n");
    return  0;
    }