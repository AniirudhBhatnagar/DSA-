// Q -> given an array of binary number ie. 0 and 1 . Find 2's compliment of the numbers ?

// hint - > 2's compliment ka lia hume pahale 1's compliment nikalna padega 
// note :: 2's compliment mtlb 1's compliment + 1

// steps to solve the question 

// 1) find ones compliment 
// 2) add 1 to ones compliment 


#include <iostream>
#include <vector>  // Include vector library
using namespace std;

vector<int> findComplement(vector<int> arr) {  // Corrected function signature with return type

    int n = arr.size();
    vector<int> twoscomp(n + 1, 0);

    // Step 1: Calculate 1's complement
    for (int k = n - 1; k >= 0; k--) {  // Corrected loop to decrement from n-1 to 0
        twoscomp[k] = arr[k] == 0 ? 1 : 0;  // Fixed index to use 'k' instead of 'i'
    }

    // Step 2: Add 1 to 1's complement to get 2's complement
    int carry = 1;  // Initialize carry to 1 for adding 1
    for (int j = n - 1; j >= 0; j--) {  // Corrected loop bounds and direction
        int sum = twoscomp[j] + carry;  // Sum current bit with carry
        twoscomp[j] = sum % 2;  // Store result in twoscomp
        carry = sum / 2;  // Update carry for the next iteration
    }

    // Handle any remaining carry
    if (carry) {
        twoscomp.insert(twoscomp.begin(), carry);  // Insert carry at the beginning
    } else {
        twoscomp.erase(twoscomp.begin() + n);  // Remove the extra 0 at the end
    }

    return twoscomp;
}

int main() {
    std::vector<int> arr;  // Use std::vector explicitly
    arr.push_back(1);  // Initialize vector elements
    arr.push_back(0);
    arr.push_back(1);
    arr.push_back(0);
    arr.push_back(1);
    arr.push_back(1);
    arr.push_back(1);
    arr.push_back(0);

    vector<int> twoscomp = findComplement(arr);  // Call function with correct variable
int p = twoscomp.size();
    for (int m = 0; m < p; m++) {  // Use size_t for unsigned comparison
        cout << twoscomp[m] << endl;  // Output each bit of the result
    }

    return 0;
}
