#include<iostream>
using namespace std;

int getQuotient(int dividend, int divisor) {
    int s = 0;  
    int e = dividend;  
    int mid;
    int ans = -1;

    while(s <= e) {
        mid = s + ((e - s) >> 1);  

        if(divisor * mid == dividend) {
            return mid;  
        }
        if(divisor * mid < dividend) {
            ans = mid;  
            s = mid + 1;
        } else {
            e = mid - 1;  
        }
    }

    return ans; 
}

int main() {
    int dividend, divisor;
    cin >> dividend >> divisor;

    int ans = getQuotient(dividend, divisor);
    cout << "Final Ans: " << ans << endl;

    return 0;
}
