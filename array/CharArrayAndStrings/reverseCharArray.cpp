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

void reverseCharArray(char arr[],int size){
int n = getLength(arr,size);
int s = 0;
int e = n-1;

while(s <= e){
    swap(arr[s],arr[e]);
    s++;
    e--;
}
}

int main(){
char arr[100];
    // cin.getline(arr,100);
    cout << "Enter the string :" << endl;
    cin >> arr;
int size = 100;
  cout << "The Char array is : " << arr << endl;

   reverseCharArray(arr,size);

   cout << "The reversed String is : " << arr << endl;

    return 0;
}