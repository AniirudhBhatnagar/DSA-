// 647. Palindromic Substrings
// Medium
// Topics
// Companies
// Hint
// Given a string s, return the number of palindromic substrings in it.

// A string is a palindrome when it reads the same backward as forward.

// A substring is a contiguous sequence of characters within the string.

 

// Example 1:

// Input: s = "abc"
// Output: 3
// Explanation: Three palindromic strings: "a", "b", "c".
// Example 2:

// Input: s = "aaa"
// Output: 6
// Explanation: Six palindromic strings: "a", "a", "a", "aa", "aa", "aaa".
 

// Constraints:

// 1 <= s.length <= 1000
// s consists of lowercase English letters.


class Solution {
public:

int expandString(string s,int i,int j){
    int count = 0;
    while(i >= 0 && s[i] == s[j] && j >= 0){
        count++;
        i--;
        j++;
    }
    return count;
}
    int countSubstrings(string s) {

        int totalCount = 0;

        for(int center = 0; center < s.length();center ++){
            int i = center;
            int j = center ;
            int oddPalSubCount = expandString(s,i,j);

            i = center;
            j = center + 1;
            int evenPalSubCount = expandString(s,i,j);

           totalCount = totalCount + oddPalSubCount + evenPalSubCount;
        }
        return totalCount;
    }
};