#include<bits/stdc++.h>
#include<iostream>
using namespace std;
struct Node{
int data;
struct Node* link;
};
struct Node* head;
void print(){
    struct Node*temp;
    temp = head;
    while(temp!=NULL){
            cout<<temp->data<<endl;
            temp = temp->link;
    }
}
///insert at end of node
void insert1(int value){
   struct Node*temp = (struct Node*) malloc(sizeof(struct Node));
    temp->data = value;
    temp->link =NULL;
    if(head==NULL){
        head = temp;
    }
    else {
              struct Node* t;
             t=head;

            while(t->link!=NULL){
        t=t->link;

    }
    t->link = temp;
    }


}
///insert first
 void insert2(int val){
struct Node*temp = (struct Node*) malloc(sizeof(struct Node));
    temp->data = val;
    temp->link =head;
    head = temp;


}

void insertBySort(int value){
struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
temp->data= value;
if(head==NULL || temp->data < head->data){
 temp->link = head;
   head = temp;
}
else{
    struct Node* pred;
    struct Node* p;

}

}

///delete node
void deleteNode(int pos){
    if(pos == 1){
//struct Node* temp;
//temp = head;
head = head->link;
    }
    else{


    struct Node* temp1;
temp1 = head;
for(int i=1; i<=pos-2; i++){
    temp1 = temp1->link;

}
struct Node* temp2;
temp2 = temp1->link;
temp1->link = temp2->link;
free(temp2);

}
}

int main(){
head = NULL;
//head =(struct Node*)malloc(sizeof(struct Node));
//head->data = 2;
//head->link = (struct Node*)malloc(sizeof(struct Node));
//head->link->data = 5;
//head->link->link = NULL;
insert1(25);
insert1(20);
insert1(2);
insert1(24);
insert2(25);
insert2(14);
insert2(34);
insert2(8);
cout<<"list are: "<<endl;
print();
cout<<"after deleting a node list are "<<endl;
deleteNode(1);
print();

}
