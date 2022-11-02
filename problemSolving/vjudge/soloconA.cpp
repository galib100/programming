#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    string ss;
    int w;
    cin>>ss;
    cin>>w;
    int c =0;
    cout<<ss[0];
    for(int i=1;i<ss.length();i++){
    c++;
    if(w==c){
    cout<<ss[i];
    c=0;
    }
    }
    cout<<endl;

}


int main()
{

    solve();
    return 0;
}

