#include<iostream>
using namespace std;


int binarySearch(int arr[],int size,int target,int s,int e){
    if(s > e){
        return -1;
    }
    
    int mid = s + (e-s)/2;

    if(arr[mid] == target){
        return mid;
    }

    if(arr[mid] > target){
       return binarySearch(arr,size,target,s,m kd-1);
    }


    if(arr[mid] < target){
        return binarySearch(arr,size,target,mid+1,e);
    }
    
}



int main(){
    int arr[] = {10,20,30,40,50,60,70,80,90};
    int size = 9;
    int target;
    cout << "Enter The Target : " << endl;
    cin >> target;

    int s = 0;
    int e = size - 1;

int ans = binarySearch(arr,size,target,s,e);
cout << "Ans Index : " << ans <<  endl;
    return 0;
}