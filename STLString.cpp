#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int main()
{
    string s1; // string STL template hai esliye <> nahi lagega
    s1={"Andesh Kumar Sah"};


    // char str[100];
    // strcpy(str,s1.c_str()); 
    // cout<<str;
    
    // cout<<endl;
    string :: iterator it;


    // cout<<endl;
    // cout<<s1.back()<<endl;
    // cout<<s1.front()<<endl;
    // cout<<s1.capacity()<<endl;
    //  cout<<endl<<endl;
    for(it=s1.begin();it!=s1.end();it++){
        
        cout<<*it;

    }

    // s1.erase(s1.begin()+3,s1.begin()+9);
    // s1.replace(s1.cbegin(),s1.cbegin()+6,"andesh");
    cout<<endl<<endl;
    // cout<<s1.find('e')<<endl;

    // string s2=s1.substr(5,3); // find substring
    //  cout<<s2<<endl;

//     string s2={"sdhfgsfhj"};
//    s1.swap(s2);
//    cout<<s2;

    //  cout<<s1.compare("A")<<endl;

    // s1=s1+" coder"; // cancatetion
   



    cout<<endl<<endl;

    // s1.insert(3,"Hello World");

    // try
    // {
    //     for(int i=0;true;i++)
    //         cout<<s1.at(i);
    // }
    // catch(out_of_range){
    //     cout<<"\nException :Out of rangr"; 
    // }
    //  cout<<endl<<endl;
    //  for(int i=0;i<s1.length();i++)
    //     cout<<s1[i];
      
     cout<<endl<<endl;
     for(auto x:s1)
        cout<<x;
      
    //   it=s1.begin()+2;
    //   *it='ABC';
   
    cout<<endl<<endl;
    // cout<<s1<<" ";
    return 0;
}
