#include<iostream>
#include<forward_list>
using namespace std;

int main()
{
   
    forward_list<int>f2={30,50,10,70,60};
    
    for(int x:f2)
        cout<<x<<" ";

    cout<<endl;
    forward_list<int>::iterator it;
    it=f2.begin();
    it++;
    f2.insert_after(it,40);
    it=f2.before_begin();
    f2.insert_after(it,20);
    f2.push_front(90);
    f2.sort();


    // forward_list<int>::iterator it;
    for(it=f2.begin();it!=f2.end();it++)
        cout<<*it<<" ";
    cout<<endl;
    return 0;
}