// The main principle of bubble sort is to swap the adjacent elements if need till the whole data is sorted.

// Time complexity of this algo is O(n^2) and this is the major draw back of this algo. 

#include<iostream>
#include<vector>
using namespace std;

int printVector(vector<int> arr,int size){
    cout << endl;
    cout << "The values of the Vector are : " << endl;
    for(int i = 0; i < size;i++){
   cout << arr[i] << " ";;
}
}

int bubbleSort(vector<int>& arr,int size){
    for( int i = 0;i<size-1;i++){
        for(int j = 0 ; j< size-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main(){
    vector<int> arr;

int size,value;
cout << "Enter the size of the arr : " << endl;
cin >> size;

cout << "Enter the values of the vector : " << endl;

for(int i = 0; i < size;i++){
    cin >> value;
    arr.push_back(value);
}
printVector(arr,size);

bubbleSort(arr,size);

cout << endl;

printVector(arr,size);

return 0;
}
