#include<stdio.h>
int main()
{
    int i,C,N,count;
    float avg,above_avg;
    scanf("%d",&C);
    while(C--)
    {
        avg=0;
        scanf("%d",&N);
        int G[N+5];
        for(i=0;i<N;i++)
        {
            scanf("%d",&G[i]);
            avg+=G[i];
        }
        avg/=N;
        count=0;
        for(i=0;i<N;i++)
        {
            if(avg<G[i])
            {
                count++;
            }
        }
        above_avg=100*count;
        above_avg/=N;
        printf("%.3f%%\n",above_avg);
    }
    return (0);
}
