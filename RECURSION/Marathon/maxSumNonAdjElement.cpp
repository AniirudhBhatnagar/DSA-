#include<iostream>
#include<vector>
using namespace std;

void solve(int arr[],int index,int &maxSum,int size,int sum){
    if(index >= size){
        maxSum = max(maxSum,sum);
        return;
    }

    solve(arr,index+2,maxSum,size,sum+arr[index]);
    solve(arr,index+1,maxSum,size,sum);

}

int main(){

    int arr[] = {2,4,1,6,8,5,9};
    int size = 7;
    
    int maxSum = INT_MIN;
    int index = 0;
    int sum = 0;
    solve(arr,index,maxSum,size,sum);
     
    cout << "The maximum Sum is : " << maxSum << endl;

    return 0;
}