#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node*left;
    struct node*right;

};

struct node*root;
void insrt(int val)
{
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = val;
    newNode->left =NULL;
    newNode->right =NULL;
    if (root ==NULL)
    {
        root = newNode;
    }
    else
    {
        struct node*temp = root;
        while(1)
        {
            if(newNode->data <= temp->data)
            {
                //left
                if(temp->left== NULL)
                {
                    temp->left = newNode;
                    break;
                }
                else
                {
                    temp = temp->left;

                }

            }
            else
            {
                ///right
                if(temp->right== NULL)
                {
                    temp->right = newNode;
                    break;
                }
                else
                {
                    temp = temp->right;

                }
            }

        }

    }
}
void preOrder(struct node*r ){
if(r==NULL){
    return;
}else{

cout<<r->data<<" ";
preOrder(r->left);
preOrder(r->right);
}


}
void inOrder(struct node*r ){
if(r==NULL){
    return;
}else{
inOrder(r->left);
cout<<r->data<<" ";

inOrder(r->right);
}


}
void postOrder(struct node*r){
if(r==NULL)return;
postOrder(r->left);
postOrder(r->right);
cout<<r->data<<" ";
}


int main()
{
    root = NULL;
    insrt(55);
    insrt(40);
    insrt(80);
    insrt(34);
    insrt(28);
    insrt(38);
    insrt(60);
    insrt(90);
    cout<<"preorder : ";
 preOrder(root);
 cout<<endl;
cout<<"Inorder : ";
inOrder(root);
cout<<"PostOder: ";
postOrder(root);

}
