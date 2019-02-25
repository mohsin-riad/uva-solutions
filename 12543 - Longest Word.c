#include<stdio.h>
#include<string.h>
#define n 10000
int main()
{
    int i,max=1;
    char s[n],a[n];
    while(scanf("%s",s))
    {
        if(!strcmp(s,"E-N-D"))
            break;

        int l=strlen(s);
        int c=0;
        for(i=0;i<l;i++)
        {
            if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z' || s[i]=='-')
                continue;
            else
            c++;
        }
        l=l-c;

        if(max<l){
            max = l;
            strcpy(a,s);
        }
    }
    int l=strlen(a);
    int j;
    for(j=0;j<l;j++)
    {
        if(a[j]>='A' && a[j]<='Z')
            printf("%c",a[j]+32);
        else if(a[j]>='a' && a[j]<='z' || a[j]=='-')
            printf("%c",a[j]);
    }
    printf("\n");
    return (0);
}
