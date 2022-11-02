#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool isPrime(int n){
    if(n==1)return false;
   for(int i =2;i<n;i++){
        if(n%i ==0)return false;
    }
    return true;
}
bool primeBySchoolMethod(int n){
       if (n==1)return false;
       for(int i =2; i<=sqrt(n); i++){
        if(n%i ==0) return false;
       }
       return true;

    }
void solve()
{

        int t;
        cin>>t;
        while(t--){
        int n;
          cin>>n;
    primeBySchoolMethod(n)? cout<<"prime"<<endl : cout<<"NotPrime"<<endl;

        }


}


int main()
{

    solve();
    return 0;
}


