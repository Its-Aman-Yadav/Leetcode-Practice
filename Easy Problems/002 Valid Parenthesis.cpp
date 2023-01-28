//https://leetcode.com/problems/valid-parentheses/

class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        if (s.length() < 2) 
            return false;
        for (int i = 0; i < s.length(); i++) {
            char c = s.at(i);
            if (c == '{' || c == '(' || c == '[') {
                st.push(c);
            } else {
                if (st.empty())
                    return false;
                if (c == '}' && st.top() == '{')
                    st.pop();
                else if (c == ')' && st.top() == '(')
                    st.pop();
                else if (c == ']' && st.top() == '[')
                    st.pop();
                else
                    return false;
            }
        }
        return st.empty();
    }
};

--------------------------------------------------------------------------------------------------------------------------------------------------------------------

class Solution {
public:
    bool isValid(string s) {
        stack<char> st; 
        for(auto i:s) {  //iterate every element of s
            
            if(i=='(' or i=='{' or i=='[') 
                st.push(i);
            
            else {
                if(st.empty() or (st.top()=='(' and i!=')') or (st.top()=='{' and i!='}') or (st.top()=='[' and i!=']')) return false;
                st.pop();  
            }
        }
        return st.empty(); 
    }
};
