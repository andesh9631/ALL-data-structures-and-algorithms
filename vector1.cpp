#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v1;// create object
    vector<int>v2={10,50,20,40,30};
    v1.assign({2,4,6,8});
    v1.assign(4,20);//20 ko four times chalana chahte hai tab ye karna hoga
    // cout<<v2.capacity();
    // v2.push_back(90);
    // cout<<endl<<v2.capacity();
    // cout<<endl<<v2.size()<<endl;

    // accesse element
    // // cout<<v2[1];
    // try{
    //     cout<<v2.at(5);
    // }
    // catch(out_of_range e){
    //     cout<<"Index out bound exception";
    // }

    //// implicity iterator
    // for(auto x:v1)// auto ke jagaha pe type bhi likh sakte hai
    //     cout<<x<<" ";

    //or
    // for(int x:v2)
    //     cout<<x<<" ";

    //or
    //   for(int &x:v2)
    //     cout<<x<<" ";
   
//////explicity iterator
vector<int>::iterator it;
v2.push_back(70);
v2.insert(v2.begin(),{60,550,554});


for(it=v2.begin();it!=v2.end();it++)
    cout<<*it<<" ";
    
    cout<<endl;
    return 0;
}