#include<bits/stdc++.h>

using namespace std;
    vector<vector<int>> ans;

int main(){
        vector<int> v={1,2,3};
        sort(v.begin(),v.end());

        do{
            ans.push_back(v);
        }while(next_permutation(v.begin(),v.end()));

    for(auto val:ans){
        for(auto i:val){
        cout<< i << " ";
        }
        cout<<endl;
    }

return 0;
}
