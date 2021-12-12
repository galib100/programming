#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
// struct Node{
// int data;
// struct Node* link;
// };
// struct Node* head;

// print(){
//     struct Node* temp;
//     temp = head;
//     while(temp!=NULL){
//         cout<<temp->data<<endl;
//         temp = temp->link;
//     }
// }
//  void insert(int a){
//    struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
//     temp->data = a;
//     temp->link = NULL;
//     if(head == NULL){
//         head = temp;
//     }
//     else{
//          struct Node* t;
//          t = head;
//         while(t->link != NULL){
//        t = t->link;       
//         }
//         t->link = temp;
//     }

// }

// int main(){
//     head = NULL;
//     insert(2);
//     insert(29);insert(24);
//     insert(3);
//     insert(4);
//     print();
//     return 0;
// }
struct Node {
    int data;
    struct Node* link;

};
struct Node* head;

void insert( int val){
    struct Node* temp = (struct Node* ) malloc(sizeof(struct Node));
     temp->data = val;
     temp->link = NULL;
     if(head == NULL){
         head = temp;
     }
     else{
         struct Node* t;
         t = head;
        while(t->link !=NULL){
            t = t->link;
        }
        t->link = temp;

     }
}
void print(){
  struct Node* temp;
  temp = head;
while(temp !=NULL){
    cout<<temp->data<<endl;
    temp = temp->link;
}

}

int main(){

head = NULL;
  insert(3);
  insert(6);
  insert(10);
  print();
}