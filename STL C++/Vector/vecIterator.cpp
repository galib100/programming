#include<bits/stdc++.h>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;

bool myFunc(int a, int b){
return (a>b);
}
void printVecWithIterator(vector<int>vec)
{
    vector<int>::iterator it;

    for(it=vec.begin(); it!=vec.end(); it++)
    {
        cout<< *it <<" ";
    }

}
int main()
{
    vector<int> vec;
    puts("this program deals with printing a vector with the iterator ");
    puts("");
    vec.push_back(29);
    vec.push_back(56);
    vec.push_back(25);
    vec.push_back(12);
    vec.push_back(89);
    sort(vec.begin(),vec.end(),myFunc); //for DESC use myFunc..okk?



//cout<< *vec.begin();
    printVecWithIterator(vec);
}

