#include<iostream>
#include<stdio.h>
using namespace std;
struct node
{
    node *next;
    int item;
};
class Queue
{
    private:
        node *front,*rear;
    public:
        Queue();
        bool isEmpty();
        void insert(int);
        node* getRear();
        node* getFront();
        void del();
        ~Queue();
        int count();
        void sort();//not solve

};
int Queue::count(){
    node *t;
    int c=0;
    t=front;
    while(t){
        c++;
        t=t->next;
    }
    return c;
}
Queue::~Queue(){
    while(!isEmpty())
        del();
}
void Queue::del(){
    node *r;
    if(!isEmpty()){
        r=front;
        front=front->next;
        if(front==NULL)
            rear=NULL;
        delete r; 
    }
}
node* Queue::getFront(){
    return front;
}
node* Queue::getRear(){
    return rear;

}
void Queue::insert(int data){
    node *n=new node;
    n->item=data;
    n->next=NULL;
    if(isEmpty())
        rear=front=n;
    else {
        rear->next=n;
        rear=n; 
    }   
        

}
bool Queue::isEmpty(){
    return rear==NULL;
}
Queue::Queue(){
    front=rear=NULL;
}