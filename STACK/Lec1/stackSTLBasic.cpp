#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> p;

    p.push(10);
    p.push(20);
    p.push(30);
    p.push(40);

    // check is stack empty or not 

    cout << p.empty() << endl;

    // check who is at top of stack

    cout << p.top() << endl;

    // check stack size

    cout << p.size() << endl;

    // To remov element of stack 

    p.pop();
    cout << p.top()<< endl;

    return 0;
 }