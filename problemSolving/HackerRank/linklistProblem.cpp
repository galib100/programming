#include<bits/stdc++.h>
#include<iostream>
using namespace std;
struct node{
int data;
struct node* link;
};
struct node* head;
 void printNode(){
  while(head!=NULL)
    {
    cout<<head->data<<endl;
    head = head->link;
 }

 }
 void inser(int value){
     if(head ==NULL ){
    head = (struct node*) malloc(sizeof(struct node));
    head->data = value;
    head->link = NULL;

     }
     else{
      struct node* temp  = (struct node*)malloc(sizeof(struct node));
        temp->data = value;
        head->link = temp ;

temp->link = NULL;
head= temp;
     }
 }
 ///head  n1| |  new

int main(){
head = NULL;
//head = (struct node*) malloc(sizeof(struct node));
// head->data = 5;
//  head->link = (struct node*) malloc(sizeof(struct node));
//  head->link->data  = 2;
//  head->link->link =NULL;
inser(4);
inser(45);
inser(44);
inser(88);
printNode();

 }
