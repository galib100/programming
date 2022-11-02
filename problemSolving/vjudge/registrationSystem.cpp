#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve ()
{
    vector<string> vec1;
    vector<string> ::iterator it;
    ll n;
    scanf("%lld",&n);
    while(n--)
    {
        string s1;
        cin>>s1;
        if( count(vec1.begin(),vec1.end(),s1) !=0)
        {
       cout<< s1+ to_string(count(vec1.begin(),vec1.end(),s1)) <<endl;
        }
        else
        {
            cout<<"OK"<<endl;
        }
        vec1.push_back(s1);
    }
}

int main()
{
    solve();

    return 0;
}
