#include<iostream>
#include<vector>
using namespace std;

int printVector(vector<int> arr,int size){
    cout << "The values of the Vector are : " << endl;
    for(int i = 0; i < size;i++){
   cout << arr[i] << " ";
}
}

void insertionSort(vector<int> &arr, int size){

for(int i = 1; i < size;i++){
    int key = arr[i];
    int j = i-1;
    while(j>=0 && arr[j] > key){
    arr[j+1] = arr[j];
    j--;
    }
    arr[j+1]= key; 
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

insertionSort(arr,size);

cout << endl;

printVector(arr,size);

}
