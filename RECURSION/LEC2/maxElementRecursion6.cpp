#include<iostream>
using namespace std;

void maxElement(int arr[],int size,int index,int &maxi){
    if(index == size){
        return;
    }
    maxi = max(maxi,arr[index]);
   maxElement(arr,size,index+1,maxi);
}

int main(){
    int arr[] = {20,40,30,10,60,50};
    int size = sizeof(arr)/sizeof(int );
    int index = 0;
    int maxi = INT_MIN;

 maxElement(arr,size,index,maxi);
cout << " The Maximum Element is : " << maxi << endl;

return 0;
}