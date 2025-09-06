// 680. Valid Palindrome II
// Solved
// Easy
// Topics
// Companies
// Given a string s, return true if the s can be palindrome after deleting at most one character from it.

 

// Example 1:

// Input: s = "aba"
// Output: true
// Example 2:

// Input: s = "abca"
// Output: true
// Explanation: You could delete the character 'c'.
// Example 3:

// Input: s = "abc"
// Output: false
 

// Constraints:

// 1 <= s.length <= 105
// s consists of lowercase English letters.






class Solution {
public:

    bool checkPlaindrome(string str,int s,int e){
        while(s <= e){
            if(str[s] != str[e]){
                return false;
            }
            else{
                s++;
                e--;
            }
        }
        return true;
    }
    bool validPalindrome(string s) {
        int n = s.length();
        int p = 0;
        int k = n - 1;
        while(p <= k ){
            if(s[p] == s[k]){
                p++;
                k--;
            }
            else{
                 bool strOne = checkPlaindrome(s,p+1,k);
                 bool strTwo = checkPlaindrome(s,p,k-1);
                 bool ans = strOne || strTwo;
                 return ans;
            }
        } 
        return true;
        
    }
};