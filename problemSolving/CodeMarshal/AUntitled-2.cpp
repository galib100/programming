#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr first
#define pb push_back
#define sc second
#define f(i,n) for(int i=0;i<n;++i)

#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define nl "\n"
void solve()
{
    ll t;
    cin>>t;
    while(t--)
    {
			int n;
			cin>>n;
			char arr[4][n+10];
			set<int>st;
			
			f(i,3){
				f(j,n){
					cin>>arr[i][j];
					
					if(arr[i][j]=='X'){
						st.insert(j);
					}
				}
			}
			// cout<<st.size()<<nl;
			int size =n-st.size();
			
			 if((size%3==0 || size%3==1) && (size/3)%2==0){
			 	cout<<"Grandma"<<nl;
			 }else if((size%3==0 || size%3==1) && (size/3)%2!=0){
			 	cout<<"Jhinuk"<<nl;
			 }else if(size%3==2 && (size/3)%2==0){
			 	cout<<"Jhinuk"<<nl;
			 }else if(size%3==2 && (size/3)%2!=0){
			 		cout<<"Grandma"<<nl;
			 }
    }

}


int main()
{
    fastio;



    solve();
    return 0;
}

