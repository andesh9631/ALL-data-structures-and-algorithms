#include<iostream>
#include<array>
using namespace std;

int main()
{
    int sum=0;
    float avg;

    array<float,5>arr{12,3,4,7,88};
    for(auto x:arr)
        sum+=x;
    avg=sum/5.0;
    cout<<avg<<endl;
    return 0;
}