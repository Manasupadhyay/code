#include<iostream>
#include<queue>

using namespace std;

int main(){

    queue<string> q;

    q.push("manas");
    q.push("babbar");
    q.push("kushagra");

    cout<<"Size before pop-> "<< q.size()<<endl;

    q.pop();
    
    cout<<"Size after pop-> "<<q.size()<<endl;

    cout<<"empty or not-> "<<q.empty()<<endl;
    return 0;
}