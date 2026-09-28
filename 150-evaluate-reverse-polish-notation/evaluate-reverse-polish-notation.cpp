class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        for(string s: tokens) {
            if(s == "+") {
                int firstNum = st.top();
                st.pop();
                int secondNum = st.top();
                st.pop();
                st.push(firstNum + secondNum);
            } else if(s == "-") {
                int firstNum = st.top();
                st.pop();
                int secondNum = st.top();
                st.pop();
                st.push(secondNum - firstNum);
            } else if(s == "*") {
                int firstNum = st.top();
                st.pop();
                int secondNum = st.top();
                st.pop();
                st.push(secondNum * firstNum);
            } else if(s == "/"){
                int firstNum = st.top();
                st.pop();
                int secondNum = st.top();
                st.pop();
                st.push(secondNum / firstNum);
            } else {
                st.push(stoi(s));
            }
        }
        return st.top();
    }
};