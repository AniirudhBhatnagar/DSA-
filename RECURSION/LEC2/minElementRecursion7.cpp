#include<iostream>
using namespace std;

void minElement(int arr[],int size,int index,int &mini){
    if(index == size){
        return;
    }
    mini = min(mini,arr[index]);
   minElement(arr,size,index+1,mini);
}

int main(){
    int arr[] = {20,40,30,10,60,50};
    int size = sizeof(arr)/sizeof(int );
    int index = 0;
    int mini = INT_MAX;

 minElement(arr,size,index,mini);
cout << " The Minimum Element is : " << mini << endl;

return 0;
}