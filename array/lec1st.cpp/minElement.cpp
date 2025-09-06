#include <iostream>
#include <limits.h>

using namespace std;

int minValue(int arr[],int size){
    int minAns = INT_MAX;

    for (int i = 0; i < size ; i++){
      minAns = min(minAns , arr[i]);
    }

    return minAns;

}

int main(){
   int arr[5] = {20,45,21,30,70};
   int size = 5;
  int ans = minValue(arr,size);

 cout << "the minimum value of the array is : " << ans << endl;
}
