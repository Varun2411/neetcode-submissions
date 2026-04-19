class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        vector<int>ans;
        
        for(int i = 0 ; i <nums.size();i++){
            int diff = (target - nums[i]);
            if( mp.contains(diff)){
                if(mp[diff]>i){
                    return {i,mp[diff]};
                }
                ans = {mp[diff],i};
                
            }
            mp[nums[i]]=i;
        }
        return ans;
    }
};
