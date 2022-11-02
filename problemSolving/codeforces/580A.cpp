
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    vector<int>vec;
    ll n;
    int c=0;
    int temp =0;
    cin>>n;
    while(n--){

        ll a;
        cin>>a;
        vec.push_back(a);
    }
    for(int i =1;i<vec.size();++i){

        if(vec[i-1]<=vec[i]){
            c++;//1
        }
        else {
            if(temp<c){
                temp = c;//1
                c=0;
            }

        }
    }
   if(temp>0){
   cout<<temp+1<<endl;
   }
   else if(c>1){
   cout<<c+1<<endl;
   } else{
   cout<<c<<endl;
   }

}


int main()
{

    solve();
    return 0;
}

