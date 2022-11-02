#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int permutation(int n){
   if (n!=1) {return permutation(n*n-1);
   }else {
   return n;
   }
}
void solve()
{
     int n =4;
    cout<< permutation(n);

}


int main()
{

    solve();
    return 0;
}


