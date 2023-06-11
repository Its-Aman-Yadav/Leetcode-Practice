//https://leetcode.com/problems/evaluate-reverse-polish-notation/description/

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int n = tokens.size();
        int ans = 0;
        int temp = 0;

        if (n == 1) return stoi(tokens[0]);
        else {
            for (int i = 0; i < n; i++) {
                if (tokens[i] == "+") {
                    temp = st.top();
                    st.pop();
                    ans = st.top() + temp;
                    st.pop();
                    st.push(ans);
                } else if (tokens[i] == "*") {
                    temp = st.top();
                    st.pop();
                    ans = st.top() * temp;
                    st.pop();
                    st.push(ans);
                } else if (tokens[i] == "-") {
                    temp = st.top();
                    st.pop();
                    ans = st.top() - temp;
                    st.pop();
                    st.push(ans);
                } else if (tokens[i] == "/") {
                    temp = st.top();
                    st.pop();
                    ans = st.top() / temp;
                    st.pop();
                    st.push(ans);
                } else {
                    st.push(stoi(tokens[i]));
                }
            }
            return ans; 
        }
    }
};
