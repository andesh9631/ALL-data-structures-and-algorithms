#include<iostream>
using namespace std;
int fibonacci(int m){
    if(m==0||m==1)
        return m;
    return(fibonacci(m-1)+fibonacci(m-2));
}
int main()
{
    int n;
    cin>>n;
    cout<<(fibonacci(n));
    return 0;

}