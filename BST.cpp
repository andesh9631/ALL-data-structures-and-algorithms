#include<iostream>
#include<stdio.h>
using namespace std;
struct node
{
    node *left;
    int ietm;
    node *right;
};
class BST
{
    private:
        node *root;
    protected :
        void preorderrec(node*);
        void inorderrec(node*);
        void postorderrec(node*);
    public:
        BST();
        bool isEmpty();
        void insert(int);
        void preorder();
        void inorder();
        void postorder();

};
 void BST::postorderrec(node *ptr){

    if(ptr){
         postorderrec(ptr->left);
         postorderrec(ptr->right);
         cout<<" "<<ptr->ietm;
        
    }

}
void BST::postorder(){
    postorderrec(root);
}

void BST::inorderrec(node *ptr){

    if(ptr){
         inorderrec(ptr->left);
        cout<<" "<<ptr->ietm;
        inorderrec(ptr->right);
    }

}
void BST::inorder(){
    inorderrec(root);
}

void BST::preorderrec(node *ptr){

    if(ptr){
        cout<<" "<<ptr->ietm;
        preorderrec(ptr->left);
        preorderrec(ptr->right);
    }

}
void BST::preorder(){
    preorderrec(root);
}
void BST::insert(int data){
    node *t;
    node *n=new node;
    n->left=NULL;
    n->ietm=data;
    n->right=NULL;
    if(root==NULL)
        root=n;
    else{
        t=root;
        while(n->ietm!=t->ietm){
            if(n->ietm<t->ietm){
                if(t->left!=NULL)
                    t=t->left;
                else{
                    t->left=n;
                    break;
                }
            }
            else{
                if(t->right!=NULL)
                    t=t->right;
                else{
                    t->right=n;
                    break;
                }
            }
        }
        if(t->ietm==n->ietm)
            delete n;
    }
}
bool BST::isEmpty(){
    return root==NULL;
}
BST::BST(){
    root=NULL;
}
