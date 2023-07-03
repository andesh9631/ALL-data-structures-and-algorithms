#include<iostream>
using namespace std;
int Factorial(int m){
    if(m==0)
        return 1;
    return (m*Factorial(m-1));
    
}

int main()
{
    int n;
    cin>>n;
    cout<<" "<<Factorial(n);
    return 0;
}