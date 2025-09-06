#include <iostream>
#include <limits.h>

using namespace std;

int maxValue(int arr[],int size){
    int maxAns = INT_MIN;

    for (int i = 0; i < size ; i++){
      maxAns = max(maxAns , arr[i]);
    }

    return maxAns;

}

int main(){
   int arr[5] = {20,45,21,30,70};
   int size = 5;
  int ans = maxValue(arr,size);

 cout << "the maximum value of the array is : " << ans << endl;
}
