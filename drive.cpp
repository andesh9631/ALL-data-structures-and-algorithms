#include<bits/stdc++.h>
#include "Stack_using_array.cpp"
using namespace std;
int main()
{
    Stack s(5);
    Stack minStack(5);
    pushInStack(s,minStack,50);
    cout<<endl<<"Current minimum Value is "<<minStack.peek();
    pushInStack(s,minStack,40);
    cout<<endl<<"Current minimum Value is "<<minStack.peek();
    pushInStack(s,minStack,60);
    cout<<endl<<"Current minimum Value is "<<minStack.peek();
    pushInStack(s,minStack,70);
    cout<<endl<<"Current minimum Value is "<<minStack.peek();
    pushInStack(s,minStack,30);
    cout<<endl<<"Current minimum Value is "<<minStack.peek();
    cout<<endl<<"Poping Start";
    popFromStack(s,minStack);
    cout<<endl<<"Current minimum Value is "<<minStack.peek();
    popFromStack(s,minStack);
    cout<<endl<<"Current minimum Value is "<<minStack.peek();
    popFromStack(s,minStack);
    cout<<endl<<"Current minimum Value is "<<minStack.peek();
    popFromStack(s,minStack);
    cout<<endl<<"Current minimum Value is "<<minStack.peek();
    popFromStack(s,minStack);
    cout<<endl<<"Current minimum Value is "<<minStack.peek();
    
    cout<<endl;
    return 0;
}