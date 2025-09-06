#include<iostream>
#include<stack>
using namespace std;

bool checkSorted(stack<int> &s,int &ele1){
    if(s.empty()){
         return true;
    }

    int ele2 = s.top();
    s.pop();
    if(ele1> ele2){
        int aageKaAns = checkSorted(s,ele2);
        s.push(ele2);
        return aageKaAns;
    }
    else{
        return false;
    }
}


int main(){
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    int ele1 = INT_MAX;

    cout << checkSorted(s,ele1) << endl;

    return 0;
}