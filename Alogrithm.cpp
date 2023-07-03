#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>
using namespace std;

void Example1(){ // adjacent_find()
    cout<<endl<<endl;
    vector<int>v1={10,4,5,13,7,0,21,15,11,11,11,21,15};
    int n=*adjacent_find(v1.begin(),v1.end()); // ye int value return nahi kar raha hai 
                                              //esliye de refrence karna padega
        cout<<"Pair found with element value -> "<<n;

        // 2nd method
    vector<int>v2={10,3,5,11,34,21};
    vector<int>::iterator it;
    it=adjacent_find(v2.begin(),v2.end());
    if(it==v2.end())
        cout<<"\n no such pair found";

    cout<<endl<<endl;
}



void Example2(){  //all_of()
cout<<endl<<endl;
    vector<int>v1={10,20,14,50,17,6,12};
    if(all_of(v1.begin(),v1.end(),[](int a)->bool {return a%2==0;}))
                                  //[](int a)->int{return } is represented by lamdda
        cout<<"All number are Even"<<endl;
    else
        cout<<"All number are not Even"<<endl;


   cout<<endl<<endl;
}

 void Example3(){
    cout<<endl<<endl;
    vector<int>v1={10,20,14,50,18,6,12};
    if(any_of(v1.begin(),v1.end(),[](int a)->bool {return a%2==1;}))
                                  //[](int a)->int{return } is represented by lamdda
        cout<<"\nAt least one element odd"<<endl;
    else
        cout<<"\nNone of the element is odd"<<endl;

  cout<<endl<<endl;

}

void Example4(){ //binary_search()
    vector<int>v1={1,4,4,6,7,7,21,53,112,117,119,200};
    if(binary_search(v1.begin(),v1.end(),112))
        cout<<"\nElement Found";
    else
        cout<<"\nElement not found";

    cout<<endl<<endl;


}

 void Example5(){  //lower_bound() and upper_bound()
         vector<int>v1={1,4,4,6,7,7,21,53,112,117,119,200};
         vector<int>::iterator it;
         it=lower_bound(v1.begin(),v1.end(),7); //iterator return kare ka 9 
                                                //nahi hai to 9 se bada koun hai usko return karega 
         cout<<"\nElement just greater then or equal to 7 is at index: "<<it-v1.begin();
           

            it=upper_bound(v1.begin(),v1.end(),7);
            cout<<"\n Element just greater then 7 is at index: "<<it-v1.begin();
        
        cout<<endl<<endl;

}
 void Example6(){ //max_element() and min_element()
  
   vector<int>v1={1,4,4,6,7,7,21,53,112,117,119,200};
   cout<<"\nmax element: "<<*max_element(v1.begin(),v1.end());  // derefrence karna hoaga ki ye iterator return karta hai
   cout<<"\nmin element: "<<*min_element(v1.begin(),v1.end());

  cout<<endl<<endl;
 }

  void Example7(){  //for_each()

    vector<int>v1={1,4,4,6,7,7,21,53,112,117,119,200};
                                    //use lamdda functio
    for_each(v1.begin(),v1.end(),[](int x)->void{cout<<endl<<x<<" - "<<x*x;});
    
    cout<<endl<<endl;

  }

void Example8(){  //genreate()
cout<<endl<<endl;
    vector<int>v1(10);          
                                    //use lamdda function
    generate(v1.begin(),v1.end(),[]()->int {static int i;++i;return i*i;});

for(int num:v1)
    cout<<num<<" ";

cout<<endl<<endl;
}


void Example9(){  //generate_n()

     vector<int>v1(10);          
                                    //use lamdda function
    generate_n(v1.begin(),5,[]()->int {static int i;++i;return i*i;});
    generate_n(v1.begin()+5,5,[]()->int {static int j;++j;return j*j*j;});
    for(int num:v1)
      cout<<num<<" ";

    cout<<endl<<endl;
}

