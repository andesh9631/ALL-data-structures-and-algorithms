#include<iostream>
using namespace std;

void TOH(int n,char begin,char aux,char end){
    static int i;
    if(n>0){
        TOH(n-1,begin,end,aux);
        cout<<endl<<++i<<") "<<begin<<"->"<<end;

        TOH(n-1,aux,begin,end); 
    }
}
int main()
{
    TOH(5,'A','B','C');
    cout<<endl;
    return 0;
}