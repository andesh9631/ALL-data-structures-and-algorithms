#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
    multimap<int,string>mm1={{1,"Andesh"},{2,"Aman"},{1,"Souvik"}};
    for(auto x:mm1)
        cout<<x.first<<" "<<x.second<<" ";
}