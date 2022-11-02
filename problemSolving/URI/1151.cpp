

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<int>fibVec;

int fibo(int x){
    if(x==1 || x==0){

        return x;
    }else{

        return(fibo(x-1)+fibo(x-2));
    }
}

void solve()
{
   int n,i=0;
   cin>>n;
    while(i<n+1){
fibVec.push_back(fibo(i));
    i++;
    }
    cout<<fibVec[n]<<endl;

}


int main()
{

    solve();
    return 0;
}


