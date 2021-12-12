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
            vec.push_back(4);
            vec.push_back(10);
         sort(vec.begin(),vec.end());
         int size = vec.size();
             int left=0,right=4,mid=0;

         while (left<=right) {
             mid = (left+right)/2;
             if(vec[mid]==10){
            cout<<"this is the num : "<<mid<<endl; 
            break; 
             }
             if(vec[mid]>10){
                 right = mid-1;
             }
             else if (vec[mid]<10){
                 left = mid+1;
             }
             else{
                 cout<<"havn't here"<<endl;
             }
         }
    
        //  print the vector
            // for(it=vec.begin(); it!=vec.end(); it++){
            //     cout<<*it<<"\t";
            // }
}