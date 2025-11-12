/*
Problem Reverse String
Write a function that reverses a string. The input string is given as an array of characters s.
You must do this by modifying the input array in-place with O(1) extra memory.

Example 1:
Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]

Example 2:
Input: s = ["H","a","n","n","a","h"]
Output: ["h","a","n","n","a","H"]
  
Constraints:
1 <= s.length <= 10^5
s[i] is a printable ascii character.

Answer
*/
//approach1-reverse method
class Solution {
public:
    void reverseString(vector<char>& s) {
    std::reverse(s.begin(),s.end());
    }
};
//approach2-swap approach
class Solution {
public:
    void reverseString(vector<char>& s) {
     int n=s.size();
     for(int i=0;i<n/2;i++){
        swap(s[i],s[n-i-1]);
     }
    }
};
