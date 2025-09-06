#include<iostream>
using namespace std;

void printOdd(int arr[],int size,int index){
    if(index == size){
        return;
    }
    if(arr[index]%2 != 0){
        cout << arr[index] << " ";
    }
    printOdd(arr,size,index+1);
}
void printEven(int arr[],int size,int index){
    if(index == size){
        return;
    }
    if(arr[index]%2 == 0){
        cout << arr[index] << " ";
    }
    printEven(arr,size,index+1);
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr)/sizeof(int );
    int index = 0;
    
    cout << " ALL Odd Numbers Are : " << endl;
    printOdd(arr,size,index);
    cout << endl;
     cout << " ALL Even Numbers Are : " << endl;
    printEven(arr,size,index);

return 0;
}