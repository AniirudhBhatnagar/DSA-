#include<iostream>
using namespace std;

void merge(int arr[],int s,int e,int mid){

  int n1 = mid - s + 1;
  int n2 = e - mid;

  int a[n1];
  int b[n2];

  for(int i = 0;i <n1;i++){
    a[i] = arr[s + i];
  }

  for(int i = 0;i <n2;i++){
    b[i] = arr[mid + 1 + i];
  }

  int i = 0;
  int j = 0;
  int k = s;

  while(i < n1 && j < n2){
    if(a[i]>b[j]){
        arr[k] = a[i];
        i++;k++;
    }
    else{
        arr[k]= b[j];
        j++;k++;
    }
  }

  while(i < n1){
    arr[k] = a[i];
        i++;k++;
  }

  while(j < n2){
    arr[k] = b[j];
        j++;k++;
  }
}

void mergeSort(int arr[],int s,int e){
   
   int mid = s + (e-s)/2;
while(s < e){
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);

merge(arr,s,e,mid);
}

}

int main(){
    int arr[10] = {3,4,2,6,5,0,8,9,1,7};
    int n = sizeof(arr)/sizeof(int);

    for(int i = 0; i < n;i++){
        cout << arr[i] << " ";
    }

int s = 0;
int e = n - 1;

mergeSort(arr,s,e);

cout << endl;
cout << "The Sorted Array is :" << endl;

    for(int i = 0; i < n;i++){
        cout << arr[i] << " ";
    }

   return 0;
}