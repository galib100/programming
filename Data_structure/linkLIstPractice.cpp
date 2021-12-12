#include<bits/stdc++.h>
using namespace std;


struct node
{
    int data;
    struct node*link;

};
struct node* head;


void inserNode(int val)
{
    struct node* temp = (struct node*) malloc(sizeof(struct node));
    temp->data = val;
    temp->link = NULL;

    if(head==NULL)
    {
        head = temp;
        cout<<temp->data<<"-inserted at head"<<endl;
    }
    else
    {
        struct node* t1 = head;
        while(t1->link!=NULL)
        {
            t1= t1->link;
        }
        t1->link= temp;
    }


}
void inserNodeSorted(int val)
{
    struct node* temp = (struct node*) malloc(sizeof(struct node));
    temp->data = val;
    temp->link = NULL;

    if(head==NULL || head->data > val)
    {

        temp->link = head;
        head = temp;
        cout<<head->data<<endl;

    }
    else
    {
        struct node* t1 = head;
        struct node* t2= t1->link;
        while(1)
        {
            if(val > t1->data && val < t2->data)
            {

                break;
            }
            else
            {
                t1= t2;
                t2= t2->link;
            }

        }
        t1->link= temp;
        temp->link =t2;
    }


}

void print_node()
{
    struct node* temp2;
    temp2 = head;
    while(temp2!= NULL)
    {
//        cout<<"intered into print fuc"<<endl;
        cout<<temp2->data<<endl;
        temp2 = temp2->link;
    }
}
void deleteNode(int pos)
{
    if(pos==1)
    {
        struct node* tHead;
        tHead = head;
        cout<<head->data<<" deleted successfully!!"<<endl;

        head = head->link;
        free(tHead);
    }
    else
    {
        struct node* t3;
        t3 = head;
        for(int i=1; i<pos-1; i++)
        {
            t3  = t3->link;
        }
        struct node* t4;
        t4 = t3->link;
        t3->link = t4->link;
        cout<<t4->data<<" deleted successfully!!"<<endl;

        free(t4);
    }
}
int main()
{
    head = NULL;


    inserNode(10);
    inserNode(20);
    inserNode(40);
    inserNode(45);
//    inserNodeSorted(10);
//    inserNodeSorted(40);
    inserNodeSorted(35);
    inserNodeSorted(5);
    inserNodeSorted(30);
    print_node();

//    deleteNode(1);
    cout<<"print _"<<endl;
    print_node();
}
