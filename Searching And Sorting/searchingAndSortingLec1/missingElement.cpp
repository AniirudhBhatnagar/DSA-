//sum method 

// class Solution {
// public:
//     int missingNumber(vector<int>& arr) {
//        int n = arr.size();
//        int sum1 = 0;
//        int sum2 = 0;
//        for(int i = 0; i < n ; i++){
//          sum1 = sum1 + arr[i];
//        } 
     
//       sum2 = n*(n+1)/2;

//       return sum2-sum1;
//     }
// };


// xor method

// class Solution {
// public:
//     int missingNumber(vector<int>& arr) {
//         int n = arr.size();
//        int result = 0;
       
// for (int i = 0; i < n; i++) {
//     result ^= arr[i];  
//     result ^= i;      
// }


// result ^= n;

// return result;
       
//     }
// };
