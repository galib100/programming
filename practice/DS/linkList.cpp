#include<bits/stdc++.h>
using namespace std;

struct Node1
{
    int data;
    struct Node1 * link;

};


struct Node1* head;

void print()
{
    struct Node1 * temp;
    temp  = head;
    while(temp!=NULL)
    {
        cout<<temp->data <<endl;
        temp = temp->link;
    }


}

void inserting (int val)
{
    struct Node1* temp1 = (struct Node1*) malloc(sizeof(struct Node1));
    temp1->data = val;
    temp1->link = NULL;
    if(head==NULL)
    {
        head = temp1;
    }
    else
    {
        struct Node1* temp2 = head;

        while(temp2->link!=NULL)
        {
            temp2 = temp2->link;
        }
        temp2->link = temp1;
        cout<<"insert success"<<endl;
    }
}
void insertAtBegin(int val){
    struct Node1* temp  = (struct Node1*) malloc(sizeof(struct Node1));
    temp->data = val;
    temp->link = head;
    head= temp;

}
int main()
{

//    head  = NULL;
//    head = (struct Node1*) malloc(sizeof(struct Node1));
//    head->data = 3;
//    head->link = (struct Node1*) malloc(sizeof(struct Node1));
//    head->link->data = 5;
//    head->link->link = NULL;

    inserting(7);
    inserting(4);
    print();
    inserting(5);
   print();
    cout<<"after inserting : "<<endl;
    insertAtBegin(9);
    print();
}
