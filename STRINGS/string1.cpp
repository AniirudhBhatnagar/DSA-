#include<iostream>
 using namespace std;

int main(){
string str;

cout << "Enter the String : " << endl;
cin >> str;

cout << "Ther String is : " << str << endl;

cout << str[0] << endl;

str.push_back('B');
str.push_back('h');
str.push_back('a');
str.push_back('t');
str.push_back('n');
str.push_back('a');
str.push_back('g');
str.push_back('a');
str.push_back('r');

cout << "The new string is : " << str << endl;

str.push_back('r');

cout << "The new string is : " << str << endl;

str.pop_back();

cout << "The string after poping : " << str << endl;


string sentence;

cout << "Enter the sentence : " << endl;

getline(cin,sentence,',');

// cin.get line();   this is only for char array 

cout << " The Sentence is : " << sentence << endl;

if(str.empty()){
    cout << "The string is empty." << endl;
}
else{
    cout << "The String is not Empty : " << endl;
}

return 0;
}
