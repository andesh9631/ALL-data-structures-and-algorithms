#include<iostream>
#include<stdio.h>//using this header file use NULL;
using namespace std;
struct node
{
    int item;
    node *next,*prev;

};
class Deque
{
    private:
        node *rear;
        node *front;
    public:
        Deque();
        void inseertAtFront(int);
        void insertAtRear(int);
        void deletefront();
        void deleteRear();
        node* getfront();
        node* getrear();
        ~Deque();
        bool isEmpty();
        
};
bool Deque::isEmpty(){
    if(front)
        return false;
    else
        return true;
}
Deque::~Deque(){
    while(front)
        deletefront();
}
node* Deque::getrear(){
    return rear;
}
node* Deque::getfront(){
    return front;
}

void Deque::deleteRear(){
    node *t;
    if(rear){
        t=rear;
        if(rear==front)
            rear=front=NULL;
        else{
            rear=rear->prev;
            rear->next=NULL;
        }
        delete t;
    }
}
void Deque::deletefront(){
    node *t;
    if(front){
        t=front;
        if(front==rear)
            front=rear=NULL;
        else{
            front=front->next;
            front->prev=NULL;
        }
        delete t;
    }
}

void Deque::insertAtRear(int data){
    node *n=new node;
    n->item=data;
    n->prev=rear;
    n->next=NULL;
    if(rear)
        rear->next=n;
    else
        front=n;
    rear=n;
}
void Deque::inseertAtFront(int data){
    node *n=new node;
    n->item=data;
    n->prev=NULL;
    n->next=front;
    if(front)
        front->prev=n;
    else
        rear=n;
    front=n;
    

}
Deque::Deque(){
    rear=front=NULL;
}