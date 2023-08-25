class Solution {
public:
    bool check(vector<int>& nums) {
        int i, j;
        for(i=1 ; i<nums.size() ; i++)
        {
            if(nums[i]>=nums[i-1])
                continue;
            else if(nums[i]<nums[i-1])
            {
                if(nums[i]>nums[0])
                    return false;
                for(j=i+1 ; j<nums.size() ; j++)
                {
                    if(nums[j]>=nums[j-1] && nums[j]<=nums[0])
                    {
                        continue;
                    }
                    else
                    {
                        return false;
                    }
                }
            }
        }
        return true;
    }
};
