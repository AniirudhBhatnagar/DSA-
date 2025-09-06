// yeh leetcode ka question hai 
// question number 852 
// Question ->
// You are given an integer mountain array arr of length n where the values increase to a peak element and then decrease.
// Return the index of the peak element.
// Your task is to solve it in O(log(n)) time complexity.
// Example 1:
// Input: arr = [0,1,0]
// Output: 1
// Example 2:
// Input: arr = [0,2,1,0]
// Output: 1
// Example 3:
// Input: arr = [0,10,5,2]
// Output: 1
// Constraints:
// 3 <= arr.length <= 105
// 0 <= arr[i] <= 106
// arr is guaranteed to be a mountain array.
 
//  Approach 1 using linear search 

// class Solution {
// public:
//     int peakIndexInMountainArray(vector<int>& arr) {
//     int min = INT_MAX;
//     int maxIndex = -1;
//     for(int i = 0 ,i < arr.size() ; i++){
//         if(arr[i] > max){
//             max = arr[i];
//             maxIndex = i;
//         }
//     }
//     return maxIndex;
//     }
// };

// Approach 2 using binary search 
 
//  class Solution { 
// public:
//     int peakIndexInMountainArray(vector<int>& arr) {
//     int n = arr.size();
//     int s = 0;
//     int e = n - 1;
//     int mid = s + (e-s)/2;
//     while(s <= e){
//     if(arr[mid]>arr[mid+1]){
//         e = mid - 1;
//     }
//     if(arr[mid]<arr[mid+1]){
//         s = mid + 1 ;
//     }
//     mid = s + (e-s)/2;
//     }
//     return mid;
//     }
//  };

// or 


// now this last solution is the best 

// class Solution {
// public:
//     int peakIndexInMountainArray(vector<int>& arr) {
//     int n = arr.size();
//     int s = 0;
//     int e = n - 1;
//     int mid = s + (e-s)/2;
//     while(s < e){ 
//     if(arr[mid]>arr[mid+1]){
//         e = mid ;
//     }
//     if(arr[mid]<arr[mid+1]){
//         s = mid + 1 ;
//     }
//     mid = s + (e-s)/2;
//     }
//     return mid;
//     }
//  }

// s < e tab karte hai jab apan ya to s =mid karte hai ya to e = mid karte hai 

// we can also use store and compute approach here which is more easier 

// class Solution {
// public:
//     int peakIndexInMountainArray(vector<int>& arr) {
//     int n = arr.size();
//     int s = 0;
//     int e = n - 1;
//     int mid = s + (e-s)/2;
//     int ansIndex = -1;
//     while(s < e){
//     if(arr[mid]<arr[mid+1]){
//         s = mid + 1 ;
//     }
//     else {
//         ansIndex = mid;
//         e = mid;
//     }
//     mid = s + (e-s)/2;
//     }
//     return mid;
//     }
// };




