#include<bits/stdc++.h>
#include<iostream>
#include<list>
#include<algorithm>
#include<iterator>
using namespace std;

int main()
{
    int ar[5] = {1,3,4,5,6};

    list<int>ml(ar,ar+5);
    list<int> ::iterator it;

    it = find(ml.begin(),ml.end(),44);

    if(it == ml.end()){
    cout<<"NOt found"<<endl;

    }else{
    cout<< *it<<endl;

    }
    ml.insert(it,7);



    ///print list

//    for(it = ml.begin(); it!= ml.end(); it++)
//    {
//        cout<< *it <<"\t";
//    }


}
