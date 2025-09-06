#include<iostream>
using namespace std;

void binarySearch(int arr[],int size,int target,int &arrIndex){
    int s = 0;
    int e = size - 1;
    int mid = s + (e-s)/2;

    while(s<=e){
        if (arr[mid] == target){
            arrIndex = mid;
            s = mid +1 ;
        }
        if(target > arr[mid]){
            s = mid + 1;
        }
        if(target < arr[mid]){
            e = mid - 1;
        }
         mid = s + (e-s)/2;
    }
}

int main(){
    int arr[] = {5,10,20,20,40,60,60,60,60,90};
    int size = 10;
    int target = 20;
    int arrIndex = -1;

    binarySearch(arr,size,target,arrIndex);
    cout << "The required Index is :" << arrIndex ;

}