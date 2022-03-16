#include<bits/stdc++.h>
using namespace std;

void solve(){

    int n,arr[100000];
    scanf("%d",&n);
    for(int i =0;i<n;i++){
     scanf("%d",&arr[i]);
    }
    for(int i =n-1;i>=0;i--){
     printf("%d ",arr[i]);
    }
    printf("\n");

}

int main()
{
    solve();
    return 0;
}
