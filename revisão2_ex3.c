#include<stdio.h>
#include<stdlib.h>

void imprimeserie(int i,int j,int k)
{
    if (i>j)
    {
        exit(0);
    }
    printf("%d ",i);
    imprimeserie(i+k,j,k);
}

int main()
{
    int n1,n2,n3;
    printf("Insira um valor para iniciar a sequencia: ");
    scanf("%d",&n1);
    printf("Insira um valor para terminar a sequencia: ");
    scanf("%d",&n2);
    printf("Insira um valor para incrementar na sequencia: ");
    scanf("%d",&n3);
    imprimeserie(n1,n2,n3);
}
