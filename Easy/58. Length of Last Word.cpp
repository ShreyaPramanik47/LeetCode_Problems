class Solution {
public:
    int lengthOfLastWord(string s) {
        stack<char>st;
        int len=s.length();
        for(int i=len-1; i>=0; i--){
            char ch=s[i];
            if(s[i]!=' '){
                st.push(ch);
            }
            else if(s[i]==' ' && !st.empty()){
                break;
            }
           else if(s[i]==' '&& s.empty()){
               st.push(ch);
           }
        }
        int ans= st.size();
        return ans;
        
    }
};
