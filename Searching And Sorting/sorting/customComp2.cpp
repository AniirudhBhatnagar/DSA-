// Isme hum vector of vector ka second element ki sorting karni ho maanlo first ko chode 2nd element ki toh kaise karenge



#include<iostream>
#include<vector>
using namespace std;

void printVector(vector<vector<int> >arr,int size){
    cout << "The values of the Vector are : " << endl;
    for(int i = 0; i < size;i++){
        vector<int>&temp = arr[i];
        int a = temp[0];
        int b = temp[1];
   cout << a << " " << b << endl ;
}
}

bool mycomp(vector<int> &a,vector<int> &b){
    // return a[0] < b[0]                      isse 1st index ka he comparison hoga kyuki 0 hai .
    return a[1] < b[1];                      //isse 2nd index ka basis pa comparison hoga.
}
int main(){
     
    //  initialisation
    vector<vector<int> >arr;

// ab input lete hai user se 

int n ; 
cout << "Enter Size : " << endl;
cin >> n;

for(int i = 0;i < n; i++){
    int a,b;
    cout << "enter a and b : " << endl;
    cin >> a >> b ;
    vector<int> temp;
    temp.push_back(a);
    temp.push_back(b);
    arr.push_back(temp);


}

printVector(arr,n);

// now if we want to sort teh array with respect to first index then -> 

sort(arr.begin(),arr.end());     //normal fucntion se array 1st element ka respect mai he sort hota hai .

cout << endl << "Now this sorting is on the basis of 1st index " << endl << endl;

printVector(arr,n);

// now agar hume 2nd index ka respect mai sort karna ho toh hum mycomp function banake solve karnege yaha 2 vector hai toh huve 2 vector a and b leke he karna padega 

cout << endl << "Now this sorting is on the basis of 2nd index " << endl << endl;

sort(arr.begin(),arr.end(),mycomp);

printVector(arr,n);
 
return 0;

}
