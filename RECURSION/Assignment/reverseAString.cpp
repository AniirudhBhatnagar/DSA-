#include <iostream>
#include<string>
using namespace std;

void solve(string &str , int index,int end){
    if(index >= end){
        return;
    }
    swap(str[index],str[end]);
    solve(str,index+1,end-1);
}
int main() {
    string str = "Anirudh";
    int index = 0;
    int end = str.length() - 1;
    solve(str,index,end);
    cout << str;
}