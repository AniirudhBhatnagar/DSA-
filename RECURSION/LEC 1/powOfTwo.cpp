#include<iostream>
using namespace std;

int pow(int n){
    if(n == 0){
        return 1;
    }
    int recAns = 2* pow(n-1);
    return recAns;
}
int main(){
    int n = 10;
    cout << pow(n) << endl;
    return 0;
}