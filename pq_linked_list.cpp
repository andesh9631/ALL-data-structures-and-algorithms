#include<iostream>
#include<stdio.h>
using namespace std;
struct node
{
    int item;
    int pno;
    node *next;

};
class prioritQueue
{
    private:
        node *start;
    public:
        prioritQueue();
        void insert(int,int);
        void del();
        int getElement();
        int gethighestprioritNuber();
         ~prioritQueue();
         bool isEmpty();

};
bool prioritQueue::isEmpty(){
    return start==NULL;
}
prioritQueue::~prioritQueue(){
    while(start)
        del();
}
int prioritQueue::gethighestprioritNuber(){
    if(start)
        return start->pno;
    return 0;
    
}
int prioritQueue::getElement(){
    if(start)
        return start->item;
    return -1;
}
void prioritQueue::del(){
    node *t;
    if(start){
        t=start;
        start=start->next;
        delete t;
    }
}
void prioritQueue::insert(int data,int pn){
    node *t;
    node *n=new node; 
    n->item=data;
    n->pno=pn;
    if(start==NULL){
        n->next=NULL;
        start=n;
    }
    else{
        if(start->pno<n->pno){
            n->next=start;
            start=n;
        }
        else{
            t=start;
            while(t->next!=NULL){
                if(t->next->pno>=n->pno)
                    t=t->next;
                else    
                    break;
            }
            n->next=t->next;
            t->next=n; 
        }
    }

}
prioritQueue::prioritQueue(){
    start=NULL;
}