#include<iostream>
using namespace std;

class Heaps{
    public:
       int *arr;
       int capacity;
       int index;

       Heaps(int n){
        this->capacity = n;
        arr = new int[n];
        index = 0;
       }

       void printHeap(){
        for(int i =0 ; i < capacity;i++){
            cout << arr[i] << " ";
        }
        cout << endl;
       }

       void insertInHeap(int val){
        if(index == capacity - 1) {
            cout << "The Heap is Full" << endl;
            return;
        }
        index++;
        arr[index] = val;
        
        int i = index;
        while(i > 1){
            int parentIndex = i/2;
            if(arr[parentIndex] < arr[i]){
                swap(arr[parentIndex],arr[i]);
                i = parentIndex;
            }
            else{
                break;
            }
        }
       }

       void deleteFromHeap(){
           swap(arr[1],arr[index]);
           index--;
           heapify(arr,index,1);
       }

       void heapify(int *arr,int n,int currIndex){
        int i = currIndex;
        int leftIndex = 2*i;
        int rightIndex = 2*i + 1;
        int largestIndex = i;

        if(leftIndex < n && arr[leftIndex] > arr[largestIndex]){
            largestIndex = leftIndex;
        }
         if(rightIndex < n && arr[rightIndex] > arr[largestIndex]){
            largestIndex = rightIndex;
        }

        if(largestIndex != i){
            swap(arr[currIndex],arr[largestIndex]);
            i = largestIndex;
            heapify(arr,n,i);
        }
       }

       void buildHeap(int* arr,int n){
        for(int i = n/2;i > 0;i--){
            heapify(arr,n,i);
        }
       }

};

int main(){
    Heaps pq(10);
    pq.insertInHeap(10);
    pq.printHeap();
    pq.insertInHeap(20);
    pq.printHeap();
    pq.insertInHeap(30);
    pq.printHeap();
    pq.insertInHeap(5);
    pq.printHeap();
    pq.insertInHeap(50);
    pq.printHeap();
    pq.insertInHeap(25);
    pq.printHeap();
    pq.deleteFromHeap();
    pq.printHeap();
    return 0;
}