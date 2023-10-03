class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long sum=0;
        long long maxi = INT_MIN;
        for(int num:nums){
            sum+=num;
            maxi=max(maxi,sum);
             if(sum<0){
                sum=0;
            }
        }
        return maxi;
    }
};