void Example10(){  //count() and count_if()

    vector<int>v1={1,4,4,55,696,4,88,26,88};
    cout<<count(v1.begin(),v1.end(),4)<<endl;

    cout<<count_if(v1.begin(),v1.end(),[](int x)->bool{return x>15;});
    //15 se bade number ko count karega
}
 void Example11(){  //find()

    vector<int>v1={1,4,4,55,11,41,8,2,56};
    vector<int>::iterator it;
    it=find(v1.begin(),v1.end(),55);
    if(it==v1.end())
        cout<<"\nElement Not Found";
    else
        cout<<"\nElement found at index "<<it-v1.begin();
    

}
void Example12(){ //find_if()
    vector<int>v1={21,5,5,55,11,41,121,2,56};
    vector<int>::iterator it;
    it=find_if(v1.begin(),v1.end(),[](int x)->bool {
        int k;
        k=(int)sqrt(x);
        return k*k==x;
    });

    if(it==v1.end())
        cout<<"\nElement Not Found ";
    else
        cout<<"Element "<<*it<<" "<< "found At indx "<<it-v1.begin();

        cout<<endl<<endl;
}

void Example13(){ //equal()

    vector<int>v1={1,2,3,4,5,6};
    vector<int>v2={2,3,4};
    if(equal(v2.begin(),v2.end(),v1.begin()+1))
        cout<<"\n equal";
    else
        cout<<"\n Not equal";
    cout<<endl;
}

void Example14(){ //fill()

    vector<int>v1={10,10,20,30,30,40,40,50,50,60,60,70,70,70};
    fill(v1.begin()+1,v1.begin()+5,100);
    for(auto x:v1)
        cout<<x<<" ";
}

void Example15(){ //remove()

    vector<int>v1={11,2,5,11,18,15};
    vector<int>::iterator it,newEnd;
    newEnd=remove(v1.begin(),v1.end(),11);
    for(auto num:v1)
        cout<<num<<" ";
    
    cout<<endl<<endl;
    for(it=v1.begin();it!=newEnd;it++)
        cout<<*it<<" ";
}

void Example16(){ //reverse()

    vector<int>v1={11,2,5,11,18,15};
    reverse(v1.begin(),v1.end());
    for(auto num:v1)
        cout<<num<<" ";
}

void Example17(){  //replace()
    vector<int>v1={10,3,4,4,4,5,5,77};
    replace(v1.begin(),v1.end(),4,63);
    for(auto num:v1)
        cout<<num<<" ";
}


void Example18(){  //search()

    vector<int>v1={11,44,22,77,33,99,66,58,88};
    vector<int>v2={99,66,58};

    vector<int>::iterator it;
    it=search(v1.begin(),v1.end(),v2.begin(),v2.end());
    if(it!=v1.end())
        cout<<"subsquence found at index "<<it-v1.begin();
    else
        cout<<"subsquence not found ";

    
}

void Example19(){   //is_sorted

    vector<int>v1={3,4,5,1,2};
    if(is_sorted(v1.begin(),v1.end()))
        cout<<"yes it is sorted";
    else
        cout<<"No it is not sorted";
}

void Example20(){  //is_sorted_until
    vector<int>v1={11,14,22,77,33,33,44,55};
    vector<int>::iterator it;
    it=is_sorted_until(v1.begin(),v1.end()); // return kareha jo sorted nahi hai usko
    cout<<*it<<endl;
    cout<<"Number of Element of sorted until the first unsorted one is "<<it-v1.begin();

}



int main()
{
    // Example1();
    // Example2();
    // Example3();
    // Example4();
    // Example5();
    // Example6();
    // Example7();
    // Example8();
    // Example9();
    // Example10();
    // Example11();
    //  Example12();
    // Example13();
    // Example14();
    // Example15();
    // Example16();
    // Example17();
    // Example18();
      Example19();
    //   Example20();

}