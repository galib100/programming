#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
   ll n;
   cin>>n;
   ///-1+2-3+4-5
   if(n%2==0){
    cout<<n/2<<endl;
   }
   else{
    cout<<-(n+1)/2<<endl;
   }

    return 0;
}

