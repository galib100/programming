#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector<vector<int>>vec(3,vector<int>(3) );
void pusBack(int t,int x){
     cout<<"push func"<<endl;
    for(int i=0; i<3; i++)
    {
       vec[t][i]=x;
    }

}
void dump(int t){
for(int i=0;i<3;i++){
        cout<<"dump func"<<endl;
    cout<<t<<" "<<i<<"="<<vec[t][i]<<" ";

}
}
void clear1(int t){
     cout<<"cler func"<<endl;
    if(vec[t].size()!=0)
    vec[t].clear();
}
int main()
{


    int n,q;
    cin>>n>>q;
    while(q--){
       int a,t,x;
       cin>>a>>t>>x;
       if(a==0){
        pusBack(t,x);
       }
       else if(a==1){
        dump(t);
       }
       else{
        clear1(t);
       }
    }


}
