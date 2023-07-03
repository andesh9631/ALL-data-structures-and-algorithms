#include<iostream>
#include<set>
#include<string>
using namespace std;
int main()
{
    multiset<int>ms1={10,20,10,20,6,01,51,2,01,6,50};
    for(auto s:ms1)
        cout<<s<<" ";
    cout<<endl;
}