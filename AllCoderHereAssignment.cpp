#include<iostream>
using namespace std;                        
class DynArray
{
        private:
            int capacity;
            int LastIndex;
            int *ptr;
        public:
            DynArray(int);//parametrised Constructor
            bool isempty();// cheak  the array empty or not
            void append(int);
            int insert(int ,int );
            void edit(int,int);
            void del(int);
            bool isfull();
            int get(int);
            int count();
            int find(int);
            void doublearray();
            void halfarray();
            int size();
            ~DynArray();


};
int DynArray::size(){
    return capacity;// return capacity
}
void DynArray::halfarray(){
    int *temp=new int[capacity/2];
    for(int i=0;i<=LastIndex;i++)
        temp[i]=ptr[i];
    delete []ptr;
    ptr=temp;
    capacity=capacity/2;
}
void DynArray::doublearray(){
    int *temp=new int[capacity*2];// create double array
    for(int i=0;i<=LastIndex;i++)
        temp[i]=ptr[i];
    delete []ptr;
    ptr=temp;
    capacity*=2;//capacity=capacity*2
}
int DynArray::find(int data){
    int i;
    for(i=0;i<=LastIndex;i++){
        if(ptr[i]==data){
            return i;
        }
        else{
            cout<<"Ivaild Index";;
            return -1;
        }
    }
}
DynArray::~DynArray(){
    delete[]ptr;
}
int DynArray::count(){
    return LastIndex+1;
}
int DynArray::get(int index){
    if(index>=0 || index<=LastIndex){
        return ptr[index];
    }
    else {
        cout<<endl<<"Ivaild Index";
        return -1; // eska koi matlb nahi hai jab value one se chhota hoga tabhi return hoga
    }
}
bool DynArray::isfull(){
    return LastIndex==capacity-1;
}

void DynArray::del(int index){
    int i;
    if(isempty()){
        cout<<"Array is Empty";
    }
    else if(index<0 || index>LastIndex){
        cout<<"Invaild Index";
    }
    else {
        for(i=index;i<LastIndex;i++){
            ptr[i]=ptr[i+1];
        }
        LastIndex--;
        if(capacity/2>=LastIndex+1 && capacity>1)
            halfarray();
    }
}
void DynArray::edit(int index,int data){
    if(index>=0 && index<=LastIndex){
        ptr[index]=data;
    }

}
int DynArray::insert(int index,int data){
    int i;
    if(index<0 || index>LastIndex+1)
        cout<<endl<<"Invaild Index";
    else{
        if(isempty())
            doublearray();
            for(i=LastIndex;i>=index;i--)
                ptr[i+1]=ptr[i];
            ptr[index]=data;
            LastIndex++;
    }

    // if(LastIndex==capacity-1){
    //     cout<<endl<<"Array is already full";
    // }
    // else if(index<0 || index>LastIndex+1){
    //     cout<<endl<<"Ivaild Index";
    // }
    // else{
    //     for(i=LastIndex;i>=index;i--){
    //         ptr[i+1]=ptr[i];

    //     }
    //     ptr[index]=data;
    //     LastIndex++;
    // }
}
void DynArray::append(int data){

        // if(isempty()){
        //     doublearray();
        // }
        // else{
        //     LastIndex++;
        //     ptr[LastIndex]=data;
        // }


    if(LastIndex==capacity-1){
        cout<<endl<<"Array is already full";
    }
    else{
        LastIndex++;
        ptr[LastIndex]=data;//increase the array size
        
    }
 }
bool DynArray::isempty(){
    return LastIndex==-1;
}
DynArray::DynArray(int cap){
    capacity=cap;
    LastIndex=-1;
    ptr=new int[capacity];//to create dynamicaly Array in Cpp and in c use malloc
}
