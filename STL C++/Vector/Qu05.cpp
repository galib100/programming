#include<bits/stdc++.h>
using namespace std;

class Rectangle{
public:
    int length;
    int breadth;
    Rectangle(int x,int y){
    length=x;
    breadth=y;
    }
    int Area(int l,int b){
    return l*b;
    }
};
int main(){
 Rectangle Rec1(4,5);
 Rectangle Rec2(5,8);
 cout<<"Rec1 length: "<<Rec1.length<<endl;
  cout<<"Rec1 breadth: "<<Rec1.breadth<<endl;
cout<<"Area of Rec1: "<<Rec1.Area(4,5)<<endl;
 cout<<"Rec2 length: "<<Rec2.length<<endl;
  cout<<"Rec2 breadth: "<<Rec2.breadth<<endl;
cout<<"Area of Rec2: "<<Rec2.Area(5,8)<<endl;


}
