#include<stdio.h>
#include<stdlib.h>

int fat(int i)
{
    if (i==1)
        return 1;
    return i*fat(i-1);
}
int main()
{
    int num, res;
    printf("insira um numero: ");
    scanf("%d",&num);
    res=fat(num);
    printf("o fatorial de %d eh %d",num,res);
    return 0;
}
