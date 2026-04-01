int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        int n = nums.size()-1;
        for(int i = 0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto element:mp){
            if(element.second > n/2){
                return element.first;
            }
        }
        return -1;
    }