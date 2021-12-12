#include<bits/stdc++.h>
using namespace std;
int main(){

double y ;
clock_t time_req;
    time_req = clock();
    cout<<"time: "<<time_req<<endl;


   for(int i=0; i<100000; i++)
	{
		y = log(pow(i,5));
	}
//    time_req = clock();cout<<"time: "<<time_req<<endl;
cout<<" last time "<<CLOCKS_PER_SEC<<endl;
time_req = clock() - time_req;
    cout<<"time difference: "<< (float)time_req/CLOCKS_PER_SEC<<endl;
}
