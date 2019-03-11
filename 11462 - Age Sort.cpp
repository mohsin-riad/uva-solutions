#include<bits/stdc++.h>
using namespace std;
#define mx 2000005
int main()
{
	long int arr[mx],i,n;
	while(scanf("%ld",&n) != EOF)
	{
		if(n == 0) break;
		for(i=0; i<n ;i++)
			cin>> arr[i];
    	sort(arr, arr+i);

    	for(i = 0 ; i<n ; i++)
    	{
			cout <<arr[i];
        	if(i<(n-1)) cout<<" ";
		}
        cout<<endl;
	}
	return (0);
}
