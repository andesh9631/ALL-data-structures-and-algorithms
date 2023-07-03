#include<iostream>
#include<stdio.h>//using  this header files use NULL
using namespace std;
struct node
{
    node *next;
    int item;
};
class PriorityQueue
{
    private:
        node *start;
    public:
        PriorityQueue();  
};
 PriorityQueue::PriorityQueue(){
    start=NULL;
    }