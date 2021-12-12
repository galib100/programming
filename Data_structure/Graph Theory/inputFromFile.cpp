#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define WHITE 1
#define GRAY 2
#define BLACK 3

int adj[100][100];
int node,edge;
int color[100];
int t =1;
int sTime[100];
int fTime[100];

void dfsVisit(int x){
color[x]=GRAY;
sTime[x] = t;
++t;
///some work here
for(int i=0;i<node;i++){

    if(adj[x][i]==1){
        if(color[i]==WHITE){
    dfsVisit(i);
}
    }
    color[x]=BLACK;
    fTime[x]=t;
    ++t;
    cout<<"visited : "<< i<<endl;
}
}
void dfs(){
for(int i=0; i<node;i++){
        color[i]=WHITE;
  }

    for(int i=0; i<node;i++){


if(color[i]==WHITE)
    {
       dfsVisit(i);
    }


 }

}


void print(int node)
{
    for(int i=0; i<node; i++)
    {
        for(int j=0; j<node; j++)
        {
            cout<<adj[i][j]<<"\t";
        }
        cout<<endl;
    }

}
void searchNei(int node, int n)
{

    cout<<"the neiboughrs of "<<n<<endl;

    for(int j =0; j<node; j++)
    {
        if(adj[n][j]==1)
        {
            cout<<j<<endl;
        }
        else if(adj[j][n]==1)
        {
            cout<<j<<endl;
        }

    }


}
int main()
{
    freopen("input.txt","r",stdin);

    int n1,n2;
    cin>>node;
    cin>>edge;
    for(int i=0; i<=node; i++)
    {
        cin>>n1>>n2;
        adj[n1][n2]=1;
        adj[n2][n1]=1;
    }
    int n;
    cin>>n;
    searchNei(node,n);
    cout<<"the graph are"<<endl;
    print(node);
    dfs();
    for(int i=0; i<node;i++){
        cout<<"Node: "<<i<< "  "<<sTime[i]<< " "<< fTime[i]<<endl;
    }

}
