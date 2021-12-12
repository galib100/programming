#include<bits/stdc++.h>
using namespace std;
int main()
{
    string ss;
    int cup=0,f=0;
    cin>>ss;
    for(int i=0; i<ss.length(); i++)
    {
        if(i==0)
        {
            if(islower(ss[i]))
            {
                f=1;

            }
            else
            {
                cup++;
            }
        }
        else
        {

            if(isupper(ss[i]))
            {
                cup++;

            }
        }
    }
    if((f==1 && cup==ss.length()-1))
    {
        for(int i=0; i<ss.length(); i++)
        {
            if(i==0)
            {
                ss[i] = toupper(ss[i]);
            }
            else
            {
                ss[i]=tolower(ss[i]);

            }
            cout<<ss[i];
        }

    }
    else if ((cup==ss.length())){
        for(int i=0; i<ss.length(); i++)
        {
            ss[i]=tolower(ss[i]);
                        cout<<ss[i];
        }
    }
    else{
        for(int i=0; i<ss.length(); i++)
        {
                        cout<<ss[i];
        }

    }


 cout<<endl;
    return 0;
}
