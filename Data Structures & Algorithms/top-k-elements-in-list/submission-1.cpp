class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;

        for(auto x: nums){
            mp[x]++;
        }

        vector<vector<int>>cnt(nums.size()+1);

        for(auto x: mp){
            cnt[x.second].push_back(x.first);
        }
        vector<int>ans;
        for(int i = cnt.size()-1 ;i >0 ;i--){
            for(auto x:cnt[i]){
                ans.push_back(x);
                if(ans.size()==k){
                    return ans;
                }
            }
        }
        return ans;
    }
};
