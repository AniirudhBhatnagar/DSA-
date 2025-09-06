#include<iostream>
using namespace std;

int main(){

    //stack -> integer
    int a = 5;
    cout << a << endl;

    //integer -> heap memory
    int *p = new int;
    *p = 5;
    cout<< *p << endl;

    //to free the allocated heap memory 

    delete p; 

    //stack -> arr
    int arr[3] = {0};
    cout << arr[0] << arr[1] << arr[2] << endl;

    //heap -> arr
  
    int *brr = new int[10];
    cout << brr[0] << brr[1] << brr[2] << endl;   // heap mai automatically 0 se initialise ho jat ahai 


   // stack 2d array 
   int prr[2][4] = {
                {1,2,3},
                {4,5,6}
   };

   //heap ->2d array
   //here 4 is the row size .
   //3 is the column size.
   int **q = new int*[4];

   for(int i = 0 ; i < 4;i++){
    //har pointer ka lia ek 1d array create karna hai 
   q[i] = new int[3];
   }

   //taing input
   for(int i = 0 ; i < 4;i++){
    for(int j = 0 ; j < 3; j++){
        cin >> q[i][j];
    }
    cout << endl;
   }

cout <<  "Priting 2d Array in Heap" << endl;

for(int i = 0 ; i < 4;i++){
    for(int j = 0 ; j < 3; j++){
        cout << q[i][j];
    }
    cout << endl;
   }

for(int i = 0 ;i < 4;i++){
    delete[] q [i];
}
    return 0;
}