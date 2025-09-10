#include <stdio.h>

float funcao(float x, float y,float z)
{
    float res=0;
    res=(x*x)+y+z;
    return res;
}
int main()
{
    float n1,n2,n3,res=0;
    printf("Insira um valor para n1: ");
    scanf("%f",&n1);
    printf("Insira um valor para n2: ");
    scanf("%f",&n2);
    printf("Insira um valor para n3: ");
    scanf("%f",&n3);
    res=funcao(n1,n2,n3);
    printf("o resultado eh %.2f", res);
    return 0;
}
