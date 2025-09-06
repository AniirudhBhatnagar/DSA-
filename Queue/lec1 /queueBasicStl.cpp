#include<iostream>
#include<queue>
using namespace std;

int main(){

    //creation
    queue<int> q;
    
    //insertion
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    // access
    cout << q.front() << endl;

    // check rear end
    cout << q.back() << endl; 

    // check empty
    cout << q.empty()<< endl;

    // check size
    cout<<q.size() << endl;


    // deletion
    // q.pop();
    // // cout << q.front() << endl;
    // cout << q.size() << endl;
   
    // print queue
     while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
     }

    return 0;
}
