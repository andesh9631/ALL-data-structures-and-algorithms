// use for euxcledem Algorthims
#include<iostream>
using namespace std;
int HCF(int A,int B){
    if(A==0)
        return B;
    if(B==0)
        return A;
    if(A>=B)
        return HCF(A%B,B);
    if(A<=B)
        return HCF(B%A,A);
}
int main()
{
    int n,m;
    cin>>n>>m;
    cout<<(HCF(n,m));
    return 0;
}