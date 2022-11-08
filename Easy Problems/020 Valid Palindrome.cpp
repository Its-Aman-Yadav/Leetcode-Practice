//https://leetcode.com/problems/valid-palindrome/

class Solution {
public:
    bool isPalindrome(string s) {
        int start = 0;
        int n = s.size();
        int end = n-1;
        
        while(start<=end) {

		while(start < end && !isalnum(s[start])) start++;
		while(start < end && !isalnum(s[end])) end--;

		//compare characters
		if(toupper(s[start]) != toupper(s[end])) return false;

		start++;// else
		end--;
	}
        return true;
    }
};
