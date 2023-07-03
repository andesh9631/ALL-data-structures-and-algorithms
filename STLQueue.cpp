#include<iostream>
#include<queue>
#include<vector>
#include<list>
#include<deque>
using namespace std;
int main()
{
    queue<int,vector<int>>d1;
    // queue<int,list<int>>d1;
    // queue<int,deque<int>>d1;
    d1.push(20);
    d1.push(40);
    d1.push(70);
    d1.push(50);
    cout<<d1.front()<<" "<<d1.back();
    cout<<endl;
    return 0;
}
