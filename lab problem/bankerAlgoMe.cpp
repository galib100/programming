#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr first
#define sc second
#define f(i,n) for(int i=0;i<n;++i)

#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define nl "\n"


int main(){
	cout<<"\n\n Enter the No. of Process : ";
	ll proc;
	cin>>proc;
	ll cResource[proc+1];
	cout<<"Enter the Current Resource ____:   ";
	f(i,3){
		cin>>cResource[i];
	}
	ll allArray[proc+1][3];
	ll mxArray[proc+1][3];
	ll needArray[proc+1][3];


	f(i,proc){      ///mainLoop
        cout<<"\t \t Process P"<<i+1<<" Details"<<nl;


     cout<<"Enter the Allocation  : ";
        for(int j=0;j<3;j++){
         cin>>allArray[i][j];
        }
         cout<<"Enter the Max  : ";
        for(int j=0;j<3;j++){
         cin>>mxArray[i][j];
        }
        //Calculate Need
        for(int j=0;j<3;j++){
         needArray[i][j]= mxArray[i][j]-allArray[i][j];
        }
	}

    cout<<"Process\t\t Max \t\tAllocation \t\t Need"<<nl;

for(int i =0;i<proc;++i){
       cout<<"P"<<i+1<<"\t\t ";

        for(int j=0;j<3;j++){
           cout<< mxArray[i][j]<<" ";
        }
        cout<<"\t\t";
          for(int j=0;j<3;j++){
           cout<< allArray[i][j]<<" ";
        }

         cout<<"  \t\t";
                   for(int j=0;j<3;j++){
           cout<< needArray[i][j]<<" ";
        }
        cout<<nl;
}
ll c=proc;
vector<int>finish;

         while(c){

          f(i,proc){
                      ll cnt = count(finish.begin(),finish.end(),i);
//                    cout<<"finish count ="<<cnt<<nl;
                    if(finish.size() == proc){

                    break;
                    }
                if(cnt==0 && cResource[0]>=needArray[i][0] && cResource[1]>=needArray[i][2] && cResource[2]>=needArray[i][2]){
                    cResource[0] +=allArray[i][0];
                    cResource[1] +=allArray[i][1];
                    cResource[2] +=allArray[i][2];
                    cout<<"Process P"<<i+1<< " Executed without deadlock "nl;
                    cout<<"Current Resource ";for(int k=0;k<3;++k){cout<<cResource[k]<<" ";}
                    cout<<nl;
                    finish.push_back(i);
                    c--;
                }

            }
          }

    return 0;
}
