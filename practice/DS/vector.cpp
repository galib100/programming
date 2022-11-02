#include<bits/stdc++.h>
using namespace std;

vector<int >vec1;
vector<int >:: iterator it;

void inserting(vector<int>vec,int val){
    vec1.push_back(val);
}
int main(){



   inserting(vec1,100);
   inserting(vec1,60);
   inserting(vec1,30);
   inserting(vec1,40);


    sort(vec1.begin(),vec1.end());

for(it = vec1.begin();it!=vec1.end();it++){
        cout<<*it<< " ";
    }
    return 0;
}
