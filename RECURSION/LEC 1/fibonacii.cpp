#include<iostream>
using namespace std;

int fib(int n){

     if(n == 0 || n == 1){
        return n;
     }

     int ans = fib(n-1) + fib(n-2);
        return ans;
     

}

int main(){
    int n;
    cout << " Enter The Number : " << endl;
    cin >> n;

    int fibAns = fib(n);
    cout << " The Ans is :" << fibAns << endl;

    return 0;
}