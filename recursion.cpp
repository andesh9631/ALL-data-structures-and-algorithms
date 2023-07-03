#include<iostream>
using namespace std;
void recursion(int m){
    if(m>0){
        recursion(m-1);
        cout<<" "<<m;
    }
}
int main()
{
    int n;
    cin>>n;
    recursion(n);
    return 0;
}