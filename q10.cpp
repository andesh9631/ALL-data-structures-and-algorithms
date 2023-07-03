#include<iostream>
using namespace std;
int power(int a,int b){
    if(b==0)
        return 1;
    if(b>0)
        return(power(a,b-1)*a);
    else    
        return(power(a,b+1)*(1/2));
}
int main()
{
    int n,m;
    cin>>n>>m;
    cout<<(power(n,m));
    return 0;
}
