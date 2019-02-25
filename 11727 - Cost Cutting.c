#include<stdio.h>
int main()
{
    int a,b,c,t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d%d",&a,&b,&c);

        if(a>b && b>c || c>b && b>a )
            printf("case %d: %d\n",i+1,b);
        else if(b>a && a>c || c>a && a>b )
            printf("case %d: %d\n",i+1,a);
        else
            printf("case %d: %d\n",i+1,c);
    }
    return (0);
}
