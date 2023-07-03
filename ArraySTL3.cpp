#include<iostream>
#include<array>
using namespace std;

int main()
{
    int i,j,temp=0;
    
    array<int,10>arr;
    for(i=0;i<=9;i++)
        cin>>arr[i];
    
    for(i=0;i<=9;i++)
        if(arr[0]<arr[i])
            {
                arr[0]=arr[i];
                // temp=arr[i];// sort ka code bhi hai
                // arr[i]=arr[j];;
                // arr[j]=temp;
            }
        
    cout<<"Greater number is :"<<arr[0]<<endl;
    // for(auto x: arr)
    //     cout<<x<<" ";

    return 0;
}