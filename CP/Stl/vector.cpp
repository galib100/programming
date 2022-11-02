#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int > v ={4,6,8,5,4,3};

//for(auto it=v.begin();it!=v.end(); it++){
//    cout<<*it<<" ";
//}

//for (int &val: v){ // use & to change orginal value from the vector
//    val++;
//    cout<<val<<endl;
//}
//cout<<"  without & "<<endl;
//for (int val: v){
//
//    cout<<val<<endl;
//}

vector<pair<int,int>> v_p = {{1,4},{5,7}};
//for(pair<int,int>&val: v_p){
for(auto &val: v_p){
    cout<<val.first<<" " <<val.second <<endl;
}



}
