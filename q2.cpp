#include<bits/stdc++.h>
using namespace std;
int SumOddNatural(int m){
    if(m==1)
        return 1;
    return (2*m-1)+SumOddNatural(m-1);
}
int main(){
    int n;
    cin>>n;
    cout<<" "<<SumOddNatural(n);
    return 0;
}