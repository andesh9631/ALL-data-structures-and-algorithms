#include <iostream>
using namespace std;
// modifie Bubble sort
void Modifie_bubbleSort(int arr[], int m)
{
    int flag=0;

    for (int i = 0; i < m - 1; i++)
    {
        for (int j = 0; j < m - 1 - i; j++)
        {
            if (arr[j + 1] < arr[j])
            {
                 int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag=1;
            }
        }
        if(flag==0)
            break;

    }
    for (int j = 0; j < m; j++)
        cout << " " << arr[j];
    
}

// bubble sort
void bubbleSort(int arr[], int m)
{
    for (int i = 0; i < m - 1; i++)
    {
        for (int j = 0; j < m - 1 - i; j++)
        {
            if (arr[j + 1] < arr[j])
            {
                 int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int j = 0; j < m; j++)
        cout << " " << arr[j];
}

// insertion Sort
void insertionSort(int arr[],int size){
    for(int i=1;i<size;i++){
        int temp=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;

    }

}

// selection Sort
void SelectionSort(int arr[], int size){
    for(int i=0;i<size-1;i++){
        int min=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<min){
                min=j;
            }
        }
        if(min!=i){
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }

    }
}

// Quick Sort
void QuickSort(int arr[],int size){
    
}









int main()
{
    int n, arr[10];
    cout << "Enter the any number under 10: because arr size is 10" << endl;
    cin >> n;
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout<<endl;
    cout<<"bubble sort"<<endl;
    // bubble sort
    bubbleSort(arr, n);
    cout<<endl<<endl;

    cout<<"modifie_bubblesort"<<endl;
    // modifie_bubblesort
    Modifie_bubbleSort(arr,n);
     cout<<endl<<endl;

    cout<<"insertion Sort"<<endl;
    // insertion Sort
     insertionSort(arr,n);
     for(int i=0;i<n;i++)
        cout<<" "<<arr[i];
    cout<<endl<<endl;

    // selection Sort
    cout<<"selection Sort"<<endl;
    SelectionSort(arr,n);
    for(int i=0;i<n;i++)
        cout<<" "<<arr[i];
    cout<<endl<<endl;

    return 0;
}