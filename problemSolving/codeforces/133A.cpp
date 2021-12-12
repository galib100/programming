#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int main()
{

    string s1,ans;
    cin>>s1;
    int sz= s1.length();
    for(int i=0; i<sz; i++)
    {
        if(s1[i]=='H' || s1[i]=='Q'|| s1[i]=='9'){
        ans = "YES";
        break;
        }
        else{
            ans ="NO";
        }
    }
    cout<<ans<<endl;
    return 0;
}



