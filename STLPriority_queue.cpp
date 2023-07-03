#include<iostream>
#include<queue>
#include<vector>
using namespace std;
class Emplopyee
{
    private:
        int Empid;
        string name;
        float salary;
    public:
        Emplopyee(int i,string n,float s):Empid(i),name(n),salary(s){}//create constructor
        void showdata(){
            cout<<"\nID:"<<Empid<<" "<<" Name:"<<name<<" "<<" Salary"<<salary ;
        }
        float getSalary(){ return salary; } 
}; 

// create funtor //funtor bhi yek data types hai
class CompareBySalary{
    public: 
         //operator overloding
        bool operator()(Emplopyee  &e1, Emplopyee  &e2){
            if(e1.getSalary()<e2.getSalary())  //max heap agar > hoga to min heap 
                return true;
            else    
                return false;

        }
};







int main()
{
    priority_queue<Emplopyee,vector<Emplopyee>,CompareBySalary>pq1; //kuch nahi hai to ese hm vector shamjhte hai
    pq1.push(*(new Emplopyee(1,"Andesh",50000)));
    pq1.push(*(new Emplopyee(1,"Saourav",10000)));
    pq1.push(*(new Emplopyee(1,"Souvik",20000)));
    pq1.push(*(new Emplopyee(1,"Aman",40000)));
    pq1.push(*(new Emplopyee(1,"Vishal",15000)));

    Emplopyee e1=pq1.top();

    e1.showdata();
   
    pq1.pop();
    cout<<endl;
    return 0;
}