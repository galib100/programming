#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{

    string givenString ="galib musanna galib galib msuaanna galib galib msuaanna galib galib msuaanna galib galib msuaanna ";
    int charCount =5;
    int line =0;
    int firstIndx =0;
    int lastIndx =0;
    for(int i =0; i< givenString.length(); i++)
    {
//
        //increasing line number
        if(i%charCount==0 && i!=0)
        {
            line++;
            firstIndx = line*charCount;
            lastIndx = firstIndx+4;
        }
        if(firstIndx==i && givenString[i] ==' '){
            cout<<endl;
        }else if(firstIndx==i && givenString[i] !=' '){

        }
        else{
        cout<<givenString[i];
        }



    }
}


int main()
{

    solve();
    return 0;
}

