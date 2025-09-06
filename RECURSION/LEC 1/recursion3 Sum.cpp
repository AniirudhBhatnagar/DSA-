#include<iostream>
using namespace std;

int getSum(int n){
    //base Case

    if(n == 1){
        return 1;
    }

    int finalAns = n + getSum(n-1);
    return finalAns;
}

int main(){
     int n;
    cout << " Enter The Number : " << endl;
    cin >> n;
    
    int ans = getSum(n);
    cout << "The Sum is :" << ans << endl;
    return 0;
}