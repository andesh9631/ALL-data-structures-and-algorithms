#include<iostream>
using namespace std;
int SumOfDigit(int m){
    if(m==0)
         return 0;
    return (m%10)+SumOfDigit(m/10);
}


int main()
{
    int n;
    cout<<"Enter the digit number";
    cin>>n;
    cout<<" "<<SumOfDigit(n);
    return 0;
}