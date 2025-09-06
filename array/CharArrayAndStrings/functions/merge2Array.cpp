// string concatenation.


#include<iostream>
using namespace std;

int main(){

    char arr[100];
    cin >> arr;
    cout << "the second string is : "<< arr << endl;

    char arr2[100];
    cin >> arr2;
    cout << " The 2nd strings is : " << arr2 << endl;

 char arr3[200];


 cout << strcat(arr,arr2) << endl;

    return 0;
}