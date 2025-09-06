#include<iostream>
#include<vector>
using namespace std;

bool findElement(vector<int> v,int target){
     int n = v.size();
     for(int i = 0; i<n ; i++){
        if(v[i] == target){
            return true;
        }
     }
     return false;
}

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    
    int target;
    cout << "enter the target element" << endl;
    cin >> target;

    bool ans = findElement(v,target);
    cout << ans << endl;

    if(ans == 0){
       cout << "the element does not exist";
    }
    else 
       cout << "the element exist";

}