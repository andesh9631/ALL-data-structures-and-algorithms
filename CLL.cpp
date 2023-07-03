#include<bits/stdc++.h>
using namespace std;
struct node
{
    int item;
    node *next;
};
class CLL
{
   private:
        node *Last;
    public:
        CLL();
        void insertAtstart(int);
        void insertAtLast(int);
        node* search(int);
        void insertAtAfter(node*,int);
        void deleteAtFirst();
        void deleteAtLast();
        void deletenode(node*);
        ~CLL();
};
CLL::~CLL(){
    while(Last)
        deleteAtFirst();
}
void CLL::deletenode(node *temp){
    if(temp){
        node *t;
        t=Last->next;
        while(t->next!=temp)
            t=t->next;
        t->next=temp->next;
        if(t==temp) // single node
             Last=NULL;
        else if(temp==Last){
            Last=t;
            delete temp;
        }
        

        
    }
}

void CLL::deleteAtLast(){
    if(Last){
        node *t;
        t=Last;
        while(t->next!=Last)
            t=t->next;
        if(t==Last){
            delete Last;
            Last=NULL;
        }
        else{
            t->next=Last->next;
            delete Last;
            Last=t;
        }
    }
}
void CLL::deleteAtFirst(){
    if(Last){

        node *r;
        r=Last->next;
        if(Last->next==Last)
            Last=NULL;
        else{
                Last->next=r->next;
           delete r;
        }
    }
}
void CLL::insertAtAfter(node *temp,int data){
    if(Last){
        node *n=new node;
        n->item=data;
        n->next=temp->next;
        temp->next=n;
        if(temp==Last)
            Last=n;
    }
}
node*CLL::search(int data){
        node *t;
        if(Last){

        t=Last->next;
        do{
            if(t->item==data)
                return t;
            t=t->next;
        }
         while(t!=Last->next);
        }
        return NULL;

}
void CLL::insertAtLast(int data){
    node *n=new node;
    n->item=data;
    if(Last){
        n->next=Last->next;
        Last->next=n;
        Last=n;
    }
    else{
        n->next=n;
        Last=n;
    }
}
void CLL::insertAtstart(int data){
    node *n=new node;
    n->item=data;
    if(Last)
    {  //when list is not empty
        n->next=Last->next;
        Last->next=n;
    }
    else
    {  //when list is empty
        n->next=n;
        Last=n;
    }
}
CLL::CLL(){
    Last=NULL;
}