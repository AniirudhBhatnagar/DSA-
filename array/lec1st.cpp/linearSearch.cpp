#include<iostream>
using namespace std;

bool findTarget(int arr[],int n,int target)
{
    for(int i=0;i<n;i++){
        int currentElement = arr[i];
        if(currentElement == target){
        return true;
    }
    }
    return false;
}


int main(){
    int a[] = {10,20,30,40,50,60};
   int size = 6;
   int target;

   cout << "enter the target value which you want to find" << endl;
   cin >> target;

  bool ans = findTarget(a,6,target);
  cout << ans << " ";

}