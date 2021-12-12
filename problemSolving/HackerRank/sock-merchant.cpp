#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;
    int arr[100];
    for(int i=0; i<n; i++)
    {

        cin>>arr[i];

    }
    int ans =0;
    for(int i=0; i<n; i++)
    {
        int c=0;
        for(int j=i; j<n; j++)
        {

                if(arr[i] == arr[j])
                {
                    c++;


                }

        }
        cout<<"jora= "<<c/2<<endl;
        if(c>2){
            ans = ans + (c/2);
        }

    }
    cout<<ans<<endl;
}
