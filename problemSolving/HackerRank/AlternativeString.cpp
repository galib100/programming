#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string ss;
        int temp=0;
        cin>>ss;
        for(int i=0; i<=ss.length();i++)
        {

                if(ss[i]==ss[i+1])
                {
                 temp++;
                }

        }
        cout<<temp<<endl;
    }
return 0;
}

