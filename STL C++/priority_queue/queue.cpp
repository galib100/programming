#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    q.push(57);
    q.push(54);

    q.push(51);
    q.push(5);
    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }

}
