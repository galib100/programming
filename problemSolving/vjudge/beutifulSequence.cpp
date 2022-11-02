#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int t,n;

    cin>>t;
    while(t--){
    vector<int> vec;
    vector<int>::iterator it;

        cin>>n;
        for(int i=0;i<n;i++){
            int m ;
            cin>>m;
            vec.push_back(m);
        }
    int tem=0;
        for(it = vec.begin(); it!=vec.end(); it++){

            if(count(vec.begin(),vec.end(),*it) >1 ){
                    tem =0;
                cout<<"ne krasivo"<<endl;
//                cout<<*it <<" ache -"<<count(vec.begin(),vec.end(),*it)<<endl;
                break;
            }else {
            tem =1;
            }

        }
        if(tem==1){
         cout<<"prekrasnyy"<<endl;
         tem=0;
        }
    }


}


int main()
{

    solve();
    return 0;
}

