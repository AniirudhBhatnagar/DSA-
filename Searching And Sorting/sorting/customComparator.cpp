// isme hum in built library ko kaise use karna hai voh seekhenge
// isme agar array ho toh phir sort(arr,arr+size)


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int printVector(vector<int> arr,int size){
    cout << "The values of the Vector are : " << endl;
    for(int i = 0; i < size;i++){
   cout << arr[i] << " ";
}
}

bool mycomp(int &a,int &b){
        //    return a < b;          isse true return hoga toh yeh increasing order karegi.
         return a > b;                //isse decreasing order mai hoga 
}

 
int main(){
    vector<int> arr;

int size,value;
cout << "Enter the size of the arr : " << endl;
cin >> size;

cout << "Enter the values of the vector : " << endl;

for(int i = 0; i < size;i++){
    cin >> value;
    arr.push_back(value);
} 
printVector(arr,size);

cout << endl;

sort(arr.begin(),arr.end());

printVector(arr,size);

// if we want to sort in decreasing order then 

cout << endl;

sort(arr.begin(),arr.end()),mycomp;

printVector(arr,size);


return 0;

}
