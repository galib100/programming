#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;
bool myfunc(int a,int b){
    return a>b;
}
int main(){
            vector<int>vec;
            vector<int>::iterator it;
            vec.push_back(50);
            vec.push_back(40);
            vec.push_back(30);
            vec.push_back(55);
            vec.push_back(10);
            // sort(vec.begin(),vec.end(),myfunc);
        //    sort(vec.begin(),vec.end());
        //    reverse(vec.begin(),vec.end());
it = find(vec.begin(),vec.end(),55);

            for(it=vec.begin(); it!=vec.end(); it++){
                cout<<*it<<" ";
            }

}
