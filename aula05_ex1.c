#include <stdlib.h>
#include <stdio.h>
#include "fila.h"

int Par(Fila *f)
{
    int cont=0;
    Nos *aux;
    for(aux=f->ini;aux!=NULL;aux=aux->prox)
    {
        if(aux->info%2==0)
        {
            cont++;
        }
    }
    return cont;
}

Fila* tira(Fila *f)
{
    Fila *g;
    Nos *aux;
    g=CriaFila();
    for(aux=f->ini;aux!=NULL;aux=aux->prox)
    {
        if(aux->info!=15)
        {
            InsereFila(g,aux->info);
        }
    }
     liberaFila(f);
    return g;
}

void separafila (Fila *g)
{
    Fila *i;
    Fila *p;
    Nos *aux;
    i=CriaFila();
    p=CriaFila();
    for(aux=g->ini;aux!=NULL;aux=aux->prox)
    {
        if(aux->info%2==0)
        {
            InsereFila(p,aux->info);
        }

        else
        {
            InsereFila(i,aux->info);
        }
    }
    printf("\nOs elementos dessa fila que sao impar sao");
    imprimeFila(i);
    printf("\nOs elementos dessa fila que sao par sao");
    imprimeFila(p);
}
Fila* maiorqv(Fila *g)
{
    Nos *aux;
    Fila *j;
    Fila *h;
    j=CriaFila();
    h=CriaFila();
    for(aux=g->ini;aux!=NULL;aux=aux->prox)
    {

        if (aux->info>=20)
        {
            InsereFila(j,aux->info);
        }
        else
        {
             InsereFila(h,aux->info);
        }
    }
    printf("\nOs numeros acima ou igual a 20 sao:");
    imprimeFila(j);

    return h;
}

Fila* separaetira(Fila *g)
{
    Fila *i, *p;
    i=CriaFila();
    p=CriaFila();
    Nos *aux;
   for(aux=g->ini;aux!=NULL;aux=aux->prox)
   {
        if(aux->info%2==0)
        {
            InsereFila(p,aux->info);
        }
        else
        {
            InsereFila(i,aux->info);
        }
            RetiraFila(g);
   }
    printf("\nSeus numeros impares sao:");
    imprimeFila(i);
    printf("\nSeus numeros pares sao:");
    return p;

}

int main()
{
    Fila *f;
    int num=0;
    int pares=0;
    Fila *g;
    Fila *p;
    Fila *v;

    f=CriaFila();
    g=CriaFila();
    p=CriaFila();
    v=CriaFila();

    while(num>=0)
    {
        printf("Qual numero voce deseja guardar na fila?");
        scanf("%d",&num);
        if(num<0)
        {
             imprimeFila(f);
             pares=Par(f);
             printf("\nHa %d numeros pares na sua fila!",pares);
             g=tira(f);
             printf("\n");
             imprimeFila(g);
             separafila(g);
             v=maiorqv(g);
             printf("\nOs numeros abaixo de 20 sao:");
             imprimeFila(v);
             p=separaetira(g);
             imprimeFila(p);
        }
        InsereFila(f,num);
    }
    return 0;

}


