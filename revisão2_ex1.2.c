#include<stdio.h>
#include<stdlib.h>

void funcao (float x, float y, float z, float *r)
{
    *r=(x*x)+y+z;
}

int main()
{
    float n1,n2,n3,r;
    printf("Insira um valor para n1: ");
    scanf("%f",&n1);
    printf("Insira um valor para n2: ");
    scanf("%f",&n2);
    printf("Insira um valor para n3: ");
    scanf("%f",&n3);
    funcao(n1,n2,n3,&r);
    printf("o resultado eh %.2f", r);
    return 0;
}
