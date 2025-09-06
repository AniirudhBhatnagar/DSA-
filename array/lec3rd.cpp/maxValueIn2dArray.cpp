#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;

int printArray(int arr[][3],int rowsize,int colsize){

cout << "the array is :" << endl;

for(int i = 0;i<rowsize;i++){
    for(int j = 0;j<colsize;j++){

        cout << arr[i][j];
        
    }
cout << endl;
}
}

int maximumValue(int arr[][3],int rowsize,int colsize,int maxValue){

for(int i = 0;i<rowsize;i++){
    for(int j = 0;j<colsize;j++){

        maxValue = max(arr[i][j],maxValue);
        
    }
    }
    return maxValue;
}

int main(){
    int arr[3][3];
    int rowsize = 3;
    int colsize = 3;
    int maxValue = INT_MIN;

    cout << "enter the values of the 2D array" << endl;

    for(int i = 0;i<rowsize;i++){
    for(int j = 0;j<colsize;j++){

        cin >> arr[i][j];

    }
    }

    printArray(arr,3,3);

    int ans = maximumValue(arr,3,3,maxValue);

    cout << "the maximum value is : " << ans << endl;
}