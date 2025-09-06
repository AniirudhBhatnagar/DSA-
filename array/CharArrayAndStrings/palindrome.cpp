#include<iostream>
using namespace std;

 int getLength(char arr[],int size){
    int count = 0;
    int index = 0;
  
   while(arr[index] != '\0'){
    count ++;
    index ++;
   }
   return count;
 }

bool palindrome(char arr[],int size){
int n = getLength(arr,size);

int s = 0;
int e = n-1;

while(s <= e){
    if(arr[s]= arr[e]){
        s++;
        e--;
    }
    else{
        return false;
    }
}
return true;
}

int main(){
  char arr[100];
    // cin.getline(arr,100);
    cout << "Enter the string :" << endl;
    cin >> arr;

int size = 100;
  cout << "The Char array is : " << arr << endl;
    
int ans = palindrome(arr,size);

if(ans == true){
    cout << "Its a Palindrome." << endl;
}
else{
    cout << "Not a Palindrome."<<endl;
}

 return 0;
}