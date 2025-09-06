#include<iostream>
using namespace std;

int getFact(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    int fact = n * getFact(n-1);
    return fact;
}
int main(){
    int n = 5;
   int ans = getFact(n);
   cout << "Ans is : " << ans << endl;
   return 0;
}