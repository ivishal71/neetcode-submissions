//BRUTE FORCE APP----
// class Solution {    
// public:
//     vector<int> topKFrequent(vector<int>& nums, int k) {
//         unordered_map<int,int> mp;
//         for(int str: nums){
//             mp[str]++;   //count frequency here---
//         }
//         vector<pair<int, int>> vec;
//         for(auto &it: mp){
//             vec.push_back({it.second, it.first});    //store freq and number
//         }
//         // sort in descending order---
//         sort(vec.rbegin(), vec.rend());
//         vector<int> ans;
//         for(int i=0; i<k; i++){
//             ans.push_back(vec[i].second);   //STORE SORTED VALUE UPTO K IN ANS--

//         }
//         return ans;       
//     }
// };




//OPTIMAL APPP---USING BUCKET SORT---
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for(int num : nums){
            mp[num]++;
        }
        vector<vector<int>> bucket(nums.size()+1);
        for(auto &it: mp){
            bucket[it.second].push_back(it.first);
        }
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


