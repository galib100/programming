//https://codeforces.com/problemset/problem/520/A
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{

    ll n ,c =0;
    cin>>n;
    string ss;
    cin>>ss;
    for(char i = 'a'; i<='z'; i++)
    {

        for(int j =0; j<n; j++)
        {
            if(ss[j] == i || (ss[j] == (char)toupper(i)) )
            {
                c +=1;
                break;

            }
//            cout<<(char)toupper(i)<<endl;
        }
//        if(c==0){
//        cout<<"NO"<<endl;
//        break;
//        }
    }
    if(c>=26){
    cout<<"YES"<<endl;
    }else{
    cout<<"NO"<<endl;
    }


//thereisasyetinsufficientdataforameaningfulanswer

}


int main()
{

    solve();
    return 0;
}

