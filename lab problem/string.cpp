#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    string givenString ="galib musanna galib galib msuaanna ";
    int charCount = 5;
    int lastSpaceIndx =0;
    int lineNum = 0;
    for(int i =0; i< givenString.length(); i++)
    {
        if(givenString[i] ==' ')lastSpaceIndx=i;
        if(i%charCount==0)
        {
            lineNum++;
        }

        //charCount and get space then directly new line
        if(i%charCount==0 && givenString[i]==' ')
        {
            givenString.insert(i,"\n");

            if(givenString[i+1]==' ')
            {
                givenString.erase((i+1),1);
            }

        }
        else if(i!=0 &&i%charCount==0 && givenString[i]!=' ')
        {

            for(int k =1; k<=(i-lastSpaceIndx); k++)
            {
                int fIndexOfLine = (lineNum*charCount)-charCount+1;
//                cout<<fIndexOfLine<<endl;
//             givenString.insert(fIndexOfLine, " ");



            }


        }

//        if(givenString[i]==' '){
//            givenString.erase(i,1);
//        }
//        cout<<givenString[i]<<"";

    }
    cout<<givenString<<endl;
}


int main()
{

    solve();
    return 0;
}

