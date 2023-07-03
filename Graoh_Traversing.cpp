#include<iostream>
#include "GraphMatrix.cpp"
#include "queue_arr.cpp"
#include<stdio.h>
using namespace std;
void bfs(GraphMatrix &G, int s){
    
    int n,u,i;
    bool status[G.getVCount()];
    Queue Q(G.getVCount()); 
    Q.insert(s);
    status[s]=true;
    while(!Q.isEmpty())
    {
        n=Q.getFront();
        cout<<"  V"<<n;
        Q.del();
        DynArray Adjacent=G.AdjacentNode(n);
        for(i=0;i<Adjacent.count();i++)
        {
            u=Adjacent.get(i);
            if(status[u]==false)
            {
                Q.insert(u);
                status[u]=true;
            }
        }
    }

    
}

int main()
{
    GraphMatrix G;
    G.createMatrix(6,9);
    bfs(G,0);
    cout<<endl;
    return 0;
}