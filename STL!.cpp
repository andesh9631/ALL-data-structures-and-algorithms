#include<iostream>
#include<array>
using namespace std;
int main()
{


    // array<int,5>a1={ 50,60,10,20,30};
    // try{
    //     for(int i=0;i<5;i++)
    //         cout<<a1.at(i)<<" ";
    // }

    // catch(out_of_range e){
    //     cout<<"Excepation :"<<e.what();

    // }
    // cout<<"Hello";
    // cout<<endl;
    
  


    // // //explicity iterator use

     array<int,5>a1={ 50,60,10,20,30};
     array<int,5>::reverse_iterator it;//cearte iterator  object
     for(it=a1.rbegin();it!=a1.rend();it++){
        cout<<*it<<" ";
     }
     it=a1.rbegin();
     *it=100;
     cout<<endl;
    


// //   implicity iterator use
    // array<int,5>a1={ 50,60,10,20,30};
    
    for(auto x:a1)
        cout<<" "<<x;
    cout<<endl;
}