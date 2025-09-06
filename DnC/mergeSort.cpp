#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr,int s,int mid,int e){

    int n1 = mid - s + 1;
    int n2 = e - mid;

    vector<int> a;
    vector<int> b;

    for(int i = 0; i < n1;i++){
        a.push_back(arr[s + i]);
    }

    for(int i = 0; i< n2;i++){
        b.push_back(arr[mid + i +1]);
    }

   int i = 0;
   int j = 0;
   int index = s;

   while(i < n1 && j < n2){
    if(a[i] > b[j]){
     arr[index] = b[j];
     index++;
     j++;
    }
    else{
        arr[index] = a[i];
        index++;
        i++;
    }
   }

   if( i < n1){
    for(int p = i; p < n1;p++){
        arr[index] = a[p];
        index++;
    }
   }

   if( j < n2){
    for(int h = j; h < n2;h++){
        arr[index] = b[h];
        index++;
    }
   }
}

void mergeSort(vector<int> &arr,int s,int e){
    if(s >= e){
        return;
    }
     
    int mid = s+(e-s)/2;
    
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);

    merge(arr,s,mid,e);

}

int main(){

    vector<int> arr;

    arr.push_back(4);
    arr.push_back(6);
    arr.push_back(3);
    arr.push_back(10);
    arr.push_back(2);
    arr.push_back(8);
    arr.push_back(5);
    arr.push_back(7);
    arr.push_back(9);
    arr.push_back(1);

    int n = arr.size();
    int s = 0;
    int e = n - 1;


    cout << "Before" << endl;

   for(int i = 0; i < n;i++){
    cout << arr[i] << " ";
   }

    cout << endl;

    mergeSort(arr,s,e);

    cout << "After" << endl;
   
    for(int i = 0; i < n;i++){
    cout << arr[i] << " ";
    }

    return 0;
}