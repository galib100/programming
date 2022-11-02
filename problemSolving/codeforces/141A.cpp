#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    vector<string>vec;
    int t=0;

    string a,b,d;
    cin>>a;
    cin>>b;
    cin>>d;
    int ans =0;
    string c = a+b;
    for(int i=0;i<c.size();i++){
        for(int j=0;j<d.size();j++){
        if(c[i]==d[j]){
            d[j]='a';
            t=0;
        }else{
            t=1;
        }
    }
    if(t==0){
        ans=0;
    }else{
        ans =1;
        break;
    }
    }
    if(ans==0){
    cout<<"YES"<<endl;

    }else{
        cout<<"NO"<<endl;
    }
}


int main()
{

    solve();
    return 0;
}

