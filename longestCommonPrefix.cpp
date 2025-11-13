/*
Problem :
Longest Common Prefix
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

Example 1:
Input: strs = ["flower","flow","flight"]
Output: "fl"

Example 2:
Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
 
Constraints:
1 <= strs.length <= 200
0 <= strs[i].length <= 200
strs[i] consists of only lowercase English letters if it is non-empty.

Answer
*/
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
     string s;
     int m,n;
     sort(strs.begin(),strs.end());
     m=strs.size()-1;
     n=min(strs[0].length(),strs[m].length());
     int i=0;
     while(i<n && strs[0][i]==strs[m][i]){
        s+=strs[0][i];
        i++;
     }
    return s;
    }
};
