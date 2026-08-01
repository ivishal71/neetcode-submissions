class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int n = nums.size();
        for(int num: nums){
            mp[num]++;
        }
        vector<vector<int>> bucket(n+1); 
        for(auto &it: mp){
            bucket[it.second].push_back(it.first);
        }
        // sort(vec.rbegin(), vec.rend());
        vector<int> ans;
        for(int i=nums.size(); i>=0 && ans.size() <k ; i--){
            for(int numm : bucket[i]){
                ans.push_back(numm);

                if(ans.size() == k){
                    break;
                }
            }
        }
        return ans;
    
        
    }
};
