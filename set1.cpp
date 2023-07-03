#include<iostream>
#include<set> // binary search as a set in stl
using namespace std;
class Employee  // non premitive type value ke liye ese karenge
{
    private:
        int Emid;
        string name;
        double salary;
    public:
        Employee(int id,string n,double s):Emid(id),name(n),salary(s){}
        void showEmployee(){
            cout<<Emid<<" "<<name<<" "<<salary<<endl;
        }
        int getEmpid(){
            return Emid;
        }
        string getname(){
            return name;
        }
        double getsalary(){
            return salary;
        }

};

// class ya structure bana sakte hai
class CompareBySalary{   // name bhi compare bana sakte hai and integer se bhi
    public:
        bool operator()(Employee e1,Employee e2) const //no any change in this functio
        {
            if(e1.getsalary()<e2.getsalary())
                return true;
            else
                return false;
            
        }


};

int main(){
    set<Employee,CompareBySalary> s1;
    // Employee e1(1,"Andesh",200000.0);   // create Employee object
    // s1.insert(e1);

    // ya ye dono sahi hai
    cout<<endl<<endl;

    s1.insert(*new Employee(1,"Andesh",200000.0));
    s1.insert(*new Employee(2,"Aman",10000.0));
    s1.insert(*new Employee(3,"pawan",200000.0));
    s1.insert(*new Employee(4,"Karthiye",20000.0));
    s1.insert(*new Employee(5,"Arjun",2000.0));

    for(auto x: s1)
        x.showEmployee();

    cout<<endl<<endl;
    return 0;



}



int f1()
{
    set <int>s1={70,10,50,30,60,40,20};
    for(auto x:s1)
        cout<<x<<" ";
    cout<<endl;
    cout<<s1.count(10)<<endl;
    cout<<s1.size()<<endl;
    s1.insert(25);
    s1.erase(s1.begin());
    //  s1.erase(s1.end());

    set<int>::iterator it;
    for(it=s1.begin();it!=s1.end();it++)
        cout<<*it<<" ";
    cout<<endl;

    cout<<endl;
    return 0;
}
