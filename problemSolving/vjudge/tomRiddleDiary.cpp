#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve ()
{
    vector<string> vec1;
    vector<string> ::iterator it;
    int n;
    scanf("%d",&n);
    while(n--)
    {
        string s1;
//        scanf("%s",s1);
        cin>>s1;
        it =find(vec1.begin(),vec1.end(),s1);
        if(it!=vec1.end())
        {
            cout<<"YES"<<endl;
            cout<<*it<<endl;
        }
        else
        {

            cout<<"NO"<<endl;

        }
        vec1.push_back(s1);
    }

}

int main()
{
    solve();

    return 0;
}
