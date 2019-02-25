#include<stdio.h>

main()
{
    int t;
    scanf("%d",&t);
    char c1=60,c2=62,c3=61;
    long long int a,b;
    while(t--)
    {
        scanf("%lld %lld",&a,&b);
        if(a<b)
            printf("%c\n",c1);
        else if(a>b)
            printf("%c\n",c2);
        else if(a==b)
            printf("%c\n",c3);
    }
    return 0;
}

