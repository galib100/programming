
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    set<char>st;
    while(1){
        char a;
        cin>>a;
        if(a=='{' || a==',' || a=='}'){

        }else {
        st.insert(a);
        }

        if(a=='}'){ break;}
    }

        cout<<st.size()<<endl;



}


int main()
{

    solve();
    return 0;
}


