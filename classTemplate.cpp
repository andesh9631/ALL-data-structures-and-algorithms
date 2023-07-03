#include<bits/stdc++.h>
using namespace std;
template <typename x>
class Array
{
    private:
        int capacity;
        int LastIndex;
        x*ptr;
    public:
        Array(int); //parametrised Constructor
        bool isEmpty();// cheak  the array empty or not
        void append(x);//add the array data in last index
        void insert(int,x);//add the data any position of index
        void edit(int ,x);//edit the data any position of index
        void del(int);//del the data any position of index
        bool isFull();//cheak the array isFull or not
        x get(int);//return the index value
        int count();//count the length
        int find(x);//find the numberv in vaild index position
        ~Array();  //  create destructor safe momery leak 
        int getCapacity();
        void operator=(Array &arr);

};
 template <typename x> void Array<x>::operator=(Array &arr){
    capacity=arr.capacity;
    LastIndex=arr.LastIndex;
    if(ptr!=NULL)
        delete [] ptr;
    ptr=new x [capacity];
    for(int i=0;i<=LastIndex;i++)   
        ptr[i]=arr.ptr[i];
}
 template <typename x>int Array<x>::getCapacity(){
    return capacity;
}
 template <typename x>int Array<x>::find(x data){
    int i;
    for(i=0;i<=LastIndex;i++)
         if(ptr[i]==data)
             return i;
    cout<<"Invaild Index";
      return -1;   
    
    
}
 template <typename x>Array<x>::~Array(){
    delete[]ptr;
}
 template <typename x>int Array<x>::count(){
    return LastIndex+1;
}
 template <typename x>x Array<x>::get(int index){
    if(index>=0 || index<=LastIndex){
        return ptr[index];
    }
    else{
        cout<<endl<<"invaild Index";
        return -1;// no any sense return this value
    }
}
 template <typename x>bool Array<x>::isFull(){
    return LastIndex==capacity-1;
}
 template <typename x>void Array<x>::del(int index){
    int i;
    if(isEmpty()){
        cout<<endl<<"Array is Empty";
    }
    else if(index<0 || index>LastIndex){
        cout<<endl<<"Invaild Index";
    }
    else{
        for(i=index;i<LastIndex;i++){
            ptr[i]=ptr[i+1];
        }
        LastIndex--;

    }
}
 template <typename x>void Array<x>::edit(int index,x data){
    if(index>=0 && index<=LastIndex){
        ptr[index]=data;
    }
}
 template <typename x>void Array<x>::insert(int index,x data){
    int i;
    if(LastIndex==capacity-1){
        cout<<endl<<"Array is already full";
    }
    else if(index<0 || index>LastIndex+1){           // check the data more the lastindex hai ki nahi
        cout<<"Invalid Index";
    }
    else{
        for(i=LastIndex;i>=index;i--){
            ptr[i+1]=ptr[i];
        }
        ptr[index]=data;
        LastIndex++;

    }

}
 template <typename x>void Array<x>::append(x data){
    if(LastIndex==capacity-1){
        cout<<endl<<"array is already Full";
    }
    else{
        LastIndex++;//increase the array size
        ptr[LastIndex]=data;
    }
      

}
 template <typename x>bool Array<x>::isEmpty(){
    return LastIndex==-1;
}

 template <typename x>Array<x>::Array(int cap)//parametrised Constructor not use return type
{
     capacity=cap;
     LastIndex=-1;
     ptr=new x[capacity];
}
// test my code work or not
int main()
{
    Array <int> obj(5);
    if(obj.isEmpty()){
        cout<<"Array is Empty"<<endl;
    }
    obj.append(20);
    obj.append(30);
    obj.append(40);
    obj.insert(1,60);
    for(int i=0;i<obj.count();i++){
        cout<<obj.get(i)<<" ";
    }
    obj.del(2);
    cout<<endl;
     for(int i=0;i<obj.count();i++){
        cout<<obj.get(i)<<" ";
    }
    cout<<endl;

    Array<double> o1(5);
    o1.append(4.5);
    o1.append(8.5);
    o1.append(5.6);
    o1.append(9.55);
    o1.append(44.20);

    for(int i=0;i<o1.count();i++){
        cout<<o1.get(i)<<" ";
    }

    cout<<endl;
    return 0;
}