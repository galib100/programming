#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,r1,c1,r2,c2,c=0;
        cin>>n;
        char arr[400][400];
        for(int i =0; i<n; i++)
        {
            for(int j =0; j<n; j++)
            {
                cin>>arr[i][j];
                if(arr[i][j]=='*' && c==0){
                     r1=i;
                     c1=j;
                     c=1;
                }else if(arr[i][j]=='*' && c==1){
                   r2=i;
                   c2=j;
                }
            }

        }
        if(r1 == r2){
                if(n-1>r1){
                    r1=r1+1;
                    r2=r2+1;
                }
                else{
                    r1 = r1-1;
                    r2 = r2-1;
                }


        }
        else if(c1 == c2){
            if(n-1>c1){
                    c1=c1+1;
                    c2=c2+1;
                }
                else{
                    c1 = c1-1;
                    c2 = c2-1;
                }
        }else{

        }
        arr[r1][c2]='*';
        arr[r2][c1]='*';




        for(int i =0; i<n; i++)
        {
            for(int j =0; j<n; j++)
            {
                cout<<arr[i][j];
            }
            cout<<endl;

        }

    }
    return 0;
}

