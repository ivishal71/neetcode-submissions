class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int n = nums.size();
        for(int num: nums){
            mp[num]++;
        }
        vector<pair<int, int>> vec;
        for(auto &it: mp){
            vec.push_back({it.second, it.first});
        }
        sort(vec.rbegin(), vec.rend());
        vector<int> ans;
        for(int i=0; i<k; i++){
            ans.push_back(vec[i].second);
        }
        return ans;
    
        
    }
};
