class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans=0;
        int ans2=0;
        int n= nums.size();
        for(int i=0; i<n; i++){
            ans= ans^nums[i];
            ans2=ans2^(i+1);
        }
        return ans^ans2;
    }
};
