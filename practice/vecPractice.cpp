#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    vector<int> p ={2,4,6};
    p.insert(p.begin(),5);

    cout<< *p.begin() << " "<< *(p.end()-1)<<endl;
    for(auto val:p){
        cout<<val<< " ";
    }

}


int main()
{

    solve();
    return 0;
}

