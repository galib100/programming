
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    vector<char>svec;
    string ss;
    cin>>ss;

    for(int i=0; i<ss.size(); i++)
    {
       if(i%2==0){
       svec.push_back(ss[i]);
       }
    }
    sort(svec.begin(),svec.end());
    for(int i =0;i<svec.size();i++){
        if(i!=0){
        cout<<"+"<<svec[i];
        }else{
        cout<<svec[i];
        }
    }
    cout<<endl;

}


int main()
{

    solve();
    return 0;
}


