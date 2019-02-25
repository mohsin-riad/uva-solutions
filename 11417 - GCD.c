#include<stdio.h>
int gcd(long long i,long long j)
{
    long long temp;
    while (j != 0)
    {
        temp = i % j;
        i = j;
        j = temp;
    }
    return i;
}

int main()
{
    long long i,j,N;
    while(scanf("%lld",&N)!=EOF)
    {
        if(N==0)
            break;
        long long G=0;
        for(i=1; i<N ;i++)
        {
            for(j= i+1; j<=N ;j++)
            {
                G+= gcd(i,j);
            }
        }
        printf("%lld\n",G);
    }
    return (0);
}
