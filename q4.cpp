#include<iostream>
using namespace std;
int SumSquareNatural(int m){
    if(m==1)
        return 1;
    return m*m+SumSquareNatural(m-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<" "<<SumSquareNatural(n);
    return 0;
}