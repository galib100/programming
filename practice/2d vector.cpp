#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>vec( 4 , vector<int> (4));
void print(){
   for(int j=0;j<4;j++){
        for(int i=0;i<4;i++){
           cout<<vec[j][i]<<" ";
        }
        cout<<endl;
    }
}
void insert1(){
    cout<<"insert func"<<endl;
for(int j=0;j<4;j++){
        for(int i=0;i<4;i++){
            vec[j][i]=j + i + 1;
        }
    }
cout<<"inser func end"<<endl;
}
int main(){
    insert1();
    print();

}
