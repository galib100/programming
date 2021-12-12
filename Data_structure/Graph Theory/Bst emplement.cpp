#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

};
struct Node *root;

void insertN(int val)
{
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));

    newNode->data = val;
    newNode->left = NULL;
    newNode->right = NULL;
    if(root==NULL)
    {
        root = newNode;
        cout<<newNode->data<<" inserted into root"<<endl;
    }
    else
    {
        struct Node* temp = root;
        while(1)
        {
            if(temp->data >= newNode->data)
            {
//                left
                if(temp->left == NULL)
                {
                    temp->left = newNode;
                    cout<<newNode->data<<" inserted into leftNode The root= "<<temp->data<<endl;
                    break;
                }
                else
                {
                    temp=temp->left;
                }
            }
            else
            {
//            right
                if(temp->right == NULL)
                {
                    temp->right = newNode;

                    cout<<newNode->data<<" inserted into righttNode The root= "<<temp->data<<endl;
                    break;
                }
                else
                {
                    temp=temp->right;
                }
            }

        }


    }

}


void preOrder(struct Node* r){
if(r ==NULL){return;}
cout<<r->data<<endl;
preOrder(r->left);
preOrder(r->right);
}

void inOrder(struct Node* r){
if(r ==NULL){return;}
inOrder(r->left);
cout<<r->data<<endl;
inOrder(r->right);
}
void postOrder(struct Node* r){
if(r ==NULL){return;}
postOrder(r->left);
postOrder(r->right);
cout<<r->data<<endl;
}
int main()
{
    root =NULL;

    insertN(20);
    insertN(10);
    insertN(5);
    insertN(15);

    insertN(30);
    insertN(40);
    insertN(4);

    insertN(50);


    printf("preOrder: __\n");
    preOrder(root);
 printf("inOrder: __\n");
   inOrder(root);
 printf("postOrder: __\n");
   postOrder(root);


}
