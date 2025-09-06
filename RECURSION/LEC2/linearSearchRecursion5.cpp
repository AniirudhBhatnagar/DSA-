#include<iostream>
using namespace std;

bool linearSearchInRecursion(int arr[],int size,int index,int target){
 
 if(index == size){
    return false;
 }
if(arr[index]== target){
    return true;
}
bool finalAns = linearSearchInRecursion(arr,size,index+1, target);
return finalAns;
}


int main(){
    int arr[] = {10,20,30,40,50,60};
    int size = sizeof(arr)/sizeof(int);
    int target;
    cin >> target;

    int index = 0;
    
    bool ans = linearSearchInRecursion(arr,size,index,target);

    if(ans == 1){
        cout << "m Target Present" << endl;
    }
    else{
        cout << "Not Present " << endl;
    }

    return 0;
}