#include<iostream>
#include<list>

using namespace std;

int main(){

    list<int> l;
    
    list<int> n(5,100);
    cout<<"printing list "<<endl;
    for(int i : n){
        cout<<i<<" ";
    }
    
    cout<<endl;

    l.push_back(1);
    l.push_front(2);

    for(int i : l){
        cout<<i<<" ";
    }
    cout<<endl;
    l.erase(l.begin());
    for(int i : l){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"size of list -> "<<l.size()<<endl;

    // copy a list
    list<int> c(n);
    for(int i: c){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}