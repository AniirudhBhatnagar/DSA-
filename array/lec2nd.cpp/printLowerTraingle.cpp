#include<iostream>
using namespace std;

void printLowerTriangle(int arr[],int n){
    
    for(int i = 0 ; i < n ; i++){
         for(int j = 0 ; j < n ; j++){
            cout << arr[i] << " " << arr[j] << endl;
         }
    }
}

int main(){
    int arr[100];

    int size;
    cout << "enter the size of the array" << endl;
    cin >> size;

    cout << "enter the values of the array : " << endl; 

    for (int i = 0 ; i<size ; i++){
        cin >> arr[i];
    } 
   printLowerTriangle(arr,size);
}