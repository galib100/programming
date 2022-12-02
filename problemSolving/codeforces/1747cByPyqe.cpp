#include <bits/stdc++.h>

using namespace std;

long long n;

int main()
{
	long long t,rr,i;

	scanf("%lld",&t);
	for(rr=0;rr<t;rr++)
	{
		scanf("%lld",&n);
		printf("%lld\n",(n+1)/2);
		for(i=1;i<=n+1-i;i++)
		{
			printf("%lld %lld\n",i*3-1,(n+1-i)*3);
		}
	}
}
