#include<bits/stdc++.h>
using namespace std;

void sum(int arra[100])
{
    int sum = 0;
    for(int i=0; i<10; i++)
    {
        sum += arra[i];
    }

    cout<<"the sum of all elements of array: "<<sum<<endl;
    sum =0;
}
void maxi(int arra[100])
{
    int tem=arra[0];

    for(int i=0; i<10; i++)
    {
       if(tem <arra[i]){
        tem = arra[i];
       }
    }
    cout<<"max elem: "<<tem<<endl;
}
void input(int arra[100])
{
    for(int i=0; i<10; i++)
    {
        cin>>arra[i];
    }

}
void print(int arra[100])
{
    for(int i=0; i<10; i++)
    {
        cout<<arra[i]<<"\t";
    }

}

void findElement(int arra[100],int x){
    int c =0;
    for(int i=0; i<10; i++){
        if(arra[i]== x){
            cout<<"the element "<<x<<" stay in Position: "<<i<<endl;
            c=0;
            break;
        }
        else{ c++;}

    }
    if(c>0)
    cout<<x<<" :!!element is not present in the array!!"<<endl;
}
///30 4 5 6 7 2
void sorting(int arra[100]){
    int tem=0;
    for(int i=0; i<10; i++){
        tem = arra[i+1];
        if(arra[i]>arra[i+1]){
            arra[i+1]=arra[i];
            arra[i] = tem;
        }
    }
}


int main()
{
    int arr[100];
    input(arr);
    print(arr);
    maxi(arr);
    sum(arr);
    findElement(arr,500);

}
