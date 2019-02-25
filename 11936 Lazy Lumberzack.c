#include<stdio.h>
int main()
{
    int a,b,c,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d",&a,&b,&c);
        if((a+b)>c && (b+c)>a && (a+c)>b)
            printf("OK\n");
        else
            printf("Wrong!!\n");
    }
    return (0);
}
