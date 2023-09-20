class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();

        // BRUTE FORCE--->
        // for(int i=0; i<n; i++){
        //       int cnt=0;
        //     for(int j=0; j<n; j++){
        //         if(nums[i]==nums[j]){
        //             cnt++;
        //         }
        //     }
        //     if(cnt>n/2){
        //         return nums[i];
        //     }
        // }
        // return -1;

        // OPTIMAL APPROCH--->
        int cnt=0;
        int el;
        for(int i=0; i<n; i++){
            if(cnt==0){
                el=nums[i];
                cnt=1;
            }
            else if(nums[i]==el){
                cnt++;
            }
            else cnt--;
        }
        int cnt1=0;
        for(int i=0; i<n; i++){
            if(nums[i]==el){
                cnt1++;
            }
        }
        if(cnt1>(n/2)){
            return el;
        }
        return -1;
    }
};
