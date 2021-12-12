#include<bits/stdc++.h>
using namespace std;
int main()
{
    string ss;
    int c=0;
    getline(cin,ss);
    for(int i=0; i<ss.size();)
    {
        if(ss[i]=='W'&&ss[i+1]=='U'&& ss[i+2]=='B')
        {
            if(c>=1){
                cout<<" ";
                c=0;
            }
        i=i+3;

        }
        else
        {
            cout<<ss[i];
            i++;
            c++;
        }
    }
    cout<<endl;
return 0;
}
