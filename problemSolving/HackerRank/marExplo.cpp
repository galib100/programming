#include<bits/stdc++.h>
using namespace std;
int main(){
 string ss;
 int v=0;
 cin>>ss;
 int len = ss.length();
 for(int i=0;i<len;){
        if(ss[i]!='S'){
            v++;
            }
        if(ss[i+1]!='O'){
                v++;
                }
        if(ss[i+2]!='S'){
                    v++;
                }

        i=i+3;
    }

cout<<v<<endl;
return 0;
}
