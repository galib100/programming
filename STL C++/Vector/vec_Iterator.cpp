#include<iostream>
#include<string>
#include<iterator>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

bool myfunc(int a,int b){
    return (a>b);
}
int main(){
    int i;
     vector<int> vec1;
     vector<int>::iterator it;
  
       vec1.push_back(23);
       vec1.push_back(34);
       vec1.push_back(12);
       vec1.push_back(355);
       vec1.push_back(56);
       vec1.push_back(6);

  vec1.reverse();//reversing the vector
//  sort(vec1.begin(),vec1.begin()+3);
   //sorting first 3 elements;
   
//    print_the_vector
   for(it=vec1.begin();it!=vec1.end();it++){
       cout<<*it<<endl;
   }
   return 0;

}