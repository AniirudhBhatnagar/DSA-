#include<iostream>
using namespace std;

void printNumber(int n){
    if(n == 0){
        return;
    }
    int ans = n % 10;
    int number = n/10;
    printNumber(number);
    cout << ans << " ";
}

int main(){
    int n = 389;
    printNumber(n);
    return 0;
}