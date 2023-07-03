#include<iostream>
#include "AToZ.cpp"
using namespace std;
int main()
{
    ExtendedArray solution(10);
     if(solution.isEmpty())
        cout<<" Array is Empty"<<endl;

    solution.append(10);
    solution.append(1);
    solution.append(101);
    solution.append(12);
    solution.append(1022);
    solution.append(3);
    solution.append(15);
    solution.append(2);
    solution.search(2);
    // solution.sum();

   

    for(int i=0;i<=solution.count()-1;i++)
        cout<<solution.get(i)<<" ";
   
}