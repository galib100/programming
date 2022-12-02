#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fr first
#define sc second
#define f(i,n) for(int i=0;i<n;++i)

#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define nl "\n"

void solve()
{
        vector<pair<string,char>>ve ={
            {"clank",'a'},   {"bong",'b'},
            {"click",'c'},   {"tap",'d'},
            {"poing",'e'},   {"clonk",'f'},
            {"clack",'g'},   {"ping",'h'},
            {"tip",'i'},   {"cloing",'j'},
            {"tic",'k'},   {"cling",'l'},
            {"bing",'m'},   {"pong",'n'},
            {"clang",'o'},   {"pang",'p'},
            {"clong",'q'},   {"tac",'r'},
            {"boing",'s'},   {"boink",'t'},
            {"cloink",'u'},   {"rattle",'v'},
            {"clock",'w'},   {"toc",'x'},
            {"clink",'y'},   {"tuc",'z'},

        };
            f(i,ve.size()){
                cout<<ve[i].first<<" "<<ve[i].second<<nl;
            }
            int l;
            cin>>l;
            vector<string> vs;
            while(l--){
                string ss;
                cin>>ss;
              vs.push_back(ss);
            }
            bool up =false;
            bool cap = false;
            vector<char> ans;

            for(auto s:vs){
            if(s=="dink"){
                up =true;
                }else if(s=="bump"){
                    cap= true;
                }else if(s=="thumb"){
                        up = false;
                }else if(s=="pop"){
                        ans.pop_back();
                }else if(s=="whack"){
                        ans.push_back(' ');
                }else{
            vector<string> :: iterator it;

                    if(up){
                    it =  find(ve.begin(),ve.end(),s,first);
                   int i = it-ve.begin();
                    ans.push_back(ve[i].second);
                    }
                }

            }


    }


int main()
{
    fastio;



    solve();
    return 0;
}





