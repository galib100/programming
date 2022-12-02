#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
int x,y,sum=0,c=0;
cin>>n;
while(n--){
    cin>>x>>y;
    for(int i=x;;i++){
        if(i%2!=0){
            sum=sum+i;
            c++;
        }
        if(c==y){
                c=0;
            break;

        }
    }
    cout<<sum<<endl;
    sum=0;
}
    return 0;
}

