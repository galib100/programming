#include<bits/stdc++.h>
using namespace std;


int recursion(int n)
{
    if(n<=1){
    return 1;
    }
else return n+recursion(n-1);

}
int main()
{
    int n;
    scanf("%d",&n);
   cout<< recursion(n);


}

