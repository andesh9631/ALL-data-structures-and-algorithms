#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
    
    map<int,string>m1={{1,"Andesh"},{2,"Souvik"},{3,"Vishal"}};

    map<int,string>m2;
    pair<int,string>p1={1,"Patna"};
    m2.emplace(p1);
    cout<<m2.at(1)<<endl;   
    // 1st method for access
     for(auto s:m1)
        cout<<s.first<<" "<<s.second<<endl;
    
    cout<<endl<<endl;

    cout<<m1.at(2);
    cout<<endl<<endl;
    
    // 2st method for access
    map<int,string>::iterator it;
    for(it=m1.begin();it!=m1.end();it++)
        cout<<it->first<<" "<<it->second<<endl;
    
    cout<<endl;
    return 0;



}