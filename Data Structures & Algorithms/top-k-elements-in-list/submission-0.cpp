class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int str: nums){
            mp[str]++;   //count frequency here---
        }
        vector<pair<int, int>> vec;
        for(auto &it: mp){
            vec.push_back({it.second, it.first});    //store freq and number
        }
        // sort in descending order---
        sort(vec.rbegin(), vec.rend());
        vector<int> ans;
        for(int i=0; i<k; i++){
            ans.push_back(vec[i].second);

        }
        return ans;
        
    }
};
