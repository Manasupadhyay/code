#include<iostream>
#include<deque>

using namespace std;

int main()
{
    // deque allow insert and deletion on both side
    deque<int> d;

    d.push_back(1);
    d.push_front(2);
    d.push_back(3);
    d.push_front(4);
    // 4,2,1,3

    cout<<"before pop "<<endl;
    for(int i : d){
        cout<<i<<" ";
    }
    d.pop_back();  // 3 will be deleted
    d.pop_front(); // 4 will be deleted

    cout<<"after pop "<<endl;
    for(int i : d){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"0 index element-> "<<d.at(0)<<endl;
    cout<<"front-> "<<d.front()<<endl;
    cout<<"back-> "<<d.back()<<endl;
    cout<<"empty or not-> "<<d.empty()<<endl;

    cout<<"before erase->"<<d.size()<<endl;
    
    // erase -> we have to pass a iterator(from where to start, start, middle, from last), how many element to delete
    // erase decrease the size but doesn't affect maxsize;
    d.erase(d.begin(), d.begin()+1);
    cout<<"after erase->"<<d.size()<<endl;

    cout<<"elements after erase-> "<<endl;
    for(int i : d){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}