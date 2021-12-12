
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;


    while(1)
    {
        cin>>m>>n;
    int sum=0;
        if(n>0&&m>0)
        {

            if(n<m)
            {
                for(int i=n; i<=m; i++)
                {
                    cout<<i<<" ";
                    sum+=i;
                }

            }
            else
            {
                for(int i=m; i<=n; i++)
                {
                    cout<<i<<" ";
                    sum+=i;
                }
            }
            cout<<"Sum="<<sum<<endl;
            sum=0;

        }
        else
        {
            break;
        }
    }

    return 0;
}


