#include<iostream>
using namespace std;

void printCounting(int n){
   
    if(n == 0){
        return;
    }

    cout << n << " " ;
    printCounting(n-1);
}

int main(){
    int n;
    cout << "Enter The Value :" << endl;
    cin >> n;

    printCounting(n);

    return 0;
}