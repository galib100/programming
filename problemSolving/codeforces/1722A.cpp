#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    ll t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    string s;
    string gString ="Timur";
    int c =0;
    cin>>s;
    if(n==5){
        for(int i =0;i<5;i++){
            if(gString[i]==s[0] || gString[i]==s[1] || gString[i]==s[2] || gString[i]==s[3] || gString[i]==s[4]){
            c =0;
            }else{
                c =1;
                break;
            }
        }
    }else{
        c=1;
    }

    if(c==0){
        cout<<"YES"<<endl;
        }else{
        cout<<"NO"<<endl;
        }
    }


}


int main()
{

    solve();
    return 0;
}


