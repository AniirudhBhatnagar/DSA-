#include<iostream>
using namespace std;

int getFactorial(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    int finalAns = n*getFactorial(n-1);
   return finalAns;
}

int main(){
    int n;
    cout << " Enter The Number : " << endl;
    cin >> n;

    int ans = getFactorial(n);
    cout << "The Factorial of " << n << " is " << ans << endl;

    return 0;
}