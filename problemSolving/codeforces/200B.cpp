#include<bits/stdc++.h>
using namespace std;
int main(){
    float n;
    float sum =0,p,ans;
cin>>n;
    while(n--){
        cin>>p;
        sum=sum+p;
        cout<<sum;
    }
    cout<<"total: "<<sum<<endl;

    ans =sum/float(n);
    printf("%f",ans);

return 0;
}



