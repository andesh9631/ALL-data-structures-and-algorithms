#include<iostream>
#include<array>
using namespace std;

int main()
{
    //solve this question explicit iterator
    array<int,5>arr={1,3,4,5,6};
    array<int,5>::reverse_iterator it;
    for(it=arr.rbegin();it!=arr.rend();it++)
        cout<<*it<<" ";
    cout<<endl;
    return 0;

     

}