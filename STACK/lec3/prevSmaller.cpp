#include<iostream>
#include<stack>
#include<vector>
using namespace std;

void prevSmaller(vector<int> &arr,vector<int> &ans){
    stack<int> s;
    s.push(-1);
    int n = arr.size();

    for(int i = 0; i < n;i++){
        int element = arr[i];

        while(s.top() >= element){
            s.pop();
        }
        ans.push_back(s.top());
        s.push(element);
    }

}

int main(){
    vector<int> arr;

    arr.push_back(8);
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(2);
    arr.push_back(3);
   
   vector<int> ans;

   prevSmaller(arr,ans);
   

   for(int i=0;i<ans.size();i++){
    cout << ans[i] << " ";
   }

   return 0;
}