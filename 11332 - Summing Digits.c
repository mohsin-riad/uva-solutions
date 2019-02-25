#include<stdio.h>
main()
{
    long long n;
    int temp;
    while(1)
    {
        int i=0,j=0,s=0,s1=0,s2=0;
        scanf("%lld",&n);
        if(n==0)
            break;
        else
        {
            while(n != 0)
            {

                temp=n;
                n /= 10;
                i=temp-(n*10);
                s+=i;
            }

            if(s<10  && s!=0)
                printf("%d\n",s);
            if(s>=10)
            {
                while(s != 0)
                {
                    temp=s;
                    s /= 10;
                    i=temp-(s*10);
                    s1+=i;
                }
            }

            if(s1<10 && s1!=0)
                printf("%d\n",s1);
            if(s1>=10)
            {
                while(s1 != 0)
                {
                    temp=s1;
                    s1 /= 10;
                    i=temp-(s1*10);
                    s2+=i;
                }
            }

            if(s2<10 && s2!=0)
                printf("%d\n",s2);
        }
    }
    return (0);
}
