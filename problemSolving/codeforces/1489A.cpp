#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j,k;
    cin>>n;
    int arr[51];
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
     // i
   ///1 5 5 1 6 1
   for(i=0;i<n;++i)
		for(j=i+1;j<n;)
		{
			if(arr[i]==arr[j])
			{
				for(k=j;k<n-1;++k)
					arr[k]=arr[k+1];

				--n;
			}
			else
				++j;
		}
cout<<n<<endl;
		for(int i=0;i<n;++i){
           cout<<arr[i]<<" ";
		}

return 0;
}

