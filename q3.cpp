#include<iostream>
using namespace std;
int SumEvenNatural(int m){
    if(m==1)
        return 2;
    return 2*m+SumEvenNatural(m-1);
}
int main(){
    int n;
    cin>>n;
    cout<<" "<<SumEvenNatural(n);
    return 0;
}