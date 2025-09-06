
#include <iostream>
#include<string>
using namespace std;

void solve(string str , int index,int &ans,char target){
    if(index == str.length()){
        return;
    }
    
   if(str[index] == target){
       ans = index;
   }
    solve(str,index + 1,ans,target);
}
int main() {
    string str = "abcddedf";
    char target = 'd';
    int index = 0;
    int ans = 0;
    solve(str,index,ans,target);
    cout << ans;
}