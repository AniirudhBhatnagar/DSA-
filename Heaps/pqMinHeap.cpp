#include<iostream>
#include<queue>
using namespace std;

int main(){
    //MIN HEAP 
    priority_queue<int,vector<int>,greater<int>> pq;

    pq.push(10);
    pq.push(20);
    pq.push(5);
    pq.push(30);
    pq.push(15);

    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;
    
    return 0;
}