#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,n) for(int i=0;i<n;++i)
#define YES cout << "YES\n";
#define NO cout << "NO\n";
#define ff first
#define ss second
#define pb push_back
#define pp pop_back
 
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define nl "\n"
void solve()
{
     // bitset<8>b;
     // bitset<8>b(7);
     bitset<8>b(string("1010"));//00000010
     		// b.reset();	
     					   //76543210-indexing are like this
     			b.set(3);
     			b.flip();
     			cout<<b<<nl;			   
     // b.set();//make all item true
     // b.reset();//make all item false
     // cout<<b<<nl;
     // f(i,b.size())cout<<b[i];
     
    // cout<<" 1's no "<< b.count()<<nl; // count the true digit;
    // if(b.any()){
    	// cout<<"1 ace tahole true"<<nl;
    // }else{
    	// cout<<"there is no one here so false"<<nl;
    // }
     // if(b.none()){
     	// cout<<"all are zero "<<nl;
     // }else{
     	// cout<<"all aren't zero "<<nl;
     // }
//to set and reset individual bits
// cout<<b<<nl;
	// b.set(0);//set the index of 0;
	// b.reset(3);//reset the idx of 3
	// cout<<b<<nl;
	//to inverse whole bits use the filp 0->1 && 1-0
	
	// b.flip();
	// cout<<b<<nl;

}


int main()
{
    fastio;



    solve();
    return 0;
}

