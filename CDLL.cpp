#include<bits/stdc++.h>
using namespace std;
struct node
{
    node * prev;
    node *next;
    int item;
};
class CDLL
{
    private:
       node *start;
    public:
         CDLL();
         void insertAtFirst(int);
         void insertAtLast(int);
         node *search(int);
         void insertAtAfter(node*,int);
         void deleteAtFirst();
         void deleteAtLast();
         void deleteAtnode(node*);
         ~CDLL();
};
 CDLL::~CDLL(){
    while(start)
        deleteAtFirst();
 }
void CDLL::deleteAtnode(node *temp){
    if(temp!=NULL){

        if(start==start->next)
            start=NULL;
        else{
            temp->prev->next=temp->next;
            temp->next->prev=temp->prev;
            if(start==temp)
                start=temp->next;
        }
        delete temp;
        
    }

}
void CDLL::deleteAtLast(){
    node *t;
    if(start!=NULL){

        if(start->prev==start){
            delete start;
            start=NULL;
        }
        else{
            t=start->prev;
            t->prev->next=start;
            start->prev=t->prev;
            delete t;
        }
    }
}
void CDLL::deleteAtFirst(){
  
  node *t;
  if(start!=NULL){
      
      t=start;
      t->next->prev=t->prev;
      t->prev->next=t->next;
      if(start->next==start)
        start=NULL;
      else  
        start=t->next;
        
     delete t;
  }
}
void CDLL::insertAtAfter(node *temp,int data){
    if(temp!=NULL){

        node *n=new node;
        n->item=data;

        n->prev=temp;
        n->next=temp->next;
        temp->next->prev=n;
        temp->next=n;
    }

}
node* CDLL::search(int data){
    node *t;
    t=start;
    if(t!=NULL){

        do{
            if(t->item==data)
                return t;
            t=t->next;
         }while(t!=start);
    }
    return NULL;
    

    
}

void CDLL::insertAtLast(int data){
    node *n=new node;
    n->item=data;
    if(start==NULL){
        n->next=n;
        n->prev=n;
        start=n;
    }
    else{
        n->prev=start->prev;
        n->next=start;
        start->prev->next=n;
        start->prev=n;
      
    }
}
void CDLL::insertAtFirst(int data){
    node *n=new node;
    n->item=data;
    if(start==NULL){
        n->next=n;
        n->prev=n;
        start=n;
    }
    else{
        n->prev=start->prev;
        n->next=start;
        start->prev->next=n;
        start->prev=n;
        start=n;
        
    }
}
CDLL::CDLL(){
    start=NULL;
}
