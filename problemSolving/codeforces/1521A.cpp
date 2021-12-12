#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int x,y,z;
///    x = (a*b)*i;
///    y = a*j;
///    z =a*k;
int c=0;
        for(int i=1;; i++)
        {
            z = (a*b)*i;
            for(int j=1;; j++)
            {
                x = a*j;
                for(int k=1;; k++)
                {
                    y =a*k;
                if(z==x+y){
                    c=1;
                        cout<<"YES"<<endl;
                        cout<<x<<" "<<y<<" "<<z<<endl;
                    break;
                }
                if(c==1){
                    break;
                }
                }
                if(c==1){
                    break;
                }
            }
            if(c==1){
                    break;
                }

        }
        if(c==0){
            cout<<"NO"<<endl;
        }
    }

return 0;
}
