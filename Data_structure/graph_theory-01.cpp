#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int adj[100][100];

int main(){

int node,edge;
cout<<"inter the num of node "<<endl;
cin>>node;
cout<<"enter the num of edge"<<endl;
cin>>edge;
int n1,n2;
for(int i=0; i<edge; i++){
    cin>>n1>>n2;
    adj[n1][n2]= 1;
     adj[n2][n1]= 1;

}
for(int i=0; i<node;i++){
  for(int j=0; j<node;j++){
        cout<<adj[i]<<"\t "<<adj[j];

}
cout<<endl;
}
return 0;

}
