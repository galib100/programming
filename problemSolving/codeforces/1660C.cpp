#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool isEven(string ss)
{
    int n=  ss.length();
    for(int i=0; i<n-1;)
    {
        if((n%2!=0))
    {
        return false;
    }
    else
    {
        if(ss[i]!=ss[i+1])
            {
                return false;
            }

    }

        i+=2;
    }///aaaooo
    return true;
}
void solve()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string ss;
        int totalCount=0;
        cin>>ss;

        for(int i=0;i<ss.length();i++){
            int temp = ss[i];
            if(i%2==0){
                if(temp !=ss[i+1]){
                   for(int j =i+1; ;j++){
                    if(ss[i]!=ss[j]){
                        totalCount++;
                    }else{
                    break;
                    }

                   }
                }
            }
        }
        cout<<totalCount<<endl;

    }

}


int main()
{

    solve();
    return 0;
}

