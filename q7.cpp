#include<iostream>
using namespace std;
void DecimalToBinary(int m){
    if(m>0)
        {
         DecimalToBinary(m/2);
         cout<<(m%2);
    }
   
}
int main()
{
    int n;
    cin>>n;
    DecimalToBinary(n);
    return 0;
}