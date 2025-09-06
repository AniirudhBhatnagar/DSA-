#include<iostream>
using namespace std;

bool checkSorted(int n,int index,int arr[]){
    if(index == n-1){
        return true;
    }
    if(arr[index + 1] < arr[index]){
        return false;
    }
    bool ans = checkSorted(n,index + 1,arr);
    return ans;
 }


// #include<iostream>
// using namespace std;


// bool checkSorted(int arr[],int size,int index)
// {

//     if(index + 1 == size){
//         return true;
//     }

//     bool currentAns = false;
//     bool recursionAns = false;
 

//     if(arr[index+1] > arr[index]){
//         currentAns = true;
//     }

//    recursionAns = checkSorted(arr,size,index + 1);

//    return currentAns && recursionAns;
// }

int main(){

    int arr[] = {10,20,30,40,50};
    int size = 5;
    int index = 0;

    int ans = checkSorted(size,index,arr);

    cout << ans << endl;

    return 0;
}