#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<algorithm>
#include<iterator>
#define pb push_back
#define pf push_front

using namespace std;

int main()
{
//    list<int> mylist;
    list<int> mylist(4,2);
    vector<int>vec;

    list<int> :: iterator it;

    vec.pb(10);
    vec.pb(100);
    vec.pb(105);
    vec.clear();

//    cout<<"vec_size:";
//    cout<<vec.size()<<endl;
//
//    mylist.pb(10);
//    mylist.pb(15);
//    mylist.pf(5);
//    mylist.pf(50);

    mylist.reverse();
//mylist.clear();
    cout<<"vec_size:";

    cout<<mylist.size()<<endl;
    for(it = mylist.begin(); it!=mylist.end(); it++)
    {
        cout<<*it<<" ";
    }


}
