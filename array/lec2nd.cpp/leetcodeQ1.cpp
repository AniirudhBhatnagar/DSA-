#include<iostream>
using namespace std;

int findElement(int arr[],int size){
    int ans = 0;
     for(int i =0 ; i<size ; i++){ 
        ans = ans^arr[i];
    
     }
     return ans;
}

int main(){

     int arr[7]={1,2,4,3,2,1,3};
     int size = 7;

    int answer = findElement(arr,7);
    cout << "the Answer of the problem is :" << answer << endl;
}