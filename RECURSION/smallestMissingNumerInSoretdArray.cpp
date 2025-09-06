#include <iostream>
using namespace std;

int findMissingUtil(int arr[], int low, int high) {
    if (low > high) {
        return low; 
    }

    int mid = low + (high - low) / 2;

    if (arr[mid] != mid) {
        return findMissingUtil(arr, low, mid - 1);
    } else {
        
        return findMissingUtil(arr, mid + 1, high);
    }
}

int main() {
    int arr[] = {0, 1, 2, 4, 5, 6};
    int size = sizeof(arr) / sizeof(int);
    
    int missingNumber = findMissingUtil(arr, 0, size - 1);

    cout << "The smallest missing number is: " << missingNumber << endl;

    return 0;
}
