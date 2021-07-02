#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> v;

    // vector<datatype> identifier(size,intialValue);
    vector<int> a(5,1);

    // copy a vector to another one
    vector<int> last(a);
    cout<<"Print Last"<<endl;
    for(int i : last){
        cout<<i<<" ";
    }
    cout<<"\n";

    // capacity = total memory allocated 
    cout<<"Capacity-> "<<v.capacity()<<endl;
    cout<<"Size-> "<<v.size()<<endl;

    v.push_back(1);
    cout<<"Capacity-> "<<v.capacity()<<endl;
    cout<<"Size-> "<<v.size()<<endl;

    v.push_back(2);
    cout<<"Capacity-> "<<v.capacity()<<endl;
    cout<<"Size-> "<<v.size()<<endl;

    v.push_back(3);
    cout<<"Capacity-> "<<v.capacity()<<endl;
    cout<<"Size-> "<<v.size()<<endl;

    // at(index)

    cout<<"Element At 2nd index-> "<<v.at(2)<<endl;

    cout<<"front-> "<<v.front()<<endl;
    cout<<"back-> "<<v.back()<<endl;

    cout<<"Before pop"<<endl;
    for(int i : v){
        cout<<i<<" ";
    }
    cout<<endl;
    v.pop_back();
    cout<<"after pop "<<endl;

    for(int i: v){
        cout<<i<<" ";
    }
    cout<<endl;

// erase :- erase only effect the size not capacity

vector<int> eraseArray = {1,2,3,4,5,6};

cout<<"before erase-> "<<endl;
for(int i : eraseArray){
    cout<<i<<" ";
}
cout<<endl;
eraseArray.erase(eraseArray.begin(), eraseArray.begin()+3);

for(int i : eraseArray){
    cout<<i<<" ";
}


    return 0;
}