class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int>temp(nums.size());
        for(int i=0; i<nums.size(); i++){
            temp [(i+k)%nums.size()]= nums[i];
        }
        nums = temp;
    }
};
// t.c=0(n)
// s.c=0(n)



// without extra space
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k%=nums.size();
        reverse(nums.end()-k , nums.end());
        reverse(nums.begin(), nums.end()-k);
        reverse(nums.begin(), nums.end());
    }
};
