#include<iostream>
using namespace std;
int printSumNatural(int m){
   if(m==1)
        return 1;
   return m+printSumNatural(m-1);

}
int main()
{
    int n;
    cin>>n;
    cout<<" "<<printSumNatural(n);
    return 0;
}