#include<iostream>
#include<stack>

using namespace std;

int main(){

    stack<string> s;
    s.push("manas");
    s.push("kushagra");
    s.push("putty");

    cout<<"Top Element-> "<<s.top()<<endl;

    s.pop();
    cout<<"Top Element-> "<<s.top()<<endl;

    cout<<"size of stack->"<<s.size()<<endl;

    cout<<"empty or not-> "<<s.empty()<<endl;
    return 0;
}