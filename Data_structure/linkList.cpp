#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

// struct Node{
//          int data;
//          struct Node* link;
// };
// struct Node* head;

// void print(){
// struct Node* temp;
// temp = head;
//     while(temp != NULL){
//         cout<<temp->data<<endl;
//         temp = temp->link;

//     }
// }

// int main(){
//     head = NULL;
//     head = (struct Node*) malloc (sizeof(struct Node));
//     head->data = 2;
//     head->link = (struct Node*) malloc (sizeof(struct Node));
//     head->link->data = 5;
//     head->link->link = NULL;
//     print();

// }

///THESE ARE DONE BY ME WHICH STAY BELLOW;
struct Node1
{
    int data;
    struct Node1* link;
};
struct Node1* head;

//print_function_to_print
void print()
{
    struct Node1* temp;
    temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<endl;
        temp = temp->link;
    }


}

int main()
{
    head = NULL;
    head = (struct Node1*) malloc(sizeof(struct Node1));
    head->data = 3;
    head->link = (struct Node1*) malloc(sizeof(struct Node1));
    head->link->data = 20;
    head->link->link = NULL;
    print();
    return 0;
}
