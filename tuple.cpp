#include<iostream>
#include<utility>
#include<tuple>
using namespace std;
int main()
{
    tuple<int,double,string>t1={21,3.5,"andesh"};
    tuple<int,string,string>t2;
    t2=make_tuple(12,"Aman","saurabh");
    cout<<get<0>(t1)<<" "<<get<1>(t1)<<" "<<get<2>(t1);

}