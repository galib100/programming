#include<bits/stdc++.h>
using namespace std;

void solve(){

    int n,arr[1000];
    scanf("%d",&n);
    for(int i =0;i<n;i++){
     scanf("%d",&arr[i]);
    }
    sort(arr,arr+n);
    int total = 0;
    for(int i=0;i<n;){
        int numC=0;
        for(int j=i; j<n; j++)
        {
            if(arr[i]==arr[j]){
                numC++;
            }
        }
        i += numC;
        if(numC>1){
        total += numC/2;
        }
    }

    printf("%d\n",total);

}

int main()
{
    solve();
    return 0;
}
