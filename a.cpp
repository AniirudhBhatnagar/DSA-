#include<iostream>
using namespace std;

void printString(string str,string output,int index){
    if(index == str.length()){
        cout << output << " ";
        return;
    }
    char ch = str[index];
    
    printString(str,output+ch,index+1);
    printString(str,output,index+1);
}

int main(){
    string str = "abc";
    string output = " ";
    printString(str,output,0);
    return 0;
}