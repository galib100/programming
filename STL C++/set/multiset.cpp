#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr first
#define sc second
#define f(i,n) for(int i=0;i<n;++i)

#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define nl "\n"
void solve()
{
    map<string,int>marks_map;
    marks_map["galib"] = 1;
    marks_map["banna"] = 2;
    marks_map["monira"] = 3;
     auto it = marks_map.begin();
   if(marks_map.find(0)==marks_map.end()){
        cout<<"not found";
    }else cout<<"found"<<nl;

}

int main()
{
    fastio;



    solve();
    return 0;
}


