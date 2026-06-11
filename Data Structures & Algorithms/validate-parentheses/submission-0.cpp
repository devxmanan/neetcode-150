class Solution {
   public:
    bool isValid(string s) {
        stack<int> st;
        bool valid = true;

        for (char ch : s) {
            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            } else {
                if (st.empty()) {
                    valid = false;
                    break;
                }

                char top = st.top();

                if ((ch == ')' && top == '(') || (ch == '}' && top == '{') ||
                    (ch == ']' && top == '[')) {
                    st.pop();
                } else {
                    valid = false;
                    break;
                }
            }
        }

        if (!st.empty()) {
            valid = false;
        }

        return valid;
    }
};
