#include<iostream>
using namespace std;

int search(int arr[], int target,int size) {
        
        int s = 0;
        int e =size-1;

        int mid = s + (e-s)/2;
     
       while(s <= e){
        if(target == arr[mid]){
            return mid;
        }
        if(target > arr[mid]){
            s = mid + 1 ;
        }
        if(target < arr[mid]){
            e = mid - 1;
        }
        mid = s + (e-s)/2;
       }
        return -1;
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

 int target;
    cout << "enter target" << endl;
    cin >> target;

int value = search(arr,target,size);
cout << value;

}