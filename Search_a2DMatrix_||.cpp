/* problem :  -
Search a 2D Matrix ||
Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. 
This matrix has the following properties:

Integers in each row are sorted in ascending from left to right.
Integers in each column are sorted in ascending from top to bottom.
 
Example 1:

Input: matrix = [[1,4,7,11,15],[2,5,8,12,19],[3,6,9,16,22],[10,13,14,17,24],[18,21,23,26,30]], target = 5
Output: true

Example 2:

Input: matrix = [[1,4,7,11,15],[2,5,8,12,19],[3,6,9,16,22],[10,13,14,17,24],[18,21,23,26,30]], target = 20
Output: false 

Constraints:

m == matrix.length
n == matrix[i].length
1 <= n, m <= 300
-10^9 <= matrix[i][j] <= 10^9
Answer 
*/
//Time complexity O(n*m)
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int si = matrix.size();
        for (int i = 0; i < si; i++) {
            for (int j = 0; j < matrix[i].size(); j++) {  // ✅ fixed column loop
                if (matrix[i][j] == target) {
                    return true;
                }
            }
        }
        return false;
    }
};
//Time complexity O(n+m)
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();//row
        int m=matrix[0].size();//cloumn
        int i=0,j=m-1;//initially i=0th row,j= last element of 0th row
        while(i!=n && j!=-1)
            if(matrix[i][j]>target)//when last element is greater than target 
                j--;
            else if(matrix[i][j]<target)//when last element is less than the target 
                    i++;
            else
                    return true;
        
        return false;
    }
};
