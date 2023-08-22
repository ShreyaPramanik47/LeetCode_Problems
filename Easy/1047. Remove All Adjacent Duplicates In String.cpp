class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        int len = s.length();
        int i=0;
        while(i<len){
            if(st.empty()){
                st.push(s[i]);
            }
            else if(!st.empty()&& (st.top()!=s[i])){
                st.push(s[i]);
            }
            else if(!st.empty()&& (st.top()==s[i])){
                st.pop();
            }

            i++;
        }
        string ans;
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
