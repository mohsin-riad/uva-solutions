#include<stdio.h>
/*
int cola(int n)
{
    if(n>0)
    {
        return (n+cola(n/3));
    }
    else
        return n;
}
*/
int main()
{
    int n,total,half;
    while(scanf("%d",&n)!=EOF)
    {
        half=n/2;
        total = half+n;
        printf("%d\n",total);
        /*
        //temp=n;
        if( n%3!=0 )
        {
            n++;
            if( n%3==0 )
                printf("%d\n",cola(n)-1);
            else
            {
                n-=2;
                printf("%d\n",cola(n)+2);
            }
        }
        else
            printf("%d\n",cola(n));
    */
    }
    return (0);
}
