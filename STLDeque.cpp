#include<iostream>
#include<deque>
using namespace std;
class Complex
{
    private:
    int a,b;
   
    public:
        Complex(int x,int y){a=x;b=y;};
        void setdata(int x,int y){a=x; b=y;}
        void showdata(){cout<<"\na="<<a<<" b="<<b;}
        

};
int main()
{
    deque <int> d1={66,2,666,31,5,9,3,99};
    deque<Complex> d2={Complex(10,20),Complex(14,25),Complex(3,4)};
    int i=0;
    deque<Complex>::iterator it1;
    for(it1=d2.begin();it1!=d2.end();it1++){
        cout<<endl;
        it1->showdata();

    }
    cout<<endl<<endl;

    // insert new data in deque 
    Complex *p=new Complex(5,6);
    it1=d2.begin();
    // *it1=*p; //overwrite function means replace the value
    d2.emplace_front(*p); 
    for(it1=d2.begin();it1!=d2.end();it1++){
        cout<<endl;
        it1->showdata();

    }

       
cout<<endl<<endl;

    for(auto x:d1)
        cout<<x<<" ";
    cout<<endl;

deque<int>::iterator it;

for(it=d1.begin();it!=d1.end();it++)
    cout<<*it<<" ";
cout<<endl;





    while(i<d1.size()){
       
        cout<<d1.at(i)<<" ";
        i++;
    }
    cout<<endl;
    return 0;

}