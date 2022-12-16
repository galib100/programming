#include<bits/stdc++.h>
using namespace std;




int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        int i;
        string s;
        cin>>s;
        string x="";
        string y="";
        for( i=0;i<s.size();++i)
        {
          
              x=s[i];
              for(int j=i+1;j<=s.size();++j)
            {
                 y=s[j];
                 if(x==y)
            {
                cout<<"YES"<<endl;
                 break;
            }
            }
            if(x==y)
            {
                break;
            }
              



        
        }

        if(i==s.size())
        {

        cout<<"NO"<<endl;
        }
    }


    return 0;
}