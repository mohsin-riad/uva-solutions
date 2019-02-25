#include<stdio.h>
#define x 1000

main()
{
    int n,a,i,j,div[x];
    while(1)
    {
        scanf("%d",&n);
        if(n>=0)
        {
            for(i=0; ;i++)
            {
                a=n/3;
                div[i]=n%3;
                n=a;
                if(n==0)
                    break;
            }
            for(j=i;j>=0;j--)
                printf("%d",div[j]);
            printf("\n");
        }
        if(n<0)
            break;
    }
    return 0;
}
