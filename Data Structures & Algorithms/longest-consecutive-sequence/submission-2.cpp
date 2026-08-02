//OPTIMAL APP-- USING SET HERE AND SEARCH FOR ONE LESS AND ONE MORE NUMBER------
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(),nums.end());
        if(nums.size() == 0){
            return 0;
        }
        int longest = 1;
        for(int num : nums){
            if(st.find(num-1) == st.end()){
                int current = num;
                int count = 1;

                while(st.find(current+1) != st.end()){
                    current++;
                    count++;
                }
                longest = max(longest, count);
            }
           
        }
        return longest;
        
        
    }
};




//BRUTE FORCE APPP---
// class Solution { 
// public:
//     int longestConsecutive(vector<int>& nums) {
//         int n = nums.size();
//         if(n == 0){
//             return 0;
//         }
//         int count = 1;
//         int largest = 1;
//         sort(nums.begin(), nums.end());
//         for(int i=1; i<n; i++){
//             if(nums[i] == nums[i-1]){
//                 continue;
//             }
//             else if(nums[i] == nums[i-1]+1){
//                 count++;
//                 largest = max(largest, count);
//             }
//             else{
//                 largest = max(largest, count);
//                 count = 1;
//             }

//         }
//         largest = max(largest, count);
//         return largest;        
//     }
// };

