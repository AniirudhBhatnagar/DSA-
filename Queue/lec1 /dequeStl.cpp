//   In deque we can push and pop both form front and back
// here push_front() is like insertAtHead and push_back() islike insertAtTail
// here VV Imp -> front is right size and back is at left side 

#include<iostream>
#include<queue> 
using namespace std;

int main(){
   deque<int> dq;

   //insertion
   dq.push_front(10);
   dq.push_front(20);
   dq.push_front(30);

   cout<<dq.front() << endl;
   cout << dq.back() << endl;

   dq.push_back(100);
   dq.push_back(120);
   dq.push_back(140);

   cout<<dq.front() << endl;
   cout << dq.back() << endl;

   cout << dq.size() << endl;
   cout << dq.empty() << endl;
   
   // deletion 

   dq.pop_back();
   cout<<dq.front() << endl;
   cout << dq.back() << endl;

   dq.pop_front();
   cout<<dq.front() << endl;
   cout << dq.back() << endl;
    return 0;
}