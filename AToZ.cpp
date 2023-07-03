

// 4th rules question karne ka 
#include "ArrayADT.cpp"//copy all ArrayADT file

class ExtendedArray:public Array  //use inheretence ka matlb hota hai ki jo class bani uska ka duplicate bana  
{
    public:
    ExtendedArray(int);//constructor create
        int greatest();
        void sort();
        int smallest();
        int search(int);
        int sum();
        float avrage();
        void rotateRightbyone();
        void removeduplicate();
        void printArray();
        int secondlargest();
        void swapitem(int ,int);
        

};
void ExtendedArray::swapitem(int i,int j){
    int temp;
    if(i>=0 && i<count() && j<count() && j>=0){

        temp=get(i);
        edit(i,get(j));
        edit(j,temp);
    }

}
int ExtendedArray::secondlargest(){
    int i,temp,r;
    if(count()>=2){

        for(r=1;r<=2;r++){

            for(i=0;i<=count()-1-r;i++){
                if(get(i)>get(i+1)){
                    temp=get(i);
                    edit(i,get(i+1));
                    edit(i+1,temp);
                }

            }
        }
        return count()-2;
    }
}
void ExtendedArray::printArray(){
    for(int i=0;i<count();i++)
        cout<<" "<<get(i);
}
void ExtendedArray::removeduplicate(){
    for(int i=0;i<count();i++){
        for(int j=i+1;j<count();j++){
            if(get(i)==get(j)){
                del(j);
                j--;
                
                
            }
                
        }
    }
}
void ExtendedArray::rotateRightbyone(){
    int temp,i;
    int Lastindex;
    if(!isEmpty()){
        Lastindex=count()-1;
        temp=get(Lastindex);
        for(i=Lastindex;i>0;i--){
            edit(i,get(i-1));

        }
        edit(0,temp);

    }
}
float ExtendedArray::avrage(){
    return (float)sum()/count();// before cast in float
}
int ExtendedArray::sum(){
    int s;
    for(int i=0;i<count();i++){
        s=s+get(i);
    }
    return s;
}
int ExtendedArray::search(int data){
    int i;
    for(i=0;i<count();i++){
        if(get(i)==data)
            return i;
    
    return -1;
    }
}
int ExtendedArray::smallest(){
    int min;
    if(isEmpty()){
        cout<<"Array is empty";
        return -1;
    }
    min=get(0);
    for(int i=1;i<count();i++){
        if(min>get(i))
            min=get(i);
    return min;
    
    }
}
void ExtendedArray::sort(){
    int r,temp,i;
    for(r=1;r<=count()-1;r++){
        for(i=0;i<=count()-1-r;i++){
            if(get(i)==get(i+1)){
                temp=get(i);
                edit(i,get(i+1));
                edit(i+1,temp);
            }

        }
    }
}
ExtendedArray::ExtendedArray(int cap):Array(cap)   // call parent class :Array(cap) this type 
{
    //no need write here q ki parent function ko call karne se ArrayADT ka code
}

int ExtendedArray::greatest()
{
    int max;
    if(isEmpty()){
        cout<<endl<<" Array is Empty";
        return -1;
    }
    max=get(0);
    for(int i=1;i<count();i++)
        if(max<get(i))
            max=get(i);
    return max;
}









// //3red rules
// int greatest(Array obj)//create Array class ka object or non member variable
// {
//     int max;
//     if(obj.isEmpty()){
//         cout<<endl<<" Array is Empty";
//         return -1;
//     }
//     max=obj.get(0);
//     for(int i=1;i<obj.count();i++)
//         if(max<obj.get(i))
//             max=obj.get(i);
//     return max;
// }

