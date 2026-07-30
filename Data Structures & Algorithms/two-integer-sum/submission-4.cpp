//OPTIMAL APP--- USING HASHMAP---
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int> mp;
        for(int i=0; i<n; i++){
            int first = nums[i];

            int second = target - first;
            //now find in map--
            if(mp.find(second) != mp.end()){
                return{mp[second],i};

            }
            mp[first] = i;
        }
        return {};
        
    }
};





//BRUTE FORCE APP-----
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         int n = nums.size();
//         for(int i=0; i<n; i++){
//             int first =nums[i];
//             for(int j=i+1; j<n; j++){
//                int second = nums[j];
//                int ans = first+second;

//                 if(ans == target){
//                     return {i, j};
//                 }
            
//             }
//         }
//         return { };        
//     }
// };




