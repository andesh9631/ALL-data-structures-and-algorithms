#include<iostream>
#include<stdio.h>
#include "DynArray.cpp"
using namespace std;
class GraphMatrix
{
    private:
        int v_count;
        int e_count;
        int **adj;
    public: 
        
        int getVCount();//create geter
        void createMatrix(int vno,int eno);
        void printMatrix();
        void printAdjacentNode(int);
        DynArray& AdjacentNode(int);
        bool is_isolatedNode(int);
        ~GraphMatrix();

};

DynArray& GraphMatrix::AdjacentNode(int n){

    DynArray *p=new DynArray(1);
    if(n<v_count&& n>=0){
        for(int i=0;i<v_count;i++)
            if(adj[n][i]==1)
                p->append(i);

    }
    return *p;

}

int GraphMatrix::getVCount(){
    return v_count;
}
GraphMatrix::~GraphMatrix(){
    for(int i=0;i<v_count;i++)
        delete []adj[i];
    delete []adj;
}
  bool GraphMatrix::is_isolatedNode(int v){

        bool flag=true;
      if(v<v_count&& v>=0){
        for(int i=0;i<v_count;i++)
            if(adj[v][i]==1){
                flag=false;
                   break;
            }
    }
    return true;
  }

void GraphMatrix::printAdjacentNode(int v){
    if(v<v_count&& v>=0){
        for(int i=0;i<v_count;i++)
            if(adj[v][i]==1)
                cout<<endl<<"v"<<i;

    }
}


void GraphMatrix::printMatrix(){
    cout<<endl;

    for(int i=0;i<v_count;i++){

        for(int j=0;j<v_count;j++)
            cout<<adj[i][j]<<" ";

        cout<<endl;
    }
}
void GraphMatrix::createMatrix(int vno,int eno){
    int u,v;
    v_count=vno;
    e_count=eno;
    adj=new int*[e_count];//create pointer array

    for(int i=0;i<v_count;i++) //access the pointer array
        adj[i]=new int[v_count];

    for(int i=0;i<v_count;i++)// square matrix , all matrix assign zero(0)
        for(int j=0;j<v_count;j++)
            adj[i][j]=0;

    for(int k=1;k<=e_count;k++)//no of edgs tak chalega ye
    {
        cout<<"\n Enter the node number connectin edge:";
        cin>>u>>v;

        adj[u][v]=1;
        adj[v][u]=1;
        
    }

}

