
#include<bits/stdc++.h>
using namespace std;

int main(){

    ofstream file("sample.txt",ios::app);
    vector<string> names;
    names.push_back("galib");
    names.push_back("monira");
    names.push_back("banna");
    for(string name: names){
        file<<name <<endl;
    }
}
