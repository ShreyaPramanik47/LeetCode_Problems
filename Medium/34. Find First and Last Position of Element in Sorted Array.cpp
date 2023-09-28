class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low = 0, high = nums.size()-1;
        int start = -1, end = -1;

        while(low<=high){
            int mid = low + (high-low)/2;
            if(nums[mid] < target)
            {
                 low = mid+1;
                  }
            else if(nums[mid] > target)
            {
                 high = mid-1;
                  }
            else{  
                start = mid;
                high = mid-1;
            }
        }
        
        if(start!=-1){
            low = 0, high = nums.size()-1;
            while(low<=high){
                int mid = low + (high-low)/2;
                if(nums[mid] < target)
                {
                     low = mid+1;
                      }
                else if(nums[mid] > target)
                {
                     high = mid-1; 
                }
                else{ 
                    end = mid;
                    low = mid+1;
                }
            }
        }

        return {start, end};
    }

};
