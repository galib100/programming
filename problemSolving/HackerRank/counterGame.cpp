#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool isPowerOfTwo(int n)
{
    return (ceil(log2(n)) == floor(log2(n)));
}

void solve()
{

    ll n;
    int c=0;
    cin>>n;
    while(n>1)
    {
        if(isPowerOfTwo(n))
        {
            n= n/2;
            c++;
        }
        else
        {
            int t=n;
            while(!isPowerOfTwo(t))
            {
                t--;
            }

            n= n-t;//4
//            cout<<"n ="<<n<<endl;
            c++;
        }
    }
//    cout<<" c = "<<c<<endl;
    if(c%2==0)
    {
        cout<<"Richard"<<endl;
    }
    else
    {
        cout<<"Louise"<<endl;
    }


}


int main()
{
    ll test;
    cin>>test;
    while(test--)
    {
        solve();
    }

    return 0;
}


