#include<stdio.h>
main()
{
    long n,sum=0;
    while(scanf("%ld",&n)!=EOF)
    {
        sum=((n*n)*(n+1)*(n+1))/4;
        printf("%ld\n",sum);
    }

    return (0);
}
