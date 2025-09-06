#include<iostream>
using namespace std;

pair<int,int> ifTargetExist(int arr[],int n,int target){

        //assuming (-1,-1) as no answer found.

    pair<int,int> ans = make_pair(-1,-1);

      //check all pairs.

for(int i = 0 ;i < n ; i++){
    for(int j=0;j<n;j++){

// if we want unique pairs then we should run 2nd loop from j = i + 1 to n so that same pairs will be eliminated.

   if(arr[i] + arr[j] == target){

      ans.first=arr[i];
      ans.second=arr[j];
      
      cout << ans.first << "," << ans.second << endl;
   }
    }
}
}

int main(){
    int arr[100];

    int size;
    cout << "enter the size of the array" << endl;
    cin >> size;

    cout << "enter the values of the array : " << endl; 

    for (int i = 0 ; i<size ; i++){
        cin >> arr[i];
    } 

    int target;
    cout << "enter the target" << endl;
    cin >> target;

    // pair<int,int> ans = ifTargetExist(arr,size,target);
  ifTargetExist(arr,size,target);
    // if(ans.first == -1 && ans.second == -1){
    //     cout << "pair not found " << endl;
    // }
    // else
    //     cout << "pair found" << endl << ans.first << "," << ans.second <<endl;
}