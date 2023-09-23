
class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        int cnt=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='(' && cnt==0){
                cnt++;
            }
            else if(s[i]=='(' && cnt>=1){
                ans+=s[i];
                cnt++;
            }
            else if(s[i]==')' && cnt>1){
                ans+=s[i];
                cnt--;
            }
            else if(s[i]==')' && cnt==1){
            cnt--;
            }
        }
        return ans;
    }
};
