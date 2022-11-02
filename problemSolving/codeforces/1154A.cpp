
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int n =4;
    vector<int>v;
    while(n--){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end(), greater<int>());

    for(int i =1;i<4;i++){
        if(i==1){
        cout<<v[0]-v[i];
        }
        else{
        cout<<" "<<v[0]-v[i];
        }


    }
     cout<<endl;

}


int main()
{

    solve();
    return 0;
}

