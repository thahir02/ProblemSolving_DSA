/* Problem 
Excel Sheet Column Number

Given a string columnTitle that represents the column title as appears in an Excel sheet, 
return its corresponding column number.

For example:
A -> 1
B -> 2
C -> 3
...
Z -> 26
AA -> 27
AB -> 28 
...
 
Example 1:
Input: columnTitle = "A"
Output: 1

Example 2:
Input: columnTitle = "AB"
Output: 28

Example 3:
Input: columnTitle = "ZY"
Output: 701 

Constraints:
1 <= columnTitle.length <= 7
columnTitle consists only of uppercase English letters.
columnTitle is in the range ["A", "FXSHRXW"].
Answer 
*/
//Approach 1
class Solution {
public:
    int titleToNumber(string columnTitle) {
        int def='A'-1;
        int n=columnTitle.length();
        int temp;
        int cur=1,ans=0;
        for(int i=n-1;i>-1;i--){
            temp=columnTitle[i];
            ans=ans+(temp-def)*cur;
            if(i!=0){
                cur=cur*26;
            }
        }
    return ans;  
    }
};
//Approach 2
class Solution {
public:
    int titleToNumber(string columnTitle) {
        int result = 0;
        for(char c : columnTitle)
        {
			//d = s[i](char) - 'A' + 1 (we used  s[i] -  'A' to convert the letter to a number like it's going to be C)

            int d = c - 'A' + 1;
            result = result * 26 + d;
        }
        return result;
    }
};
