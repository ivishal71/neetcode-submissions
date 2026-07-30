class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for(int i=0; i<n; i++){
            int first =nums[i];
            for(int j=i+1; j<n; j++){
               int second = nums[j];
               int ans = first+second;

                if(ans == target){
                    return {i, j};
                }
            
            }
        }
        return { };
        
        
    }
};
