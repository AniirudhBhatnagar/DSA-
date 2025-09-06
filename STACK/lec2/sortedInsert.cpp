#include<iostream>
#include<stack>
using namespace std;

void sortedInsert(stack<int> &p,int value){
    if(p.empty()){
        p.push(value);
        return;
    }
    if(!p.empty() && p.top() < value){
        p.push(value);
        return;
    }
    int topValue = p.top();
    p.pop();

    sortedInsert(p,value);

    p.push(topValue);
}
int main(){
    stack<int> p;

    p.push(10);
    p.push(20);
    p.push(30);
    p.push(40);
    p.push(50);

    cout << p.size() << endl;

    int value = 23;

    sortedInsert(p,value);

    cout << p.size() << endl;

    while(!p.empty()){
        cout << p.top() << " ";
        p.pop();
    }
    return 0;
}

