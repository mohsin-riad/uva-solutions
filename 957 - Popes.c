#include<stdio.h>

int main() {
    long long n,years,i;
    while(scanf("%lld",&years)!=EOF)
    {
        scanf("%lld",&n);
        long long ar[n];

        for(i=0 ; i<n ; i++)
        {
            scanf("%lld",&ar[i]);
        }
        long long  numo=0,lower,upper,j,number;
        for(i=0;i<n;i++)
        {
            j=i;
            number=0;
            while(ar[j] < ar[i] + years)
            {
                number++;
                j++;
            }

            if(number>numo)
            {
                numo=number;
                lower=ar[i];
                upper=ar[j-1];
            }
       }
       printf("%lld %lld %lld\n",numo,lower,upper);
    }
    return 0;
}
