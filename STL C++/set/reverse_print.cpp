#include<bits/stdc++.h>
#include<set>
#include<iterator>

using namespace std;

int main()
{
    set<int> s;
    set<int>:: reverse_iterator it;

    s.insert(3);
    s.insert(34);
    s.insert(35);
    s.insert(45);
    s.insert(35);
    for(it = s.rbegin(); it!=s.rend(); ++it)
    {
        cout<<*it<<endl;
    }

}
