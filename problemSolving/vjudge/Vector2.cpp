#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    vector<vector<int>>vec;
    int p,n,q,t,x;
    vec.resize(1000);

    cin>>n>>q;
    for(int i=0; i<q; i++)
    {
        cin>>p;

        if(p==0)
        {
            //pushBack
            cin>>t;
            cin>>x;
            vec[t].push_back(x);


        }
        else if(p==1)
        {
            //Dump
            cin>>t;
            for(int j=0; j<vec[t].size(); j++)
            {
                if(j !=0)
                {
                    cout<<" "<<vec[t][j];


                }else{

                cout<<vec[t][j];

                }

            }
            cout<<endl;

        }
        else
        {
            //clear
            cin>>t;
            vec[t].clear();
        }
    }
}


int main()
{
    solve();
    return 0;
}

