#include<bits/stdc++.h>
using namespace std;


void printVec(vector<int>vec){

    for(int i=0;i<vec.size();i++){
    cout<< vec[i] <<" ";
    }

}
int main(){
vector<int> vec;
vec.push_back(29);
vec.push_back(56);
vec.push_back(25);
vec.push_back(12);
vec.push_back(89);

//    cout<<vec[3]<<endl;
//    cout<<vec.size()<<endl;
    //print vector
//    printVec(vec);
cout<< *vec.begin();

 }
