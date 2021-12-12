#include<bits/stdc++.h>
using namespace std;

int main(){
freopen("input.txt","r",stdin);
int node, edge;
cin>>node;
cin>>edge;
int adj[100][100];
//input_taking

for(int i=0;i<edge;++i){
int x1,y1;
        cin>>x1>>y1;

    adj[x1][y1]=1;
    adj[y1][x1]=1;


}
//output of
for(int i=0;i<node;++i){
    for(int j=0;j<node;++j){
    cout<<adj[i][j]<< " ";
}
cout<<endl;
}
//checking_neighbour
int nei;
cin>>nei;
cout<<"the neighour of " <<nei<< "is = ";
for(int i=0;i<node;++i){
   if(adj[nei][i]==1){
    cout<<i<<"";
   }
}
}
