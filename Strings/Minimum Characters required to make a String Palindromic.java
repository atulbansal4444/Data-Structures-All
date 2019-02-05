/*\
You are given a string. The only operation allowed is to insert characters in the beginning of the string. How many minimum characters are needed to be inserted to make the string a palindrome string

Example:
Input: ABC
Output: 2
Input: AACECAAAA
Output: 2
*/
public class Solution {
    public int solve(String A) {
        int n = A.length();
        int ans = n;
        while(n>1 && !isPalindrome(A, n)) {
            n--;
        }
        return ans-n;
    }
    public boolean isPalindrome(String A, int len) {
        int i=0, j=len-1;
        while(i<=j) {
            if(A.charAt(i)==A.charAt(j))
                { 
                    i++;
                    j--;
                }
                else
                    return false;
        }
        return true;
    }
}