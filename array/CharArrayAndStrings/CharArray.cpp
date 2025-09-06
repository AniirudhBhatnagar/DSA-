// Char Array stores nsequence of characters 

#include<iostream>
using namespace std;

int main(){
    //creation
    char arr[100];               // size = 1 box = i byte . Therefore, Total 10 bytes
    // vector<char> arr;

//input same as array and other things like accesing etc .

// but in this we can take full sring input at a single time and output also. we can use for loop also.

cout << " Enter you name : " << endl;
// cin >> arr; 
 
cin.getline(arr,100);
// cin.getline(arr,100,'\t');      // tab hit karenge tab input lena band kar dega baaki leta rahega.

cout << "Your name is :" << arr << endl; 
cout << arr[0] << "->" << (int)arr[0] << endl;      //char is ascii value dekh rahe hai .
cout << arr[1] << "->" << (int)arr[1] << endl; 
cout << arr[2] << "->" << (int)arr[2] << endl;
cout << arr[3] << "->" << (int)arr[3] << endl;
cout << arr[4] << "->" << (int)arr[4] << endl;

//if we want to take 2 string as input . Ex -> Anirudh Bhatnagar then ee can do like this.
// cin.getline(name,100);

 
return 0; 
}