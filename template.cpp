#include<iostream>
using namespace std;
class Time
{
    private:
        int hr,min,sec;
    public:
        void SetTime(int hr, int min, int sec){

            this->hr=hr;
            this->min=min;
            this->sec=sec;
        }
        void showtime(){
            cout<<endl<<hr<<" :"<<min<<" :"<<sec<<" :"<<endl;
        }

        bool operator>(Time t){
            if(hr>t.hr)
                return true;
            else if(hr<t.hr)
                return false;
            else if(min>t.min)
                return true;
            else if(min<t.min)
                return false;
            else if(sec>t.sec)
                return true;
            else    
                return false;
        }


};
// template<class x> //create template
template< typename x> // x data type place holder

x bigger(x a,x b){
    if(a>b)
        return a;
    else    
        return b;
}

// double bigger(double a, double b){

//     if(a>b)
//         return a;
//     else    
//         return b;
// }

// Time bigger(Time a,Time b){
        
    
//     if(a>b)
//         return a;
//     else    
//         return b;
// }

int main()
{
    Time t1,t2,t3;

    t1.SetTime(3,45,20);
    t2.SetTime(3,40,50);
    t3=bigger(t1,t2);
    t3.showtime();
    cout<<endl<<bigger(10,20);
    cout<<endl<<bigger(3.4,6.5);
    cout<<endl<<bigger('a','Z');
    cout<<endl;
    return 0;

}