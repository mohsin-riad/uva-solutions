#include<stdio.h>
int main()
{

    long n;

    for(;;)
    {
        scanf("%ld", &n);
        if(n < 0)
            break;
        printf("%ld\n", (n * (n + 1)) / 2 + 1);
    }
    return 0;
}
