class Solution {
public:
    bool check(vector<int>& nums) {
        int start = 0;
        int reverseVal = 0;
        for(int i = 0;i<nums.size()-1;i++){
            if(nums[i] <= nums[i+1]){
                continue;
            }
            else{
                reverseVal +=1;
            }
        }
        if(reverseVal == 0){
            return true;
        }
        if(reverseVal > 1){
            return false;
        }
        if(reverseVal ==1 && nums[0] >= nums[nums.size()-1]){
            return true;
        }
        else{
            return false;
        }
    }
};