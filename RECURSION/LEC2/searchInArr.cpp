 #include<iostream>
using namespace std;

bool searchArr(int n,int index,int arr[],int target){
    if(index == n){
        return false;
    }
   if(arr[index] == target){
    return true;
   }
   bool recAns = searchArr(n,index+1,arr,target);
   return recAns;
   
}
 
int main(){
    int arr[] = {10,20,30,40,50};
    int n = sizeof(arr)/sizeof(int);
    int index = 0;
    int target = 5 0;

    int ans = searchArr(n,index,arr,target);
    cout << ans << endl;

return 0;
}