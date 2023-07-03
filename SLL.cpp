#include<iostream>
using namespace std;
struct node  // non member function ye member bhi bana sakte hai
{
    int item;
    node *next;

};



class SLL    //singly linked list
{
    private:
        node *start;
    public:
        SLL();
        void insertAtStart(int);
        void insertAtLast(int);
        node* search(int);// return Address or node
        void insertAfter(node*,int);
        void deleteFirst();
        void deleteLast();
        void deletenode(node*);//delete specifices node
        ~SLL();

    
};
SLL::~SLL(){
    while(start)
        deleteFirst();
}
void SLL::deletenode(node *temp){
    node *t;
    if(start==NULL)
        cout<<"\nUnderflow";
    else{
        if(temp){
            if(start==temp){
                start=temp->next;
                delete temp;
            }
            else{
                t=start;
                while(t->next!=temp)
                    t=t->next;
                t->next=temp->next;
                delete temp;
            }
        }
    }
}
void SLL::deleteLast(){
    node *t;
    if(start==NULL){
        cout<<"\nUnderflow";
    }
    else if(start->next==NULL)   //signle node huaa to 
    {
        delete start;
        start=NULL;

    }
    else{
        t=start;
        while(t->next->next!=NULL)
            t=t->next;
        delete t->next;
        t->next=NULL;
    }
}
void SLL::deleteFirst(){
    node *t;
    if(start)  // check null or not
    {
        t=start;
        start=start->next;
        delete t;
    }
}
void SLL::insertAfter(node* ptr,int data){
    node *n=new node;
    n->item=data;
    n->next=ptr->next;
    ptr->next=n;
}
node* SLL::search(int data){
    node* t;
    t=start;
    while(t!=NULL){
        if(t->item==data)
            return t;
        t=t->next;
    }
     return NULL;
}
void SLL::insertAtLast(int data){
    node *t;
     node *n=new node;
     n->item=data;
     n->next=NULL;
     if(start==NULL)
        start=n;
    else{
        while(t->next!=NULL)
            t=t->next;
        t->next=n;

    }

}
void SLL::insertAtStart(int data){
    node *n=new node; // create dyanmicilly new node
    n->item=data; // ptr access 
    n->next=start;
    start=n;

}
SLL::SLL(){
    start=NULL ;//nullptr 
}

