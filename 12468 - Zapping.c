#include<stdio.h>
main()
{
    int a,b,m,n;
    while(scanf("%d%d",&a,&b)==2)
    {
        if(a == -1 && b == -1)
            break;
        if(a>b)
        {
            m=a-b;
            n=b + 100 - a;
        }
        else
        {
            m=b-a;
            n=a + 100 - b;
        }
        int X=(m>n)? printf("%d\n",n) : printf("%d\n",m);
    }
    return (0);
}

