#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;

    int arr1[100],arr2[100];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }

    for(int j=0;j<m;j++){
        cin>>arr2[j];
    }
    int c=0;
     for(int j=0;j<m;j++){

            for(int i=1;i<=m;i++){
                if(arr2[j]%i==0){

                    for(int k=0;k<n;k++){
                       if(i%arr1[k]==0){
                        c++;

                       }


                    }
                }

            }

    }
    cout<<c<<endl;
return 0;

}
