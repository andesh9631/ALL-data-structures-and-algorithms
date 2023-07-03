#include<iostream>
#include<stdio.h>//use NULL in this floder
using namespace std;
struct node
{
    int item;
    node *next;
    node *prev;
};
class DLL
{
    private:
        node *start;
    
    public:
        DLL();
        void insertATfirst(int);
        void insertAtLast(int);
        node* search(int);
        void insertAtAfter(node*,int);
        void deleteATFirst();
        void deleteAtLast();
        void  deleteAtAfter(node*);
        ~DLL();

      
};
DLL::~DLL(){
    while(start)
        deleteATFirst();
}
void DLL::deleteAtAfter(node *temp){

    if(temp->prev)
        temp->prev=temp->next;
    else    
        start=temp->next;
    if(temp->next)
        temp->next->prev=temp->prev;
    delete temp;
}
void DLL::deleteAtLast(){
    if(start==NULL)
        cout<<"node is empty"<<endl;
    else if(start->next==NULL){
              delete start;
              start=NULL;
    }
    else{
        node *t;
        t=start;
        while(t->next!=NULL)
            t=t->next;
        if(t->prev)
            t->prev->next=NULL;
        else    
            start=NULL;
        delete t;
      


//         void DLL::deleteLast()
// {
//     if(start)
//     {
//         node *t;
//         t=start;
//         while(t->next!=NULL)
//             t=t->next;
//         if(t->prev)
//             t->prev->next=NULL;
//         else
//             start=NULL;
//         delete t;
//     }
// }
            
    }
      

}
void DLL::deleteATFirst(){
    
    if(start==NULL)
        cout<<"Empty node"<<endl;
    else if(start->next==NULL){
        delete start;
        start=NULL;
    }
    else{
        node *t;
        t=start;
        start=start->next;
        if(t->next)
            start->prev=NULL;
        
        delete t;


// void DLL::deleteFirst()
// {
//     if(start)
//     {
//         node *r=start;
//         start=start->next;
//         if(r->next)
//             start->prev=NULL;
//         delete r;
//     }

    }
        
}
void DLL::insertAtAfter(node *temp,int data){
    
    node *n=new node;
    n->item=data;
    n->prev=temp;
    n->next=temp->next;
    if(temp->next)
        temp->next->prev=n;
    temp->next=n;
     
}
node* DLL::search(int data){
    node *t;
    t=start;
    while(t->next!=NULL){
        if(t->item==data)
            return t;
        t=t->next;
        }
    return NULL;
    
}
void DLL::insertAtLast(int data){
    node *t;
    node *n=new node;
    n->item=data;
    n->next=NULL;
    if(start==NULL){
        n->prev=NULL;
        start=n;
    }
    else{
        t=start;
        while(t->next!=NULL)
            t=t->next;
        n->prev=t;
        t->next=n;

    }
       
    

}
void DLL::insertATfirst(int data){
   node *n=new node;
   n->prev=NULL;
   n->item=data;
   n->next=start;
   if(start)
        start->prev=n;
    start=n;

}
DLL::DLL(){
    start =NULL;
    
}