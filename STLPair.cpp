#include<iostream>
#include<utility>
using namespace std;
int main()
{
    // many types of initilized pair
    pair <int,string>p1={10,"Aman"};
    pair <int,int>p2={30,40};
    pair <string,string>p3;
    p3=make_pair("Andesh","Kumar");
    pair <int,string> p4(p1);

    cout<<p3.first<<" "<<p3.second;
    return 0;

    
}