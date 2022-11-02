#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    ll t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[110];
        for(int i=0; i<n; ++i)
        {
            cin>>arr[i];
        }
        int temp =0,c=0;
        for(int i=0; i<n; ++i)
        {


            if((temp-arr[i])>0 && (i>1) && (arr[i]!=0))
            {
                c=1;
                break;
            }
             temp+=arr[i];
        }
        if(c==1)
        {
            cout<<-1<<endl;
        }
        else
        {
            int tmp =0;
            for(int i=0; i<n; ++i)
            {

                 tmp+=arr[i];
                    if(i==0)
                    {
                        cout<<tmp;
                    }
                    else
                    {
                        cout<<" "<<tmp;
                    }

            }
            cout<<endl;
        }

    }


}


int main()
{

    solve();
    return 0;
}

