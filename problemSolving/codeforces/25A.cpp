
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    ll t;
    cin>>t;
    vector<int> a;
    int c =0;
    for(int i=0;i<t;i++){
    int an;
        cin>>an;
        a.push_back(an);
        if(a[i]%2 ==0){
            c++;
        }
    }
    for(int i =0;i<t;i++){
    if(c>1){
        if(a[i]%2!=0){
            cout<<i+1<<endl;
            break;
        }
        }
        else{
        if(a[i]%2==0){
            cout<<i+1<<endl;
            break;
        }
        }

    }


}


int main()
{

    solve();
    return 0;
}

