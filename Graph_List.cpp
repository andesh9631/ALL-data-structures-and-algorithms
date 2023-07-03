#include<iostream>
#include<stdio.h>
using namespace std;

struct node
{
    int item;
    int vertex;
    node *next;
};


class Adjlist
{
    private:    
        node *start;
        int vertex; 
    public:
        Adjlist();
        Adjlist(int);
        void setvertex(int);
        void addNode(int,int);
        void printList();
};
void Adjlist::printList(){
    node *t;
    t=start;
    while(t){
        cout<<" ("<<t->vertex<<","<<t->item<<") ";
        t=t->next;
    }
}
void Adjlist::setvertex(int v){
    vertex=v;
}

void Adjlist::addNode(int v,int data){
    node *n=new node;
    n->item=data;
    n->vertex=v;
    n->next=start;
    start=n;


}


Adjlist::Adjlist(){
    start=NULL;
}
Adjlist::Adjlist(int v){
    start=NULL;
    vertex=v;
}


class Graph
{
    private:    
        int v_count;
        Adjlist *arr;
    public: 
        Graph();
        void createGraph(int);
        void printGraph();
        ~Graph();

};
void Graph::printGraph(){
    for(int i=0;i<v_count;i++){
        cout<<endl;
        arr[i].printList();

    }
}
Graph::~Graph(){
    delete []arr;
}
 
 void Graph::createGraph(int vno){
    int n,v,data;
    v_count=vno;
    arr=new Adjlist[v_count];
    for(int i=0;i<v_count;i++){
        arr[i].setvertex(i);

        cout<<endl<<"how many adjacent node of V:"<<i<<":";
        cin>>n;
        for(int j=0;j<n;j++){

            cout<<endl<<"Enter the vertex";
            cin>>v;
            cout<<endl<<"Enter data to store";
            cin>>data;

            arr[i].addNode(v,data); 
        }
    }
        
 }

Graph::Graph(){
    v_count=0;
    arr=NULL;
}