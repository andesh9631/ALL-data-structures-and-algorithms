#include<iostream>
#include<array>
using namespace std;

int main()
{
    array<int,10>arr={1,3,8,9,6,7,81,22,3,10};
    for(int i=0;i<9;i++)
        for(int j=i+1;j<=9;j++)
            if(arr[i]>arr[j]){
                    int temp=arr[j];
                    arr[j]=arr[i];
                    arr[i]=temp;
            }

    for(auto x:arr)    
        cout<<x<<" ";
}