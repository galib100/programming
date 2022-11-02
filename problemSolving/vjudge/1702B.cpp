#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fr first
#define sc second
#define f(i,n) for(int i=0;i<n;++i)

#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
void solve()
{
    ll t;
    cin>>t;
    while(t--){
        string ss;
        set<char>st;
        cin>>ss;
        f(i,ss.length()){
            st.insert(ss[i]);
        }
        cout<<"size: "<<st.size()<<endl;
        st.size()%3==0?cout<<st.size()/3<<"\n":cout<<(st.size()/3)+1<<"\n";

    }

}


int main()
{
fastio;



    solve();
    return 0;
}


