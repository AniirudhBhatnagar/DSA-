#include<iostream>
#include<vector>
using namespace std;

void mergeTwoSortedArr(int arr[],int sizeArr,int brr[],int sizeBrr,vector<int> &ans){

    int i = 0;
    int j = 0;

    while(i < sizeArr && j < sizeBrr){
        if(arr[i]<brr[j]){
            ans.push_back(arr[i]);
            i++;
        }
        else{
            ans.push_back(brr[j]);
            j++;
        }
    }

    if(i < sizeArr){
        for(int n = i; n < sizeArr;n++){
            ans.push_back(arr[n]);
        }
    }
    if(j < sizeBrr){
        for(int m = j; m < sizeBrr;m++){
            ans.push_back(brr[m]);
        }
    }
}

int main(){
    int arr[] = {10,30,40,60};
    int sizeArr = 4;

    int brr[] = {20,50,70,80,90,100};
    int sizeBrr = 6;

    vector<int> ans;

    mergeTwoSortedArr(arr,sizeArr,brr,sizeBrr,ans); 

    for(int nums:ans){
        cout << nums << " ";
    }

    return 0;
}