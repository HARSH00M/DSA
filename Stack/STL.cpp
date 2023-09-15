#include<iostream>
#include<stack>

using namespace std;

int main()
{
    stack<int> s;
    
    //insertion 
    s.push(2);// first element of stact
    s.push(10);
    s.push(19);// top element;

    //top element of stack
    cout<<"stack's 1st elements : "<<s.top()<<endl;
   
    //number of elements in stack
    cout<<"the number of elements in stack is: "<<s.size()<<endl<<endl;

    //deletion
    // s.pop();
    // cout<<"After deletion the Top element is: "<<s.top()<<endl;
    
    int num = s.size();
    cout<<"at"<<"   "<<"value"<<endl;
    while(!(s.empty())){
        cout<<"-----------"<<endl;
        cout<<num<<"    "<<s.top()<<endl;
        num--;
        
        s.pop();//deletion of every element
    }
    if(s.empty())cout<<endl<<"Stack is now empty"<<endl;
    return 0;
}
