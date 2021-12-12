#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int adj[100][100];

int main(){
int node,edge;
//freopen("input.txt","r",stdin);
freopen("labInput.txt","r",stdin);

cout<<"inter the num of node "<<endl;
cin>>node;
cout<<"enter the num of edge"<<endl;
cin>>edge;
int n1,n2;
for(int i=0; i<edge; i++){
    cin>>n1;
    cin>>n2;
    adj[n1][n2]= 1;
     adj[n2][n1]= 1;


}
for(int i=0; i<node;i++){
  for(int j=0; j<node;j++){
        cout<<"\t "<<adj[i][j];

}
cout<<endl;
}
int x;
///checking neighbor

cin>>x;
cout<<"the neighbor of "<<x<<"= ";
for(int i =0; i<node; i++){
    if(adj[x][i]==1){
        cout<< i << ",";
    }
}
return 0;

}

///input
//5 7
//0 1
//2 0
//1 3
//2 3
//3 0
//4 1
//4 3
//3

