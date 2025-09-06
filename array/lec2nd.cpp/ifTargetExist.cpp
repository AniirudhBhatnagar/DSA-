#include<iostream>
using namespace std;

bool ifTargetExist(int arr[],int n,int target){

for(int i = 0 ;i < n ; i++){
    for(int j=0;j<n;j++){


   if(arr[i] + arr[j] == target){
    return true;
   break;
   }
    }
}
return false;
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
    cout << "enter the target" << endl;
    cin >> target;

    bool ans = ifTargetExist(arr,size,target);

    cout << ans << endl;

    if(ans == 1){
        cout << "The target Exist" << endl;
    }
    else
        cout << "The Target Does Not Exist" << endl;
}