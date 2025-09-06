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

int minimumValue(int arr[][3],int rowsize,int colsize,int minValue){

for(int i = 0;i<rowsize;i++){
    for(int j = 0;j<colsize;j++){

        minValue = min(minValue,arr[i][j]);
        
    }
    }
    return minValue;
}

int main(){
    int arr[3][3];
    int rowsize = 3;
    int colsize = 3;
    int minValue = INT_MAX;

    cout << "enter the values of the 2D array" << endl;

    for(int i = 0;i<rowsize;i++){
    for(int j = 0;j<colsize;j++){

        cin >> arr[i][j];

    }
    }

    printArray(arr,3,3);

    int ans = minimumValue(arr,3,3,minValue);

    cout << "the minimum value is : " << ans << endl;
}