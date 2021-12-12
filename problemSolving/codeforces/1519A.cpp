#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
   long long int r,b,d;
    cin>>r>>b>>d;
    long long int diff = r-b;
    if(r-b<0){
        diff = diff*(-1);
    }
    if(diff<=d && (r==1||b==1)){
        cout<<"YES"<<endl;
    }
    else if(d==0&&(r==b)){
    cout<<"YES"<<endl;
    }
    else if(diff>d && (r>1 && b>1) && (d!=0)){
            int vag,smll,ses;
        if(r>b){
           vag = r/b;
    smll = b;
    ses = r%b;

        }else{
           vag = b/r;
           smll = r;
           ses =b%r;
            }
                if( (ses == 0 && vag-smll<=d) || (ses!=0&&(vag+1-smll<=d))){
                    cout<<"YES"<<endl;
    }else{
                cout<<"NO"<<endl;
                }

            }


    else{
        cout<<"NO"<<endl;
    }


    }
    return 0;
}
