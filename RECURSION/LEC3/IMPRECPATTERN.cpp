// include exclude pattern 
// If string length is n then no of subsequence = 2^n 
#include<iostream>
#include<vector>
using namespace std;

void printSubSeq(string str,string output,int index,vector<string> &ans){
    if(index == str.length()){
    ans.push_back(output);
        return ;
    }

    char ch = str[index];

    //include
    printSubSeq(str,output+ch,index+1,ans);
    //exclude
    printSubSeq(str,output,index+1,ans); 
}

int main(){ 
    string str = "abc";
    string output = " ";
    int index = 0;

    vector<string> ans;

printSubSeq(str,output,index,ans);

int n = ans.size();

cout << n << endl;

for(int i = 0 ; i < n; i++){
    cout << ans[i] << endl;
}

    return 0;
}