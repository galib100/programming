
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    ll t;
    cin>>t;
    ll tf =0;
    while(t--){
        string ss;
        cin>>ss;
        if(ss=="Tetrahedron"){
            tf+=4;
        }
        else if(ss=="Cube"){
            tf+=6;
        }else if(ss=="Octahedron"){
            tf+=8;
        }else if(ss=="Dodecahedron"){
            tf+=12;
        }else if(ss=="Icosahedron"){
            tf+=20;
        }
    }
    cout<<tf<<endl;

}


int main()
{

    solve();
    return 0;
}

