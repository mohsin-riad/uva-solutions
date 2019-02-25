#include<stdio.h>
#define X 10000
int main()
{

    int N,M,a[X],i,j,p,q;
    while(scanf("%d",&N)==1)
    {
        for(i=0; i<N ;i++)
        {
            scanf("%d",&a[i]);
        }
        scanf("%d",&M);
        int d = 1000000;
        for(i=0; i<N ;i++)
        {
            for(j=0; j<N ;j++)
            {
                int k = a[i]+a[j];
                if(k == M && j != i)
                {
                    if(a[i]>a[j])
                    {
                        if((a[i]-a[j]) < d)
                        {
                            p = a[i];
                            q = a[j];
                            d = a[i]-a[j];
                        }
                    }
                    else
                    {
                        if((a[j]-a[i]) < d)
                        {
                            p = a[j];
                            q = a[i];
                            d = a[j]-a[i];
                        }
                    }
                }
            }
        }
        printf("Peter should buy books whose prices are %d and %d.\n\n",q,p);
    }
    return (0);
}
