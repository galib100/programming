#include<bits/stdc++.h>
using namespace std;
#define white 1
#define gray 2
#define black 3

int node, edge;
int adj[100][100];
int color[100];

void dfsVisit(int x)
{
color[x]=gray;
//some_work_here
    for(int i=0;i<node;++i){
        if(adj[x][i]==1){
            if(color[i]==white){
                dfsVisit(i);

            }
        }
    }

color[x]=black;
 cout<<color[x] <<"Visited successfully"<<endl;
}
void dfs()
{
    for(int i=0; i<node; ++i)
    {
        color[i]=white;
    }
     for(int i=0;i<node;++i){
    if(color[i]==white){
        dfsVisit(i);
    }
    }
}

int main()
{
    freopen("input.txt","r",stdin);

    cin>>node;
    cin>>edge;

//input_taking
    for(int i=0; i<edge; ++i)
    {
        int x1,y1;
        cin>>x1>>y1;

        adj[x1][y1]=1;
        adj[y1][x1]=1;


    }
    dfs();
//output of
//for(int i=0;i<node;++i){
//    for(int j=0;j<node;++j){
//    cout<<adj[i][j]<< " ";
//}
//cout<<endl;
//}

}

