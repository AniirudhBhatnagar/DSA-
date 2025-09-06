// I select the minimum element and put it on the right position 
// for ith iteration, pick smallest element from 0  to (n-1) index and swap it with ith element.
// no of iteration needed = 4 ie (n-1) and no of comparisons in 1st iteration = 4 , then 2rd mai 3,then 3rd mai 2 and 4th mai 1.
//  therefor the outer loop will be n-1 time and inner loop will ne (n-1) -> (1).
// time complexity of this code is o(n^2) and space complexity will be o(1);

#include<iostream>
#include<vector>
using namespace std;

int printVector(vector<int> arr,int size){
    cout << "The values of the Vector are : " << endl;
    for(int i = 0; i < size;i++){
   cout << arr[i] << " ";
}
}
void selectionSort(vector<int>& arr,int size){
  
    for(int i = 0; i < size - 1 ; i++){
        int minIndex = i;
        for(int j = i+1; j < size; j++){
            if(arr[j]<arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[i],arr[minIndex]);
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

selectionSort(arr,size);

cout << endl;

printVector(arr,size);

return 0;

}
