#include<stdio.h>
int main()
{
    int i,n,m,x=0;

    while(1)
    {
        scanf("%d",&n);
        if(n==0)
        {
            printf("END OF OUTPUT\n");
            break;
        }
        if(x!=1)
            printf("PERFECTION OUTPUT\n");
        x=1;
        m=0;
        for(i=1;i<=n/2;i++)
        {
            if(n%i==0)
                m+=i;
        }
        if(m==n)
            printf("%5d  PERFECT\n",n);
        else if(m>n)
            printf("%5d  ABUNDANT\n",n);
        else
            printf("%5d  DEFICIENT\n",n);
    }
    return 0;
}
